
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
    setState(12);
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
    setState(14);
    match(ifccParser::TYPE);
    setState(15);
    match(ifccParser::T__0);
    setState(16);
    match(ifccParser::T__1);
    setState(17);
    match(ifccParser::T__2);
    setState(18);
    match(ifccParser::T__3);
    setState(20);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE

    || _la == ifccParser::VAR) {
      setState(19);
      code();
    }
    setState(22);
    match(ifccParser::RETURN);
    setState(23);
    expr(0);
    setState(24);
    match(ifccParser::T__4);
    setState(25);
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
    setState(34);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::UneInstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(27);
      instruction();
      setState(28);
      match(ifccParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::MulInstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(30);
      instruction();
      setState(31);
      match(ifccParser::T__4);
      setState(32);
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
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::TYPE: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::DeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(36);
        match(ifccParser::TYPE);
        setState(37);
        vars();
        setState(40);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ifccParser::T__6) {
          setState(38);
          match(ifccParser::T__6);
          setState(39);
          expr(0);
        }
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::AffectationContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(42);
        vars();
        setState(43);
        match(ifccParser::T__6);
        setState(44);
        expr(0);
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
//----------------- AddContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AddContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AddContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::NegContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::NegContext::NegContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::NegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNeg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::SubContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::SubContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::SubContext::SubContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::SubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::NotContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::NotContext::NotContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::OrContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::OrContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOr(this);
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
//----------------- AndContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AndContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AndContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
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
//----------------- XorContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::XorContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::XorContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::XorContext::XorContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::XorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitXor(this);
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
  size_t startState = 8;
  enterRecursionRule(_localctx, 8, ifccParser::RuleExpr, precedence);

    

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
    setState(59);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(49);
        match(ifccParser::CONST);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(50);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::T__1: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(51);
        match(ifccParser::T__1);
        setState(52);
        expr(0);
        setState(53);
        match(ifccParser::T__2);
        break;
      }

      case ifccParser::T__8: {
        _localctx = _tracker.createInstance<NegContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(55);
        match(ifccParser::T__8);
        setState(56);
        expr(2);
        break;
      }

      case ifccParser::T__12: {
        _localctx = _tracker.createInstance<NotContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(57);
        match(ifccParser::T__12);
        setState(58);
        expr(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(84);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(82);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(62);
          match(ifccParser::OPM);
          setState(63);
          expr(13);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(65);
          match(ifccParser::T__7);
          setState(66);
          expr(12);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(68);
          match(ifccParser::T__8);
          setState(69);
          expr(11);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<CmpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(70);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(71);
          match(ifccParser::CMPOP);
          setState(72);
          expr(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(73);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(74);
          match(ifccParser::T__9);
          setState(75);
          expr(6);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(76);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(77);
          match(ifccParser::T__10);
          setState(78);
          expr(5);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<XorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(79);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(80);
          match(ifccParser::T__11);
          setState(81);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(86);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 10, ifccParser::RuleVars);
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
    setState(87);
    match(ifccParser::VAR);
    setState(90);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__13) {
      setState(88);
      match(ifccParser::T__13);
      setState(89);
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
    case 4: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 12);
    case 1: return precpred(_ctx, 11);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);

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
  "axiom", "prog", "code", "instruction", "expr", "vars"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'+'", "'-'", 
  "'|'", "'&'", "'^'", "'!'", "','", "", "'int'", "'char'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "TYPE", "INT", 
  "CHAR", "RETURN", "CONST", "OPM", "CMPOP", "COMMENT", "DIRECTIVE", "WS", 
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
       0x3, 0x1b, 0x5f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x17, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x25, 0xa, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2b, 0xa, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x3e, 0xa, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x7, 0x6, 0x55, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x58, 
       0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x5d, 0xa, 0x7, 
       0x3, 0x7, 0x2, 0x3, 0xa, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 
       0x2, 0x2, 0x68, 0x2, 0xe, 0x3, 0x2, 0x2, 0x2, 0x4, 0x10, 0x3, 0x2, 
       0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 
       0x2, 0xa, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xc, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0xe, 0xf, 0x5, 0x4, 0x3, 0x2, 0xf, 0x3, 0x3, 0x2, 0x2, 0x2, 0x10, 
       0x11, 0x7, 0x11, 0x2, 0x2, 0x11, 0x12, 0x7, 0x3, 0x2, 0x2, 0x12, 
       0x13, 0x7, 0x4, 0x2, 0x2, 0x13, 0x14, 0x7, 0x5, 0x2, 0x2, 0x14, 0x16, 
       0x7, 0x6, 0x2, 0x2, 0x15, 0x17, 0x5, 0x6, 0x4, 0x2, 0x16, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x19, 0x7, 0x14, 0x2, 0x2, 0x19, 0x1a, 0x5, 0xa, 
       0x6, 0x2, 0x1a, 0x1b, 0x7, 0x7, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x8, 0x2, 
       0x2, 0x1c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x8, 0x5, 0x2, 
       0x1e, 0x1f, 0x7, 0x7, 0x2, 0x2, 0x1f, 0x25, 0x3, 0x2, 0x2, 0x2, 0x20, 
       0x21, 0x5, 0x8, 0x5, 0x2, 0x21, 0x22, 0x7, 0x7, 0x2, 0x2, 0x22, 0x23, 
       0x5, 0x6, 0x4, 0x2, 0x23, 0x25, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x20, 0x3, 0x2, 0x2, 0x2, 0x25, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x27, 0x7, 0x11, 0x2, 0x2, 0x27, 0x2a, 0x5, 0xc, 
       0x7, 0x2, 0x28, 0x29, 0x7, 0x9, 0x2, 0x2, 0x29, 0x2b, 0x5, 0xa, 0x6, 
       0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 0x2, 0x2, 
       0x2b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0xc, 0x7, 0x2, 0x2d, 
       0x2e, 0x7, 0x9, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x2f, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x26, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2c, 0x3, 
       0x2, 0x2, 0x2, 0x31, 0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x8, 0x6, 
       0x1, 0x2, 0x33, 0x3e, 0x7, 0x15, 0x2, 0x2, 0x34, 0x3e, 0x7, 0x1b, 
       0x2, 0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 0x36, 0x37, 0x5, 0xa, 0x6, 
       0x2, 0x37, 0x38, 0x7, 0x5, 0x2, 0x2, 0x38, 0x3e, 0x3, 0x2, 0x2, 0x2, 
       0x39, 0x3a, 0x7, 0xb, 0x2, 0x2, 0x3a, 0x3e, 0x5, 0xa, 0x6, 0x4, 0x3b, 
       0x3c, 0x7, 0xf, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0xa, 0x6, 0x3, 0x3d, 0x32, 
       0x3, 0x2, 0x2, 0x2, 0x3d, 0x34, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x35, 0x3, 
       0x2, 0x2, 0x2, 0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x56, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0xc, 0xe, 0x2, 
       0x2, 0x40, 0x41, 0x7, 0x16, 0x2, 0x2, 0x41, 0x55, 0x5, 0xa, 0x6, 
       0xf, 0x42, 0x43, 0xc, 0xd, 0x2, 0x2, 0x43, 0x44, 0x7, 0xa, 0x2, 0x2, 
       0x44, 0x55, 0x5, 0xa, 0x6, 0xe, 0x45, 0x46, 0xc, 0xc, 0x2, 0x2, 0x46, 
       0x47, 0x7, 0xb, 0x2, 0x2, 0x47, 0x55, 0x5, 0xa, 0x6, 0xd, 0x48, 0x49, 
       0xc, 0x8, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x17, 0x2, 0x2, 0x4a, 0x55, 
       0x5, 0xa, 0x6, 0x9, 0x4b, 0x4c, 0xc, 0x7, 0x2, 0x2, 0x4c, 0x4d, 0x7, 
       0xc, 0x2, 0x2, 0x4d, 0x55, 0x5, 0xa, 0x6, 0x8, 0x4e, 0x4f, 0xc, 0x6, 
       0x2, 0x2, 0x4f, 0x50, 0x7, 0xd, 0x2, 0x2, 0x50, 0x55, 0x5, 0xa, 0x6, 
       0x7, 0x51, 0x52, 0xc, 0x5, 0x2, 0x2, 0x52, 0x53, 0x7, 0xe, 0x2, 0x2, 
       0x53, 0x55, 0x5, 0xa, 0x6, 0x6, 0x54, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x54, 
       0x42, 0x3, 0x2, 0x2, 0x2, 0x54, 0x45, 0x3, 0x2, 0x2, 0x2, 0x54, 0x48, 
       0x3, 0x2, 0x2, 0x2, 0x54, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4e, 0x3, 
       0x2, 0x2, 0x2, 0x54, 0x51, 0x3, 0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 
       0x2, 0x57, 0xb, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 
       0x59, 0x5c, 0x7, 0x1b, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x10, 0x2, 0x2, 
       0x5b, 0x5d, 0x5, 0xc, 0x7, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0xd, 0x3, 0x2, 0x2, 0x2, 0xa, 0x16, 
       0x24, 0x2a, 0x30, 0x3d, 0x54, 0x56, 0x5c, 
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
