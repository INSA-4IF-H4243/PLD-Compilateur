
// Generated from ifcc.g4 by ANTLR 4.9.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}


antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    prog();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ProgContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

tree::TerminalNode* ifccParser::ProgContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExprContext* ifccParser::ProgContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::CodeContext* ifccParser::ProgContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}


antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(ifccParser::TYPE);
    setState(17);
    match(ifccParser::T__0);
    setState(18);
    match(ifccParser::T__1);
    setState(19);
    match(ifccParser::T__2);
    setState(20);
    match(ifccParser::T__3);
    setState(22);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__3)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(21);
      code();
    }
    setState(24);
    match(ifccParser::RETURN);
    setState(25);
    expr(0);
    setState(26);
    match(ifccParser::T__4);
    setState(27);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

ifccParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::CodeContext::getRuleIndex() const {
  return ifccParser::RuleCode;
}

void ifccParser::CodeContext::copyFrom(CodeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UneInstContext ------------------------------------------------------------------

ifccParser::InstructionContext* ifccParser::UneInstContext::instruction() {
  return getRuleContext<ifccParser::InstructionContext>(0);
}

ifccParser::UneInstContext::UneInstContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::UneInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitUneInst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockInstContext ------------------------------------------------------------------

ifccParser::CodeContext* ifccParser::BlockInstContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}

ifccParser::BlockInstContext::BlockInstContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BlockInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBlockInst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulInstContext ------------------------------------------------------------------

ifccParser::InstructionContext* ifccParser::MulInstContext::instruction() {
  return getRuleContext<ifccParser::InstructionContext>(0);
}

ifccParser::CodeContext* ifccParser::MulInstContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}

