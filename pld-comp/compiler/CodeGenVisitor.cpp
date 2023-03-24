#include "CodeGenVisitor.h"
#include <string>
#include <map>
std::map<std::string, int> map;
int compteur=0;
antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	std::string retour = ctx->expr()->getText();
	std::cout<<".globl	main\n"
		" main: \n"
		"# prologue\n"
		"pushq %rbp 		# save %rbp on the stack\n"
		"movq %rsp, %rbp 	# define %rbp for the current function\n";
	if(ctx->code())
		visit(ctx->code());
	if(!ctx->expr()->VAR()){
		std::cout<<
			"movl	$"<< retour <<", %eax\n";
	}
	else{
		std::cout<<
			"movl	"<< map[retour] <<"(%rbp), %eax\n";
	}
	std::cout<<	"# epilogue\n"
			"popq %rbp 			# restore %rbp from the stack\n"	
			" 	ret\n";

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
	std::string var = (ctx->VAR()->getText());
	std::string expr = (ctx->expr()->getText());
	
	if (ctx->expr()->VAR()) {
		std::cout<<
		"movl	"<<map[expr]<<"(%rbp),%eax\n"
		"movl	%eax, "<<map[var]<<"(%rbp)\n"
		;
	}	
	else {
		int constInt = stoi(expr);
		std::cout<<
		"movl	$"<< constInt <<", "<<map[var]<<"(%rbp)\n"
		;
	}
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx) 
{
	std::string var = (ctx->VAR()->getText());

	std::string type = (ctx->TYPE()->getText());
	compteur+=4;
	map[var]=-compteur;

	if(ctx->expr()){
		std::string expr = (ctx->expr()->getText());
		if (ctx->expr()->VAR()) {
			std::cout<<
			"movl	"<<map[expr]<<"(%rbp),%eax\n"
			"movl	%eax, "<<map[var]<<"(%rbp)\n"
			;
		}	
		else {
			int constInt = stoi(expr);
			std::cout<<
			"movl	$"<< constInt <<", "<<map[var]<<"(%rbp)\n"
		;
	}	
	}


	return 0;
}


