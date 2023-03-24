#include "DeclarationCheckVisitor.h"
#include <string>
#include <map>
#include <list>

std::list<std::string> listeDeclarations;

antlrcpp::Any DeclarationCheckVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::cout << "#declaration de " << ctx->VAR()->getText() << "\n" ;
    listeDeclarations.push_back(ctx->VAR()->getText());

    return 0;
}
antlrcpp::Any DeclarationCheckVisitor::visitExpr(ifccParser::ExprContext *ctx)
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

antlrcpp::Any DeclarationCheckVisitor::visitAffectation(ifccParser::AffectationContext *ctx)
{
    std::cout << "#affectation de " << ctx->VAR()->getText() << "\n" ;
    bool found = (std::find(listeDeclarations.begin(), listeDeclarations.end(), ctx->VAR()->getText()) != listeDeclarations.end());
    if(!found){
        std::cerr << "#var " << ctx->VAR()->getText() << " non déclarée\n" ;
        exit(3);
    }
    return 0;
}
		
