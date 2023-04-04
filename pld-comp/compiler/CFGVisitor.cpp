#include "CFGVisitor.h"
#include <string>
#include <map>
#include "IR.h"
//std::map<std::string, int> map;
std::list<std::string> listeVarsCFG;
int compteurCFG=0;
CFG* cfg;

antlrcpp::Any CFGVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	std::cout<<"\n.globl	main\n"
		" main: \n\n"
		"# prologue\n"
		" pushq %rbp 		# save %rbp on the stack\n"
		" movq %rsp, %rbp 	# define %rbp for the current function\n";
	cfg=new CFG();
	//cout<<"construction CFG"<<endl;
	//std::string retour = ctx->expr()->getText();
	if(ctx->code()) visit(ctx->code());
	//cout<<"ajout retour"<<endl;
	string res = visit(ctx->expr());
	IRInstrRetour* instr = new IRInstrRetour(cfg->current_bb,res);
	//cout<<"ajout bb"<<endl;
	cfg->current_bb->add_IRInstr(instr);
	
	//cout<<"gen pseudo code"<<endl;
	cfg->gen_asm(std::cout);
	std::cout<<	"# epilogue\n"
			" popq %rbp 			# restore %rbp from the stack\n"	
			" 	ret\n";

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

	for(std::string var:listeVarsCFG){
		IRInstrCopy* instr = new IRInstrCopy(cfg->current_bb,var,res);
		cfg->current_bb->add_IRInstr(instr);
		;
	}
	listeVarsCFG.clear();
	return 0;
}

antlrcpp::Any CFGVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx) 
{
	//cout<<"visit declaration"<<endl;
	std::string type = (ctx->TYPE()->getText());

	visit(ctx->vars());
	//cout<<"ajout compteur"<<endl;
	for(std::string var:listeVarsCFG){
        compteurCFG+=4;
		cfg->add_SymbolIndex(var,-compteurCFG);
		//cout<<"add_SymbolIndex"<<endl;
    }
	//cout<<"Creation instr"<<endl;
	if(ctx->expr()){	
		string res = visit(ctx->expr());
		for(std::string var:listeVarsCFG){
			IRInstrCopy* instr = new IRInstrCopy(cfg->current_bb,var,res);
			cfg->current_bb->add_IRInstr(instr);
			;
		}	
	}
	listeVarsCFG.clear();
	return 0;
}

antlrcpp::Any CFGVisitor::visitVars(ifccParser::VarsContext *ctx) {
	listeVarsCFG.push_back(ctx->VAR()->getText());
	if(ctx->vars()){
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
	char op=ctx->OPP()->getText()[0];
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]); 
	compteurCFG += 4;
	std::string tmp = "_tmp"+std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp,-compteurCFG);
	IRInstr* instr;
	if(op=='+'){
		 instr = new IRInstrAdd(cfg->current_bb,tmp,res_gauche,res_droite);
	}
	else if(op=='-'){
		 instr = new IRInstrSub(cfg->current_bb,tmp,res_gauche,res_droite);
		
	}
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}
antlrcpp::Any CFGVisitor::visitMuldiv(ifccParser::MuldivContext *ctx) 
{
	char op=ctx->OPM()->getText()[0];
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	std::string tmp = "";
	
	if(op=='*'){
		compteurCFG += 4;
		tmp = "_tmp"+std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp,-compteurCFG);
		IRInstrMul* instr = new IRInstrMul(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else {
		compteurCFG += 4;
		tmp = "_tmp"+std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp,-compteurCFG);
		IRInstrDiv* instr = new IRInstrDiv(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	return tmp;
}

antlrcpp::Any CFGVisitor::visitVar(ifccParser::VarContext *ctx) {
	return ctx->VAR()->getText();
	}

antlrcpp::Any CFGVisitor::visitConst(ifccParser::ConstContext *ctx) {
	compteurCFG+=4;
	std::string tmp = "_tmp"+std::to_string(compteurCFG);
	cfg->add_SymbolIndex(tmp,-compteurCFG);
	int cst = stoi(ctx->CONST()->getText());
	IRInstrLdconst* instr = new IRInstrLdconst(cfg->current_bb,tmp,cst);
	cfg->current_bb->add_IRInstr(instr);
	return tmp;
}

antlrcpp::Any CFGVisitor::visitCmp(ifccParser::CmpContext *ctx) {
	std::string op = ctx->CMPOP()->getText();
	string res_gauche = visit(ctx->expr()[0]);
	string res_droite = visit(ctx->expr()[1]);
	std::string tmp = "";
	
	if(op.compare("==")==0) {
		compteurCFG += 4;
		tmp = "_tmp"+std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp,-compteurCFG);
		IRInstrCmp_eq* instr = new IRInstrCmp_eq(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare(">")==0) {
		compteurCFG += 4;
		tmp = "_tmp"+std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp,-compteurCFG);
		IRInstrCmp_lt* instr = new IRInstrCmp_lt(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	else if (op.compare(">=")==0) {
		compteurCFG += 4;
		tmp = "_tmp"+std::to_string(compteurCFG);
		cfg->add_SymbolIndex(tmp,-compteurCFG);
		IRInstrCmp_le* instr = new IRInstrCmp_le(cfg->current_bb,tmp,res_gauche,res_droite);
		cfg->current_bb->add_IRInstr(instr);
	}
	return tmp;
}








