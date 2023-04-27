
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunc(ifccParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitArgs(ifccParser::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitUneInst(ifccParser::UneInstContext *context) = 0;

    virtual antlrcpp::Any visitMulInst(ifccParser::MulInstContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitIfInst(ifccParser::IfInstContext *context) = 0;

    virtual antlrcpp::Any visitWhileInst(ifccParser::WhileInstContext *context) = 0;

    virtual antlrcpp::Any visitReturn(ifccParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitNeg(ifccParser::NegContext *context) = 0;

    virtual antlrcpp::Any visitNot(ifccParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitCmp(ifccParser::CmpContext *context) = 0;

    virtual antlrcpp::Any visitAddsub(ifccParser::AddsubContext *context) = 0;

    virtual antlrcpp::Any visitFuncCall(ifccParser::FuncCallContext *context) = 0;

    virtual antlrcpp::Any visitMuldiv(ifccParser::MuldivContext *context) = 0;

    virtual antlrcpp::Any visitVars(ifccParser::VarsContext *context) = 0;

    virtual antlrcpp::Any visitInput(ifccParser::InputContext *context) = 0;


};

