
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUneInst(ifccParser::UneInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulInst(ifccParser::MulInstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(ifccParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNeg(ifccParser::NegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSub(ifccParser::SubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(ifccParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(ifccParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(ifccParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(ifccParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(ifccParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCmp(ifccParser::CmpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXor(ifccParser::XorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMuldiv(ifccParser::MuldivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVars(ifccParser::VarsContext *ctx) override {
    return visitChildren(ctx);
  }


};

