#include "CFGVisitor.h"
#include <string>
#include <map>
#include "IR.h"

std::list<std::string> listeVarsCFG;
std::vector<std::string> vectorInput;

// function, pair<params, nom_params_index>
std::map<std::string, std::map<std::string, std::string>> mapFunctionsCFG;
int compteurCFG = 0;
CFG *cfg = new CFG();
std::string funcActuelle = "";

antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx)
{
	if (ctx->func())
	{
		visit(ctx->func());
	}
	funcActuelle = "main";
	BasicBlock *bb = new BasicBlock(cfg, "main");
	cfg->add_bb(bb);
	bb->set_is_func(true);

	int stack_pointer = cfg->get_stack_pointer();
	IRInstrPrologue *instrPro = new IRInstrPrologue(cfg->current_bb, stack_pointer);
	cfg->current_bb->add_IRInstr(instrPro);

	if (ctx->code())
	{
		visit(ctx->code());
	}
	cfg->gen_asm(std::cout);
	return 0;
}

antlrcpp::Any CFGVisitor::visitFunc(ifccParser::FuncContext *ctx)
{
	funcActuelle = ctx->VAR()->getText();
	BasicBlock *bb = new BasicBlock(cfg, ctx->VAR()->getText());
	cfg->add_bb(bb);
	bb->set_is_func(true);
	int stack_pointer = cfg->get_stack_pointer();
	IRInstrPrologue *instrPro = new IRInstrPrologue(cfg->current_bb, stack_pointer);
	cfg->current_bb->add_IRInstr(instrPro);

	if (ctx->args())
	{
		visit(ctx->args());
	}
	if (ctx->code())
	{
		visit(ctx->code());
	}
	if (ctx->func())
	{
		visit(ctx->func());
	}
	return 0;
}

antlrcpp::Any CFGVisitor::visitReturn(ifccParser::ReturnContext *ctx)
{
	std::string res = visit(ctx->expr());
	IRInstrRetour *instr = new IRInstrRetour(cfg->current_bb, res);
	cfg->current_bb->add_IRInstr(instr);
	IRInstrEpilogue *instrEpi = new IRInstrEpilogue(cfg->current_bb);
	cfg->current_bb->add_IRInstr(instrEpi);
	return res;
}

int compteurArgs = 0;
std::vector<std::string> vectorName = {"%edi", "%esi", "%edx", "%ecx", "%r8d", "%r9d", "%r10d", 
				"%r11d", "%r12d", "%r13d", "%r14d", "%r15d"};

antlrcpp::Any CFGVisitor::visitArgs(ifccParser::ArgsContext *ctx)
{
	compteurCFG += 4;
	cfg->add_SymbolIndex("_arg" + std::to_string(compteurCFG), -compteurCFG);
	std::map<std::string, std::string> mappedParams;
	try
	{
		mappedParams = mapFunctionsCFG.at(cfg->current_bb->label);
		mappedParams.insert(std::pair<std::string, std::string>(ctx->VAR()->getText(), "_arg" + std::to_string(compteurCFG)));
		mapFunctionsCFG.at(cfg->current_bb->label) = mappedParams;
	}
	catch (const std::out_of_range &oor)
	{
		mappedParams.insert(std::pair<std::string, std::string>(ctx->VAR()->getText(), "_arg" + std::to_string(compteurCFG)));
		mapFunctionsCFG.insert(std::pair<std::string, std::map<std::string, std::string>>(cfg->current_bb->label, mappedParams));
	}

	IRInstrArg *instr = new IRInstrArg(cfg->current_bb, vectorName[compteurArgs], -compteurCFG);
	cfg->current_bb->add_IRInstr(instr);

	if (ctx->args())
	{
		compteurArgs++;
		visit(ctx->args());
	}
	compteurArgs = 0;
	return 0;
}

antlrcpp::Any CFGVisitor::visitBlock(ifccParser::BlockContext *ctx)
{
	visit(ctx->code());
	return 0;
}

