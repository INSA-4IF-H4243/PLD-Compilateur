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

	BasicBlock *bb = new BasicBlock(cfg, "entry");
	cfg->add_bb(bb);

	if (ctx->code())
		visit(ctx->code());
	std::string res = visit(ctx->expr());
	IRInstrRetour *instr = new IRInstrRetour(cfg->current_bb, res);
	cfg->current_bb->add_IRInstr(instr);

	cfg->gen_asm(std::cout);

	return 0;
}

antlrcpp::Any CFGVisitor::visitBlock(ifccParser::BlockContext *ctx)
{
	if (ctx->code())
		visit(ctx->code());
	return 0;
}

antlrcpp::Any CFGVisitor::visitWhileInst(ifccParser::WhileInstContext *ctx)
{
	BasicBlock *cond_block = new BasicBlock(cfg, "testWhile" + std::to_string(compteurCFG));
	cfg->current_bb->exit_true = cond_block;
	cfg->add_bb(cond_block);

	std::string res_test = visit(ctx->expr());
	compteurCFG += 4;
	std::string tmp_test = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp_test, -compteurCFG);

	compteurCFG += 4;
	std::string tmp = "_tmp_" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	IRInstrLdconst *instr0 = new IRInstrLdconst(cfg->current_bb, tmp, 0);
	cfg->current_bb->add_IRInstr(instr0);

	IRInstrCmp_eq *instr = new IRInstrCmp_eq(cfg->current_bb, tmp_test, res_test, tmp);
	cfg->current_bb->add_IRInstr(instr);

	BasicBlock *body_block = new BasicBlock(cfg, "bodyWhile" + std::to_string(compteurCFG));
	cond_block->exit_true = body_block;
	body_block->exit_true = cond_block;
	cfg->add_bb(body_block);
	visit(ctx->code()[0]);

	BasicBlock *afterWhile = new BasicBlock(cfg, "afterWhile" + std::to_string(compteurCFG));
	cond_block->exit_false = afterWhile;

	cfg->add_bb(afterWhile);

	if (ctx->code()[1])
	{
		visit(ctx->code()[1]);
	}
	return 0;
}

antlrcpp::Any CFGVisitor::visitIfInst(ifccParser::IfInstContext *ctx)
{
	BasicBlock *cond_block = new BasicBlock(cfg, "testIf" + std::to_string(compteurCFG));
	cfg->current_bb->exit_true = cond_block;
	cfg->add_bb(cond_block);

	std::string res_test = visit(ctx->expr());
	compteurCFG += 4;
	std::string tmp_test = "_tmp" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp_test, -compteurCFG);

	compteurCFG += 4;
	std::string tmp = "_tmp_" + std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp, -compteurCFG);
	IRInstrLdconst *instr0 = new IRInstrLdconst(cfg->current_bb, tmp, 0);
	cfg->current_bb->add_IRInstr(instr0);

	IRInstrCmp_eq *instr = new IRInstrCmp_eq(cfg->current_bb, tmp_test, res_test, tmp);
	cfg->current_bb->add_IRInstr(instr);

	BasicBlock *bodyif_block = new BasicBlock(cfg, "bodyIf" + std::to_string(compteurCFG));
	cfg->add_bb(bodyif_block);
	cond_block->exit_true = bodyif_block;
	visit(ctx->code()[0]);

	BasicBlock *endIf = new BasicBlock(cfg, "endIf" + std::to_string(compteurCFG));
	bodyif_block->exit_true = endIf;
	cond_block->exit_false = endIf;

	if (ctx->ELSE())
	{
		BasicBlock *bodyelse_block = new BasicBlock(cfg, "bodyElse" + std::to_string(compteurCFG));
		cfg->add_bb(bodyelse_block);
		cond_block->exit_false = bodyelse_block;
		bodyelse_block->exit_true = endIf;
		visit(ctx->code()[1]);

		cfg->add_bb(endIf);
		if (ctx->code()[2])
		{
			visit(ctx->code()[2]);
		}
	}
	else
	{
		cfg->add_bb(endIf);
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
