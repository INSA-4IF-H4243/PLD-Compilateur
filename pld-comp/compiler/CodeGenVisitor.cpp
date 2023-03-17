#include "CodeGenVisitor.h"
#include <string>
#include <map>
std::map<std::string, int> map;
int compteur = 0;

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx)
{
	std::string retour = ctx->id()->getText();
	std::cout << ".globl	main\n"
				 " main: \n"
				 "# prologue\n"
				 "pushq %rbp 		# save %rbp on the stack\n"
				 "movq %rsp, %rbp 	# define %rbp for the current function\n";
	if (ctx->code())
		visit(ctx->code());

	// Return statement
	if (ctx->id()->VAR())
	{
		std::cout << "movl	" << map[retour] << "(%rbp), %eax\n";
	}
	else
	{
		std::cout << "movl	$" << retour << ", %eax\n";
	}
	std::cout << "# epilogue\n"
				 "popq %rbp 			# restore %rbp from the stack\n"
				 " 	ret\n";

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitCode(ifccParser::CodeContext *ctx)
{
	/*std::string affect = (ctx->VAR()->getText());
	int retval = stoi(ctx->CONST()->getText());
	std::cout<<
		" 	movl	$"<<retval<<", -4(%rbp)\n"
		" 	movl	-4(%rbp), %eax\n"
		;*/
	if (ctx->statement())
		visit(ctx->statement());
	if (ctx->code())
		visit(ctx->code());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitStatement(ifccParser::StatementContext *ctx)
{
	if (ctx->declaration()) {
		visit(ctx->declaration());
	} 
	if (ctx->affectation()) {
		visit(ctx->affectation());
	}
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
	std::string type = (ctx->type()->getText());
	if (ctx->VAR())
	{
		std::string var = (ctx->VAR()->getText());
		std::string id = (ctx->id()->getText());
		compteur += 4;
		map[var] = -compteur;
		std::cout << "     movl    $" << id << ", " << map[var] << "(%rbp)\n"
																   "     movl    "
				  << map[var] << "(%rbp), %eax\n";
	}
	else if (ctx->vars())
	{
		visit(ctx->vars());
	}
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
	std::string var = (ctx->VAR()->getText());
	std::string id = (ctx->id()->getText());
	if (ctx->id()->CONST())
		std::cout << "     movl    $" << id << ", " << map[var] << "(%rbp)\n";
	else if (ctx->id()->VAR())
		std::cout << "     movl    " << map[id] << "(%rbp), %eax\n"
				  << "     movl    %eax, " << map[var] << "(%rbp)\n";
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitVars(ifccParser::VarsContext *ctx)
{
	if (ctx->VAR())
	{
		std::string var = (ctx->VAR()->getText());
		compteur += 4;
		map[var] = -compteur;
		std::cout << "     movl    $0, " << map[var] << "(%rbp)\n";
	}
	if (ctx->vars()) {
		visit(ctx->vars());
	}
	return 0;
}
