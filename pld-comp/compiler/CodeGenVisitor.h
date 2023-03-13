#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;
		virtual antlrcpp::Any visitCode(ifccParser::CodeContext *ctx) override;
	    virtual antlrcpp::Any visitInstruction(ifccParser::InstructionContext *ctx) override;
};

