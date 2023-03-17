#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;
		virtual antlrcpp::Any visitUneInst(ifccParser::UneInstContext *ctx) override;
		virtual antlrcpp::Any visitMulInst(ifccParser::MulInstContext *ctx) override;
	    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override;
		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override;
};

