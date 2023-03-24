#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  DeclarationCheckVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitExpr(ifccParser::ExprContext *context) override;


};

