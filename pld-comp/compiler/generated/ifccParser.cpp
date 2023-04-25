
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
    setState(18);
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

std::vector<ifccParser::FuncContext *> ifccParser::ProgContext::func() {
  return getRuleContexts<ifccParser::FuncContext>();
}

ifccParser::FuncContext* ifccParser::ProgContext::func(size_t i) {
  return getRuleContext<ifccParser::FuncContext>(i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(23);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(20);
        func(); 
      }
      setState(25);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(26);
    match(ifccParser::TYPE);
    setState(27);
    match(ifccParser::T__0);
    setState(28);
    match(ifccParser::T__1);
    setState(29);
    match(ifccParser::T__2);
    setState(30);
    match(ifccParser::T__3);
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__3)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::WHILE)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(31);
      code();
    }
    setState(34);
    match(ifccParser::RETURN);
    setState(35);
    expr(0);
    setState(36);
    match(ifccParser::T__4);
    setState(37);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

ifccParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::FuncContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

tree::TerminalNode* ifccParser::FuncContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::FuncContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExprContext* ifccParser::FuncContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ArgsContext* ifccParser::FuncContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}

ifccParser::CodeContext* ifccParser::FuncContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}


size_t ifccParser::FuncContext::getRuleIndex() const {
  return ifccParser::RuleFunc;
}


antlrcpp::Any ifccParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FuncContext* ifccParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleFunc);
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
    setState(39);
    match(ifccParser::TYPE);
    setState(40);
    match(ifccParser::VAR);
    setState(41);
    match(ifccParser::T__1);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE) {
      setState(42);
      args();
    }
    setState(45);
    match(ifccParser::T__2);
    setState(46);
    match(ifccParser::T__3);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__3)
      | (1ULL << ifccParser::TYPE)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::WHILE)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(47);
      code();
    }
    setState(50);
    match(ifccParser::RETURN);
    setState(51);
    expr(0);
    setState(52);
    match(ifccParser::T__4);
    setState(53);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

ifccParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ArgsContext::TYPE() {
  return getToken(ifccParser::TYPE, 0);
}

tree::TerminalNode* ifccParser::ArgsContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ArgsContext* ifccParser::ArgsContext::args() {
  return getRuleContext<ifccParser::ArgsContext>(0);
}


size_t ifccParser::ArgsContext::getRuleIndex() const {
  return ifccParser::RuleArgs;
}


antlrcpp::Any ifccParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ArgsContext* ifccParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleArgs);
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
    setState(55);
    match(ifccParser::TYPE);
    setState(56);
    match(ifccParser::VAR);
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__6) {
      setState(57);
      match(ifccParser::T__6);
      setState(58);
      args();
    }
   
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
//----------------- WhileInstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::WhileInstContext::WHILE() {
  return getToken(ifccParser::WHILE, 0);
}

ifccParser::ExprContext* ifccParser::WhileInstContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

std::vector<ifccParser::CodeContext *> ifccParser::WhileInstContext::code() {
  return getRuleContexts<ifccParser::CodeContext>();
}

ifccParser::CodeContext* ifccParser::WhileInstContext::code(size_t i) {
  return getRuleContext<ifccParser::CodeContext>(i);
}

ifccParser::WhileInstContext::WhileInstContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::WhileInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitWhileInst(this);
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
//----------------- BlockContext ------------------------------------------------------------------

ifccParser::CodeContext* ifccParser::BlockContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}

ifccParser::BlockContext::BlockContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfInstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::IfInstContext::IF() {
  return getToken(ifccParser::IF, 0);
}

ifccParser::ExprContext* ifccParser::IfInstContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

std::vector<ifccParser::CodeContext *> ifccParser::IfInstContext::code() {
  return getRuleContexts<ifccParser::CodeContext>();
}

ifccParser::CodeContext* ifccParser::IfInstContext::code(size_t i) {
  return getRuleContext<ifccParser::CodeContext>(i);
}

tree::TerminalNode* ifccParser::IfInstContext::ELSE() {
  return getToken(ifccParser::ELSE, 0);
}

ifccParser::IfInstContext::IfInstContext(CodeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::IfInstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIfInst(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::CodeContext* ifccParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleCode);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::UneInstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(61);
      instruction();
      setState(62);
      match(ifccParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::MulInstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(64);
      instruction();
      setState(65);
      match(ifccParser::T__4);
      setState(66);
      code();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::BlockContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(68);
      match(ifccParser::T__3);
      setState(69);
      code();
      setState(70);
      match(ifccParser::T__5);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::IfInstContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(72);
      match(ifccParser::IF);
      setState(73);
      match(ifccParser::T__1);
      setState(74);
      expr(0);
      setState(75);
      match(ifccParser::T__2);
      setState(76);
      code();
      setState(79);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(77);
        match(ifccParser::ELSE);
        setState(78);
        code();
        break;
      }

      default:
        break;
      }
      setState(82);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(81);
        code();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::WhileInstContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(84);
      match(ifccParser::WHILE);
      setState(85);
      match(ifccParser::T__1);
      setState(86);
      expr(0);
      setState(87);
      match(ifccParser::T__2);
      setState(88);
      code();
      setState(90);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(89);
        code();
        break;
      }

      default:
        break;
      }
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
  enterRule(_localctx, 10, ifccParser::RuleInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::TYPE: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::DeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(ifccParser::TYPE);
        setState(95);
        vars();
        setState(98);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ifccParser::T__7) {
          setState(96);
          match(ifccParser::T__7);
          setState(97);
          expr(0);
        }
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::AffectationContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(100);
        vars();
        setState(101);
        match(ifccParser::T__7);
        setState(102);
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
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::FuncCallContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::InputContext* ifccParser::FuncCallContext::input() {
  return getRuleContext<ifccParser::InputContext>(0);
}

