
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    TYPE = 8, INT = 9, CHAR = 10, RETURN = 11, CONST = 12, COMMENT = 13, 
    DIRECTIVE = 14, WS = 15, VAR = 16
  };

  enum {
    RuleAxiom = 0, RuleProg = 1, RuleCode = 2, RuleInstruction = 3, RuleExpr = 4
  };

  explicit ifccParser(antlr4::TokenStream *input);
  ~ifccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AxiomContext;
  class ProgContext;
  class CodeContext;
  class InstructionContext;
  class ExprContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgContext *prog();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    CodeContext *code();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CodeContext() = default;
    void copyFrom(CodeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UneInstContext : public CodeContext {
  public:
    UneInstContext(CodeContext *ctx);

    InstructionContext *instruction();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulInstContext : public CodeContext {
  public:
    MulInstContext(CodeContext *ctx);

    InstructionContext *instruction();
    CodeContext *code();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CodeContext* code();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstructionContext() = default;
    void copyFrom(InstructionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationContext : public InstructionContext {
  public:
    DeclarationContext(InstructionContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *VAR();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectationContext : public InstructionContext {
  public:
    AffectationContext(InstructionContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstructionContext* instruction();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *VAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

