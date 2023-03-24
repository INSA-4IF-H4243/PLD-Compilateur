#include "DeclarationCheckVisitor.h"
#include <string>
#include <map>
#include <list>

std::list<std::string> listeDeclarations;
std::list<std::string> listeLigne;

antlrcpp::Any DeclarationCheckVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    visit(ctx->vars());
    for(std::string var:listeLigne){
        std::cout << "#declaration de " << var << "\n" ;
        listeDeclarations.push_back(var);
    }
   
    if(ctx->expr()){
        visit(ctx->expr());
    }
    listeLigne.clear();
    return 0;
}

antlrcpp::Any DeclarationCheckVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{

    visit(ctx->vars());
    for(std::string var:listeLigne){
        std::cout << "#affectation de " << var << "\n" ;
        bool found = (std::find(listeDeclarations.begin(), listeDeclarations.end(), var) != listeDeclarations.end());
        if(!found){
            std::cerr << "#var " << var << " non déclarée\n" ;
            exit(3);
        }
    }

    visit(ctx->expr());

    listeLigne.clear();
    return 0;
}

antlrcpp::Any DeclarationCheckVisitor::visitVar(ifccParser::VarContext *ctx)
{
    if(ctx->VAR()){
        std::cout << "#expression avec " << ctx->VAR()->getText() << "\n" ;
        bool found = (std::find(listeDeclarations.begin(), listeDeclarations.end(), ctx->VAR()->getText()) != listeDeclarations.end());
        if(!found){
            std::cerr << "#var " << ctx->VAR()->getText() << " non déclarée\n" ;
            exit(3);
        }
    }

    return 0;
}
		
antlrcpp::Any DeclarationCheckVisitor::visitVars(ifccParser::VarsContext *ctx){
    listeLigne.push_back(ctx->VAR()->getText());
    if(ctx->vars()){
        visit(ctx->vars());
    }
    return 0;
}