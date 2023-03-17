#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;
		virtual antlrcpp::Any visitCode(ifccParser::CodeContext *ctx) override;
		virtual antlrcpp::Any visitStatement(ifccParser::StatementContext *ctx) override;
	    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
		virtual antlrcpp::Any visitVars(ifccParser::VarsContext *ctx) override;
};

