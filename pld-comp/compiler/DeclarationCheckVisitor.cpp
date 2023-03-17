#include "DeclarationCheckVisitor.h"
#include <string>
#include <map>

antlrcpp::Any DeclarationCheckVisitor::visitDeclaration(ifccParser::DeclarationContext *ctx)
{
    std::cout << "#declaration de " << ctx->VAR()->getText() << "\n" ;

    return 0;
}