antlrcpp::Any CFGVisitor::visitWhileInst(ifccParser::WhileInstContext *ctx)
{
	BasicBlock *cond_block = new BasicBlock(cfg, "testWhile" + std::to_string(compteurCFG));
	BasicBlock *body_block = new BasicBlock(cfg, "bodyWhile" + std::to_string(compteurCFG));
	BasicBlock *afterWhile = new BasicBlock(cfg, "afterWhile" + std::to_string(compteurCFG));

	IRInstrUncoJump *instrUnco = new IRInstrUncoJump(cfg->current_bb, cond_block->label);
	cfg->current_bb->add_IRInstr(instrUnco);

	cfg->add_bb(body_block);
	visit(ctx->code()[0]);
	IRInstrUncoJump *instrUnco1 = new IRInstrUncoJump(cfg->current_bb, cond_block->label);
	cfg->current_bb->add_IRInstr(instrUnco1);

	cfg->add_bb (cond_block);	
	std::string res_test = visit(ctx->expr());
	compteurCFG += 4;
	std::string tmp_test = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp_test, -compteurCFG);

	compteurCFG+=4;
	std::string tmp = "_tmp_"+std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp,-compteurCFG);
	IRInstrLdconst* instr0 = new IRInstrLdconst(cfg->current_bb,tmp,0);
	cfg->current_bb->add_IRInstr(instr0);
	IRInstrCmp_eq* instr = new IRInstrCmp_eq(cfg->current_bb,tmp_test,res_test,tmp);
	cfg->current_bb->add_IRInstr(instr);
	IRInstrCondJump *instrCond = new IRInstrCondJump(cfg->current_bb, afterWhile->label);
	cfg->current_bb->add_IRInstr(instrCond);

	IRInstrUncoJump *instrUnco2 = new IRInstrUncoJump(cfg->current_bb, body_block->label);
	cfg->current_bb->add_IRInstr(instrUnco2);

	cfg->add_bb(afterWhile);
	if (ctx->code()[1])
	{
		visit(ctx->code()[1]);
	}
	return 0;
}

antlrcpp::Any CFGVisitor::visitIfInst(ifccParser::IfInstContext *ctx)
{
	BasicBlock *bodyif_block = new BasicBlock(cfg, "bodyIf" + std::to_string(compteurCFG));
	BasicBlock *bodyelse_block = new BasicBlock(cfg, "bodyElse" + std::to_string(compteurCFG));
	BasicBlock *endIf_block = new BasicBlock(cfg, "endIf" + std::to_string(compteurCFG));

	//recupere le flag
	std::string res_test = visit(ctx->expr());
	compteurCFG += 4;
	std::string tmp_test = "_tmp"+std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp_test,-compteurCFG);

	//declaration var à 0
	compteurCFG+=4;
	std::string tmp = "_tmp_"+std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp,-compteurCFG);
	IRInstrLdconst* instr0 = new IRInstrLdconst(cfg->current_bb,tmp,0);
	cfg->current_bb->add_IRInstr(instr0);

	//comparaison du flag avec la variable à 0
	IRInstrCmp_eq* instr = new IRInstrCmp_eq(cfg->current_bb,tmp_test,res_test,tmp);
	cfg->current_bb->add_IRInstr(instr);

	if (ctx->ELSE())
	{
		IRInstrEJump *instrE = new IRInstrEJump(cfg->current_bb, bodyelse_block->label);
		cfg->current_bb->add_IRInstr(instrE);
	}

	//ajout du bloc if
	cfg->add_bb(bodyif_block);
	
	//on visite le code
	visit(ctx->code()[0]);
	//Arpès le code, on jump au endif
	IRInstrUncoJump *instrUnco = new IRInstrUncoJump(cfg->current_bb, endIf_block->label);
	cfg->current_bb->add_IRInstr(instrUnco);

	if (ctx->ELSE())
	{
		cfg->add_bb(bodyelse_block);
		visit(ctx->code()[1]);
		cfg->add_bb(endIf_block);
		if (ctx->code()[2])
		{
			visit(ctx->code()[2]);
		}
	}
	else
	{	
		cfg->add_bb(endIf_block);
		if (ctx->code()[1])
		{
			visit(ctx->code()[1]);
		}
	}
	
	return 0;
}

antlrcpp::Any CFGVisitor::visitUneInst(ifccParser::UneInstContext *ctx)
{
	visit(ctx->instruction());
	return 0;
}

antlrcpp::Any CFGVisitor::visitMulInst(ifccParser::MulInstContext *ctx)
{
	visit(ctx->instruction());
	visit(ctx->code());
	return 0;
}

antlrcpp::Any CFGVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
	visit(ctx->vars());
	string res = visit(ctx->expr());

	for (std::string var : listeVarsCFG)
	{
		IRInstrCopy *instr = new IRInstrCopy(cfg->current_bb, var, res);
		cfg->current_bb->add_IRInstr(instr);
	}
	listeVarsCFG.clear();
	return 0;
}

antlrcpp::Any CFGVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
	std::string type = (ctx->TYPE()->getText());
	visit(ctx->vars());
	for (std::string var : listeVarsCFG)
	{
		compteurCFG += 4;
		cfg->add_SymbolIndex(var, -compteurCFG);
	}
	if (ctx->expr())
	{
		string res = visit(ctx->expr());
		for (std::string var : listeVarsCFG)
		{
			IRInstrCopy *instr = new IRInstrCopy(cfg->current_bb, var, res);
			cfg->current_bb->add_IRInstr(instr);
		}
	}
	listeVarsCFG.clear();
	return 0;
}

