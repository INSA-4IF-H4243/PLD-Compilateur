#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  DeclarationCheckVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) override;

    	virtual antlrcpp::Any visitVars(ifccParser::VarsContext *context) override;

};