ifccParser::FuncCallContext::FuncCallContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

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
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(107);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(108);
      match(ifccParser::VAR);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(109);
      match(ifccParser::T__1);
      setState(110);
      expr(0);
      setState(111);
      match(ifccParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(113);
      match(ifccParser::VAR);
      setState(114);
      match(ifccParser::T__1);
      setState(116);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ifccParser::VAR) {
        setState(115);
        input();
      }
      setState(118);
      match(ifccParser::T__2);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(132);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(130);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MuldivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(121);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(122);
          match(ifccParser::OPM);
          setState(123);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddsubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(124);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(125);
          match(ifccParser::OPP);
          setState(126);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CmpContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(127);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(128);
          match(ifccParser::CMPOP);
          setState(129);
          expr(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(134);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  enterRule(_localctx, 14, ifccParser::RuleVars);
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
    setState(135);
    match(ifccParser::VAR);
    setState(138);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__6) {
      setState(136);
      match(ifccParser::T__6);
      setState(137);
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

//----------------- InputContext ------------------------------------------------------------------

ifccParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::InputContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::InputContext* ifccParser::InputContext::input() {
  return getRuleContext<ifccParser::InputContext>(0);
}


size_t ifccParser::InputContext::getRuleIndex() const {
  return ifccParser::RuleInput;
}


antlrcpp::Any ifccParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::InputContext* ifccParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleInput);
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
    setState(140);
    match(ifccParser::VAR);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::T__6) {
      setState(141);
      match(ifccParser::T__6);
      setState(142);
      input();
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
    case 6: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 2);

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
  "axiom", "prog", "func", "args", "code", "instruction", "expr", "vars", 
  "input"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "';'", "'}'", "','", "'='", "", "'int'", 
  "'char'", "'if'", "'else'", "'while'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "TYPE", "INT", "CHAR", "IF", "ELSE", 
  "WHILE", "RETURN", "CONST", "OPM", "OPP", "CMPOP", "COMMENT", "DIRECTIVE", 
  "WS", "VAR"
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
       0x3, 0x19, 0x94, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 0x18, 0xa, 0x3, 0xc, 0x3, 
       0xe, 0x3, 0x1b, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x23, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x5, 0x4, 0x2e, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
       0x4, 0x33, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3e, 0xa, 
       0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
       0x52, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 0x55, 0xa, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x5d, 0xa, 
       0x6, 0x5, 0x6, 0x5f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x65, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x6b, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x5, 0x8, 0x77, 0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x7a, 0xa, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x85, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 
       0x88, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x8d, 0xa, 
       0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x92, 0xa, 0xa, 0x3, 
       0xa, 0x2, 0x3, 0xe, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
       0x12, 0x2, 0x2, 0x2, 0xa1, 0x2, 0x14, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8, 0x39, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x5e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6a, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x79, 0x3, 0x2, 0x2, 0x2, 0x10, 0x89, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x4, 0x3, 0x2, 
       0x15, 0x3, 0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 0x5, 0x6, 0x4, 0x2, 0x17, 
       0x16, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c, 0x3, 
       0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0xb, 
       0x2, 0x2, 0x1d, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x4, 0x2, 
       0x2, 0x1f, 0x20, 0x7, 0x5, 0x2, 0x2, 0x20, 0x22, 0x7, 0x6, 0x2, 0x2, 
       0x21, 0x23, 0x5, 0xa, 0x6, 0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 
       0x7, 0x11, 0x2, 0x2, 0x25, 0x26, 0x5, 0xe, 0x8, 0x2, 0x26, 0x27, 
       0x7, 0x7, 0x2, 0x2, 0x27, 0x28, 0x7, 0x8, 0x2, 0x2, 0x28, 0x5, 0x3, 
       0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0xb, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x19, 
       0x2, 0x2, 0x2b, 0x2d, 0x7, 0x4, 0x2, 0x2, 0x2c, 0x2e, 0x5, 0x8, 0x5, 
       0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
       0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x5, 0x2, 0x2, 0x30, 
       0x32, 0x7, 0x6, 0x2, 0x2, 0x31, 0x33, 0x5, 0xa, 0x6, 0x2, 0x32, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x11, 0x2, 0x2, 0x35, 0x36, 0x5, 
       0xe, 0x8, 0x2, 0x36, 0x37, 0x7, 0x7, 0x2, 0x2, 0x37, 0x38, 0x7, 0x8, 
       0x2, 0x2, 0x38, 0x7, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0xb, 0x2, 
       0x2, 0x3a, 0x3d, 0x7, 0x19, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x9, 0x2, 
       0x2, 0x3c, 0x3e, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 
       0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3f, 
       0x40, 0x5, 0xc, 0x7, 0x2, 0x40, 0x41, 0x7, 0x7, 0x2, 0x2, 0x41, 0x5f, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x5, 0xc, 0x7, 0x2, 0x43, 0x44, 0x7, 
       0x7, 0x2, 0x2, 0x44, 0x45, 0x5, 0xa, 0x6, 0x2, 0x45, 0x5f, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x47, 0x7, 0x6, 0x2, 0x2, 0x47, 0x48, 0x5, 0xa, 0x6, 
       0x2, 0x48, 0x49, 0x7, 0x8, 0x2, 0x2, 0x49, 0x5f, 0x3, 0x2, 0x2, 0x2, 
       0x4a, 0x4b, 0x7, 0xe, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x4, 0x2, 0x2, 0x4c, 
       0x4d, 0x5, 0xe, 0x8, 0x2, 0x4d, 0x4e, 0x7, 0x5, 0x2, 0x2, 0x4e, 0x51, 
       0x5, 0xa, 0x6, 0x2, 0x4f, 0x50, 0x7, 0xf, 0x2, 0x2, 0x50, 0x52, 0x5, 
       0xa, 0x6, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x54, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x5, 0xa, 0x6, 
       0x2, 0x54, 0x53, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 
       0x55, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x10, 0x2, 0x2, 
       0x57, 0x58, 0x7, 0x4, 0x2, 0x2, 0x58, 0x59, 0x5, 0xe, 0x8, 0x2, 0x59, 
       0x5a, 0x7, 0x5, 0x2, 0x2, 0x5a, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5b, 0x5d, 
       0x5, 0xa, 0x6, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x3f, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x42, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x46, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x56, 0x3, 0x2, 0x2, 0x2, 
       0x5f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x7, 0xb, 0x2, 0x2, 0x61, 
       0x64, 0x5, 0x10, 0x9, 0x2, 0x62, 0x63, 0x7, 0xa, 0x2, 0x2, 0x63, 
       0x65, 0x5, 0xe, 0x8, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x65, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 
       0x10, 0x9, 0x2, 0x67, 0x68, 0x7, 0xa, 0x2, 0x2, 0x68, 0x69, 0x5, 
       0xe, 0x8, 0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x60, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6b, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x6c, 0x6d, 0x8, 0x8, 0x1, 0x2, 0x6d, 0x7a, 0x7, 0x12, 0x2, 
       0x2, 0x6e, 0x7a, 0x7, 0x19, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x4, 0x2, 
       0x2, 0x70, 0x71, 0x5, 0xe, 0x8, 0x2, 0x71, 0x72, 0x7, 0x5, 0x2, 0x2, 
       0x72, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x19, 0x2, 0x2, 
       0x74, 0x76, 0x7, 0x4, 0x2, 0x2, 0x75, 0x77, 0x5, 0x12, 0xa, 0x2, 
       0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 
       0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7a, 0x7, 0x5, 0x2, 0x2, 0x79, 0x6c, 
       0x3, 0x2, 0x2, 0x2, 0x79, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x79, 0x6f, 0x3, 
       0x2, 0x2, 0x2, 0x79, 0x73, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x86, 0x3, 0x2, 
       0x2, 0x2, 0x7b, 0x7c, 0xc, 0x9, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x13, 
       0x2, 0x2, 0x7d, 0x85, 0x5, 0xe, 0x8, 0xa, 0x7e, 0x7f, 0xc, 0x8, 0x2, 
       0x2, 0x7f, 0x80, 0x7, 0x14, 0x2, 0x2, 0x80, 0x85, 0x5, 0xe, 0x8, 
       0x9, 0x81, 0x82, 0xc, 0x4, 0x2, 0x2, 0x82, 0x83, 0x7, 0x15, 0x2, 
       0x2, 0x83, 0x85, 0x5, 0xe, 0x8, 0x5, 0x84, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x84, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 0x2, 0x2, 0x85, 
       0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x87, 0xf, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 
       0x2, 0x2, 0x2, 0x89, 0x8c, 0x7, 0x19, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
       0x9, 0x2, 0x2, 0x8b, 0x8d, 0x5, 0x10, 0x9, 0x2, 0x8c, 0x8a, 0x3, 
       0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x8e, 0x91, 0x7, 0x19, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x9, 
       0x2, 0x2, 0x90, 0x92, 0x5, 0x12, 0xa, 0x2, 0x91, 0x8f, 0x3, 0x2, 
       0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x13, 0x3, 0x2, 0x2, 
       0x2, 0x13, 0x19, 0x22, 0x2d, 0x32, 0x3d, 0x51, 0x54, 0x5c, 0x5e, 
       0x64, 0x6a, 0x76, 0x79, 0x84, 0x86, 0x8c, 0x91, 
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
