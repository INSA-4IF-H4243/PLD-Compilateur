
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

    virtual antlrcpp::Any visitUneInst(ifccParser::UneInstContext *context) = 0;

    virtual antlrcpp::Any visitMulInst(ifccParser::MulInstContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitAdd(ifccParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitNeg(ifccParser::NegContext *context) = 0;

    virtual antlrcpp::Any visitSub(ifccParser::SubContext *context) = 0;

    virtual antlrcpp::Any visitNot(ifccParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitOr(ifccParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitAnd(ifccParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitCmp(ifccParser::CmpContext *context) = 0;

    virtual antlrcpp::Any visitXor(ifccParser::XorContext *context) = 0;

    virtual antlrcpp::Any visitMuldiv(ifccParser::MuldivContext *context) = 0;

    virtual antlrcpp::Any visitVars(ifccParser::VarsContext *context) = 0;


};