antlrcpp::Any CFGVisitor::visitVars(ifccParser::VarsContext *ctx)
{
	listeVarsCFG.push_back(ctx->VAR()->getText());
	if (ctx->vars())
	{
		visit(ctx->vars());
	}
	return 0;
}

antlrcpp::Any CFGVisitor::visitPar(ifccParser::ParContext *ctx)
{
	string res = visit(ctx->expr());
	return res;
}

antlrcpp::Any CFGVisitor::visitAddsub(ifccParser::AddsubContext *ctx)
{
	char op = ctx->OPP()->getText()[0];
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);

	// compteurCFG += 4;
	// std::string tmp2 = "_tmp" + std::to_string(compteurCFG);
	// cfg->add_SymbolIndex(tmp2, -compteurCFG);
	// mapFunctionsCFG.at(funcActuelle).insert(std::pair<std::string, std::string>(ctx->expr()[0]->getText(), "_arg" + std::to_string(compteurCFG)));
	
	// compteurCFG += 4;
	// std::string tmp3 = "_tmp" + std::to_string(compteurCFG);
	// cfg->add_SymbolIndex(tmp3, -compteurCFG);
	// mapFunctionsCFG.at(funcActuelle).insert(std::pair<std::string, std::string>(ctx->expr()[1]->getText(), "_arg" + std::to_string(compteurCFG)));

	
	if (funcActuelle.compare("main") != 0)
	{
		std::map<std::string, std::string> listMappedParams = mapFunctionsCFG[funcActuelle];
		res_gauche = listMappedParams[res_gauche];
		res_droite = listMappedParams[res_droite];
	}
	IRInstr *instr;
	if (op == '+')
	{
		instr = new IRInstrAdd(cfg->current_bb, tmp, res_gauche, res_droite);
	}
	else if (op == '-')
	{
		instr = new IRInstrSub(cfg->current_bb, tmp, res_gauche, res_droite);
	}
	cfg->current_bb->add_IRInstr(instr);

	return tmp;
}

antlrcpp::Any CFGVisitor::visitMuldiv(ifccParser::MuldivContext *ctx)
{
	char op = ctx->OPM()->getText()[0];
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	if (funcActuelle.compare("main") != 0)
	{
		std::map<std::string, std::string> listMappedParams = mapFunctionsCFG[funcActuelle];
		res_gauche = listMappedParams[res_gauche];
		res_droite = listMappedParams[res_droite];
	}
	if (op == '*')
	{
		IRInstrMul *instr = new IRInstrMul(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else
	{
		IRInstrDiv *instr = new IRInstrDiv(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	return tmp;
}

antlrcpp::Any CFGVisitor::visitVar(ifccParser::VarContext *ctx)
{
	return ctx->VAR()->getText();
}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx)
{
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	int cst = stoi(ctx->CONST()->getText());
	IRInstrLdconst *instr = new IRInstrLdconst(cfg->current_bb, tmp, cst);
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}

antlrcpp::Any CFGVisitor::visitCmp(ifccParser::CmpContext *ctx)
{
	std::string op = ctx->CMPOP()->getText();
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	if (funcActuelle.compare("main") != 0)
	{
		std::map<std::string, std::string> listMappedParams = mapFunctionsCFG[funcActuelle];
		res_gauche = listMappedParams[res_gauche];
		res_droite = listMappedParams[res_droite];
	}

	if (op.compare("==") == 0)
	{
		IRInstrCmp_eq *instr = new IRInstrCmp_eq(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare("!=") == 0)
	{
		IRInstrCmp_ne *instr = new IRInstrCmp_ne(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare("<") == 0)
	{
		IRInstrCmp_lt *instr = new IRInstrCmp_lt(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare(">") == 0)
	{
		IRInstrCmp_gt *instr = new IRInstrCmp_gt(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare("<=") == 0)
	{
		IRInstrCmp_le *instr = new IRInstrCmp_le(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare(">=") == 0)
	{
		IRInstrCmp_ge *instr = new IRInstrCmp_ge(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	return tmp;
}

antlrcpp::Any CFGVisitor::visitFuncCall(ifccParser::FuncCallContext *ctx)
{
	std::string func_name = ctx->VAR()->getText();
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	if (ctx->input())
	{
		visit(ctx->input());
		IRInstrFuncCall *instr = new IRInstrFuncCall(cfg->current_bb, func_name, tmp, vectorInput);
		cfg->current_bb->add_IRInstr(instr);
	}
	else
	{
		IRInstrFuncCall *instr = new IRInstrFuncCall(cfg->current_bb, func_name, tmp, {});
		cfg->current_bb->add_IRInstr(instr);
	}
	vectorInput.clear();
	return tmp;
}

antlrcpp::Any CFGVisitor::visitInput(ifccParser::InputContext *ctx)
{
	vectorInput.push_back(ctx->expr()->getText());
	visit(ctx->expr());
	if (ctx->input())
	{
		visit(ctx->input());
	}
	return 0;
}
