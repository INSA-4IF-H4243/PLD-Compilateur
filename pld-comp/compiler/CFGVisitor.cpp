#include "CFGVisitor.h"
#include <string>
#include <map>
#include "IR.h"
// std::map<std::string, int> map;
std::list<std::string> listeVarsCFG;
int compteurCFG = 0;
CFG *cfg = new CFG();

antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx)
{
	std::cout << "\n.globl	main\n"
				 " main: \n\n"
				 "# prologue\n"
				 " pushq %rbp 		# save %rbp on the stack\n"
				 " movq %rsp, %rbp 	# define %rbp for the current function\n\n";
	BasicBlock *bb = new BasicBlock(cfg, "entry");
	cfg->add_bb(bb);

	if (ctx->code())
		visit(ctx->code());
	std::string res = visit(ctx->expr());
	IRInstrRetour *instr = new IRInstrRetour(cfg->current_bb, res);
	cfg->current_bb->add_IRInstr(instr);

	cfg->gen_asm(std::cout);
	std::cout << "# epilogue\n"
				 " popq %rbp 			# restore %rbp from the stack\n"
				 " 	ret\n";

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
	cfg->current_bb->exit_true = cond_block;
	std::string res_test = visit(ctx->expr());
	cfg->add_bb(cond_block);

	compteurCFG += 4;
	std::string tmp_test = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp_test, -compteurCFG);

	BasicBlock *body_block = new BasicBlock(cfg, "bodyWhile" + std::to_string(compteurCFG));
	visit(ctx->code()[0]);
	cfg->add_bb(body_block);
	BasicBlock *afterWhile = new BasicBlock(cfg, "afterWhile" + std::to_string(compteurCFG));

	cond_block->exit_true = body_block;
	cond_block->exit_false = afterWhile;

	body_block->exit_true = cond_block;

	if (ctx->code()[1])
	{
		visit(ctx->code()[1]);
	}
	cfg->add_bb(afterWhile);
	return 0;
}

antlrcpp::Any CFGVisitor::visitIfInst(ifccParser::IfInstContext *ctx)
{
	compteurCFG += 4;
	std::string tmp = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	if (ctx->ELSE())
	{
		BasicBlock *fl = new BasicBlock(cfg, "false" + std::to_string(compteurCFG));
		BasicBlock *tr = new BasicBlock(cfg, "true" + std::to_string(compteurCFG));
		BasicBlock *fin = new BasicBlock(cfg, "fin" + std::to_string(compteurCFG));

		cfg->current_bb->exit_false = fl;
		cfg->current_bb->exit_true = tr;
		
		std::string code0 = visit(ctx->code()[0]);
		cfg->add_bb(tr);
		cfg->current_bb->exit_true = fin;
		
		string code1 = visit(ctx->code()[1]);
		cfg->add_bb(fl);
		cfg->current_bb->exit_true = fin;
		if (ctx->code()[2])
		{
			visit(ctx->code()[2]);
		}
		cfg->add_bb(fin);
	}
	else
	{
		BasicBlock *tr = new BasicBlock(cfg, "true" + std::to_string(compteurCFG));
		BasicBlock *fin = new BasicBlock(cfg, "fin" + std::to_string(compteurCFG));

		cfg->current_bb->exit_false = fin;
		cfg->current_bb->exit_true = tr;
		
		string code0 = visit(ctx->code()[0]);
		cfg->add_bb(tr);
		
		cfg->current_bb->exit_true = fin;
		if (ctx->code()[1])
		{
			visit(ctx->code()[1]);
		}
		cfg->add_bb(fin);
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
	std::string tmp = "";

	if (op == '*')
	{
		compteurCFG += 4;
		tmp = "_tmp" + std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp, -compteurCFG);
		IRInstrMul *instr = new IRInstrMul(cfg->current_bb, tmp, res_gauche, res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else
	{
		compteurCFG += 4;
		tmp = "_tmp" + std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp, -compteurCFG);
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
