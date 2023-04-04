#include "CodeGenVisitor.h"
#include <string>
#include <map>
#include "IR.h"
//std::map<std::string, int> map;
std::list<std::string> listeVars;
int compteur=0;
CFG* cfg;

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	//std::string retour = ctx->expr()->getText();
	if(ctx->code()) visit(ctx->code());
	string res = visit(ctx->expr());
	IRInstrCopy* instr = new IRInstrCopy(cfg->current_bb,"retour",res);
	cfg->current_bb->add_IRInstr(instr);
	

	return 0;
}
antlrcpp::Any CodeGenVisitor::visitUneInst(ifccParser::UneInstContext *ctx) 
{
	visit(ctx->instruction());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitMulInst(ifccParser::MulInstContext *ctx) 
{
	visit(ctx->instruction());
	visit(ctx->code());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *ctx) 
{
	visit(ctx->vars());
	string res = visit(ctx->expr());

	for(std::string var:listeVars){
		IRInstrCopy* instr = new IRInstrCopy(cfg->current_bb,var,res);
		cfg->current_bb->add_IRInstr(instr);
		;
	}
	listeVars.clear();
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx) 
{
	std::string type = (ctx->TYPE()->getText());

	visit(ctx->vars());
	for(std::string var:listeVars){
        compteur+=4;
		cfg->add_SymbolIndex(var,-compteur);
    }
	if(ctx->expr()){	
		string res = visit(ctx->expr());
		for(std::string var:listeVars){
			IRInstrCopy* instr = new IRInstrCopy(cfg->current_bb,var,res);
			cfg->current_bb->add_IRInstr(instr);
			;
		}	
	}
	listeVars.clear();
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitVars(ifccParser::VarsContext *ctx) {
	listeVars.push_back(ctx->VAR()->getText());
	if(ctx->vars()){
		visit(ctx->vars());
	}
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitPar(ifccParser::ParContext *ctx) 
{
	string res = visit(ctx->expr());
	return res;
}

antlrcpp::Any CodeGenVisitor::visitAdd(ifccParser::AddContext *ctx) 
{
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]); 
	compteur += 4;
	std::string tmp = "_tmp"+std::to_string(compteur);
	cfg->add_SymbolIndex(tmp,-compteur);
	IRInstrAdd* instr = new IRInstrAdd(cfg->current_bb,tmp,res_gauche,res_droite);
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}
antlrcpp::Any CodeGenVisitor::visitSub(ifccParser::SubContext *ctx) 
{
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]); 
	compteur += 4;
	std::string tmp = "_tmp"+std::to_string(compteur);
	cfg->add_SymbolIndex(tmp,-compteur);
	IRInstrSub* instr = new IRInstrSub(cfg->current_bb,tmp,res_gauche,res_droite);
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}
antlrcpp::Any CodeGenVisitor::visitMuldiv(ifccParser::MuldivContext *ctx) 
{
	char op=ctx->OP()->getText()[0];
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	std::string tmp = "";
	
	if(op=='*'){
		compteur += 4;
		std::string tmp = "_tmp"+std::to_string(compteur);
		cfg->add_SymbolIndex(tmp,-compteur);
		IRInstrMul* instr = new IRInstrMul(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else {
		compteur += 4;
		std::string tmp = "_tmp"+std::to_string(compteur);
		cfg->add_SymbolIndex(tmp,-compteur);
		IRInstrDiv* instr = new IRInstrDiv(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	return tmp;
}

antlrcpp::Any CodeGenVisitor::visitVar(ifccParser::VarContext *ctx) {
	return ctx->VAR()->getText();
	}

antlrcpp::Any CodeGenVisitor::visitConst(ifccParser::ConstContext *ctx) {
	compteur+=4;
	std::string tmp = "_tmp"+std::to_string(compteur);
	cfg->add_SymbolIndex(tmp,-compteur);
	int cst = stoi(ctx->CONST()->getText());
	IRInstrLdconst* instr = new IRInstrLdconst(cfg->current_bb,tmp,cst);
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}