ifccParser::MulInstContext::MulInstContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::MulInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMulInst(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::CodeContext* ifccParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::UneInstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(29);
      instruction();
      setState(30);
      match(ifccParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::MulInstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(32);
      instruction();
      setState(33);
      match(ifccParser::T__4);
      setState(34);
      code();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::BlockInstContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(36);
      match(ifccParser::T__3);
      setState(37);
      code();
      setState(38);
      match(ifccParser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

ifccParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::InstructionContext::getRuleIndex() const {
  return ifccParser::RuleInstruction;
}

void ifccParser::InstructionContext::copyFrom(InstructionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionContext ------------------------------------------------------------------

ifccParser::CondContext* ifccParser::ConditionContext::cond() {
  return getRuleContext<ifccParser::CondContext>(0);
}

ifccParser::ConditionContext::ConditionContext(InstructionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::DeclarationContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

ifccParser::VarsContext* ifccParser::DeclarationContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}

ifccParser::ExprContext* ifccParser::DeclarationContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::DeclarationContext::DeclarationContext(InstructionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationContext ------------------------------------------------------------------

ifccParser::VarsContext* ifccParser::AffectationContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}

ifccParser::ExprContext* ifccParser::AffectationContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::AffectationContext::AffectationContext(InstructionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::InstructionContext* ifccParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::TYPE: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::DeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(42);
        match(ifccParser::TYPE);
        setState(43);
        vars();
        setState(46);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ifccParser::T__6) {
          setState(44);
          match(ifccParser::T__6);
          setState(45);
          expr(0);
        }
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::AffectationContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(48);
        vars();
        setState(49);
        match(ifccParser::T__6);
        setState(50);
        expr(0);
        break;
      }

      case ifccParser::IF: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::ConditionContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(52);
        cond();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

ifccParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::CondContext::IF() {
  return getToken(ifccParser::IF, 0);
}

ifccParser::ExprContext* ifccParser::CondContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

std::vector<ifccParser::CodeContext *> ifccParser::CondContext::code() {
  return getRuleContexts<ifccParser::CodeContext>();
}

ifccParser::CodeContext* ifccParser::CondContext::code(size_t i) {
  return getRuleContext<ifccParser::CodeContext>(i);
}

tree::TerminalNode* ifccParser::CondContext::ELSE() {
  return getToken(ifccParser::ELSE, 0);
}


size_t ifccParser::CondContext::getRuleIndex() const {
  return ifccParser::RuleCond;
}


antlrcpp::Any ifccParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::CondContext* ifccParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(55);
      match(ifccParser::IF);
      setState(56);
      match(ifccParser::T__1);
      setState(57);
      expr(0);
      setState(58);
      match(ifccParser::T__2);
      setState(59);
      code();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      match(ifccParser::IF);
      setState(62);
      match(ifccParser::T__1);
      setState(63);
      expr(0);
      setState(64);
      match(ifccParser::T__2);
      setState(65);
      code();
      setState(66);
      match(ifccParser::ELSE);
      setState(67);
      code();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ifccParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}

void ifccParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::ParContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CmpContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::CmpContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::CmpContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::CmpContext::CMPOP() {
  return getToken(ifccParser::CMPOP, 0);
}

ifccParser::CmpContext::CmpContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::CmpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCmp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddsubContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AddsubContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AddsubContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::AddsubContext::OPP() {
  return getToken(ifccParser::OPP, 0);
}

ifccParser::AddsubContext::AddsubContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AddsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddsub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MuldivContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::MuldivContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::MuldivContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

tree::TerminalNode* ifccParser::MuldivContext::OPM() {
  return getToken(ifccParser::OPM, 0);
}

ifccParser::MuldivContext::MuldivContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::MuldivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMuldiv(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
   return expr(0);
}

ifccParser::ExprContext* ifccParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ifccParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, ifccParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(72);
        match(ifccParser::CONST);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(73);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::T__1: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(74);
        match(ifccParser::T__1);
        setState(75);
        expr(0);
        setState(76);
        match(ifccParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(91);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(89);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(80);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(81);
          match(ifccParser::OPM);
          setState(82);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddsubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(83);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(84);
          match(ifccParser::OPP);
          setState(85);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CmpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(86);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(87);
          match(ifccParser::CMPOP);
          setState(88);
          expr(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(93);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VarsContext ------------------------------------------------------------------

ifccParser::VarsContext::VarsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::VarsContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarsContext* ifccParser::VarsContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}


size_t ifccParser::VarsContext::getRuleIndex() const {
  return ifccParser::RuleVars;
}


antlrcpp::Any ifccParser::VarsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVars(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::VarsContext* ifccParser::vars() {
  VarsContext *_localctx = _tracker.createInstance<VarsContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleVars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(ifccParser::VAR);
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__7) {
      setState(95);
      match(ifccParser::T__7);
      setState(96);
      vars();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "code", "instruction", "cond", "expr", "vars"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "','", "", "'int'", 
  "'char'", "'if'", "'else'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "TYPE", "INT", "CHAR", "IF", "ELSE", 
  "RETURN", "CONST", "OPM", "OPP", "CMPOP", "COMMENT", "DIRECTIVE", "WS", 
  "VAR"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x18, 0x66, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x19, 0xa, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2b, 0xa, 0x4, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x38, 0xa, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x5, 0x6, 0x48, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x51, 0xa, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x5c, 0xa, 0x7, 0xc, 0x7, 0xe, 
       0x7, 0x5f, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x64, 
       0xa, 0x8, 0x3, 0x8, 0x2, 0x3, 0xc, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x2, 0x2, 0x2, 0x6b, 0x2, 0x10, 0x3, 0x2, 0x2, 0x2, 0x4, 
       0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 
       0x3, 0x2, 0x2, 0x2, 0xa, 0x47, 0x3, 0x2, 0x2, 0x2, 0xc, 0x50, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0x60, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x5, 0x4, 
       0x3, 0x2, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x7, 0xb, 0x2, 
       0x2, 0x13, 0x14, 0x7, 0x3, 0x2, 0x2, 0x14, 0x15, 0x7, 0x4, 0x2, 0x2, 
       0x15, 0x16, 0x7, 0x5, 0x2, 0x2, 0x16, 0x18, 0x7, 0x6, 0x2, 0x2, 0x17, 
       0x19, 0x5, 0x6, 0x4, 0x2, 0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 
       0x10, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0xc, 0x7, 0x2, 0x1c, 0x1d, 0x7, 
       0x7, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x8, 0x2, 0x2, 0x1e, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x1f, 0x20, 0x5, 0x8, 0x5, 0x2, 0x20, 0x21, 0x7, 0x7, 0x2, 
       0x2, 0x21, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x5, 0x8, 0x5, 0x2, 
       0x23, 0x24, 0x7, 0x7, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 0x6, 0x2, 0x2, 0x27, 0x28, 
       0x5, 0x6, 0x4, 0x2, 0x28, 0x29, 0x7, 0x8, 0x2, 0x2, 0x29, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x2a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x22, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x26, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x2c, 0x2d, 0x7, 0xb, 0x2, 0x2, 0x2d, 0x30, 0x5, 0xe, 0x8, 0x2, 
       0x2e, 0x2f, 0x7, 0x9, 0x2, 0x2, 0x2f, 0x31, 0x5, 0xc, 0x7, 0x2, 0x30, 
       0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x38, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x5, 0xe, 0x8, 0x2, 0x33, 0x34, 0x7, 
       0x9, 0x2, 0x2, 0x34, 0x35, 0x5, 0xc, 0x7, 0x2, 0x35, 0x38, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x38, 0x5, 0xa, 0x6, 0x2, 0x37, 0x2c, 0x3, 0x2, 0x2, 
       0x2, 0x37, 0x32, 0x3, 0x2, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 
       0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0xe, 0x2, 0x2, 0x3a, 
       0x3b, 0x7, 0x4, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0xc, 0x7, 0x2, 0x3c, 0x3d, 
       0x7, 0x5, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x48, 0x3, 
       0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0xe, 0x2, 0x2, 0x40, 0x41, 0x7, 0x4, 
       0x2, 0x2, 0x41, 0x42, 0x5, 0xc, 0x7, 0x2, 0x42, 0x43, 0x7, 0x5, 0x2, 
       0x2, 0x43, 0x44, 0x5, 0x6, 0x4, 0x2, 0x44, 0x45, 0x7, 0xf, 0x2, 0x2, 
       0x45, 0x46, 0x5, 0x6, 0x4, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 0x2, 0x47, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x47, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x48, 0xb, 
       0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x8, 0x7, 0x1, 0x2, 0x4a, 0x51, 0x7, 
       0x11, 0x2, 0x2, 0x4b, 0x51, 0x7, 0x18, 0x2, 0x2, 0x4c, 0x4d, 0x7, 
       0x4, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4e, 0x4f, 0x7, 0x5, 
       0x2, 0x2, 0x4f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x50, 0x49, 0x3, 0x2, 0x2, 
       0x2, 0x50, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4c, 0x3, 0x2, 0x2, 0x2, 
       0x51, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0xc, 0x8, 0x2, 0x2, 0x53, 
       0x54, 0x7, 0x12, 0x2, 0x2, 0x54, 0x5c, 0x5, 0xc, 0x7, 0x9, 0x55, 
       0x56, 0xc, 0x7, 0x2, 0x2, 0x56, 0x57, 0x7, 0x13, 0x2, 0x2, 0x57, 
       0x5c, 0x5, 0xc, 0x7, 0x8, 0x58, 0x59, 0xc, 0x3, 0x2, 0x2, 0x59, 0x5a, 
       0x7, 0x14, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0xc, 0x7, 0x4, 0x5b, 0x52, 
       0x3, 0x2, 0x2, 0x2, 0x5b, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x58, 0x3, 
       0x2, 0x2, 0x2, 0x5c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 
       0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x7, 0x18, 0x2, 
       0x2, 0x61, 0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x64, 0x5, 0xe, 0x8, 0x2, 
       0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 
       0xf, 0x3, 0x2, 0x2, 0x2, 0xb, 0x18, 0x2a, 0x30, 0x37, 0x47, 0x50, 
       0x5b, 0x5d, 0x63, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
