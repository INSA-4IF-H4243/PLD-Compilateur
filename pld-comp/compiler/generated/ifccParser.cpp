
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
    setState(10);
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
    setState(12);
    match(ifccParser::TYPE);
    setState(13);
    match(ifccParser::T__0);
    setState(14);
    match(ifccParser::T__1);
    setState(15);
    match(ifccParser::T__2);
    setState(16);
    match(ifccParser::T__3);
    setState(18);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ifccParser::TYPE

    || _la == ifccParser::VAR) {
      setState(17);
      code();
    }
    setState(20);
    match(ifccParser::RETURN);
    setState(21);
    expr();
    setState(22);
    match(ifccParser::T__4);
    setState(23);
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
    setState(32);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::UneInstContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(25);
      instruction();
      setState(26);
      match(ifccParser::T__4);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<CodeContext *>(_tracker.createInstance<ifccParser::MulInstContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(28);
      instruction();
      setState(29);
      match(ifccParser::T__4);
      setState(30);
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

tree::TerminalNode* ifccParser::DeclarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
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

tree::TerminalNode* ifccParser::AffectationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
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
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::TYPE: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::DeclarationContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(34);
        match(ifccParser::TYPE);
        setState(35);
        match(ifccParser::VAR);
        setState(38);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ifccParser::T__6) {
          setState(36);
          match(ifccParser::T__6);
          setState(37);
          expr();
        }
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstructionContext *>(_tracker.createInstance<ifccParser::AffectationContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(40);
        match(ifccParser::VAR);
        setState(43);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ifccParser::T__6) {
          setState(41);
          match(ifccParser::T__6);
          setState(42);
          expr();
        }
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

tree::TerminalNode* ifccParser::ExprContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

tree::TerminalNode* ifccParser::ExprContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}


antlrcpp::Any ifccParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleExpr);
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
    setState(47);
    _la = _input->LA(1);
    if (!(_la == ifccParser::CONST

    || _la == ifccParser::VAR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "code", "instruction", "expr"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "", "'int'", "'char'", 
  "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "TYPE", "INT", "CHAR", "RETURN", "CONST", 
  "COMMENT", "DIRECTIVE", "WS", "VAR"
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
       0x3, 0x12, 0x34, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x15, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x5, 0x4, 0x23, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0x29, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x5, 0x5, 0x2e, 0xa, 0x5, 0x5, 0x5, 0x30, 0xa, 0x5, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 
       0x3, 0x4, 0x2, 0xe, 0xe, 0x12, 0x12, 0x2, 0x33, 0x2, 0xc, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0xe, 0x3, 0x2, 0x2, 0x2, 0x6, 0x22, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 0x3, 0x2, 0x2, 0x2, 
       0xc, 0xd, 0x5, 0x4, 0x3, 0x2, 0xd, 0x3, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0xf, 0x7, 0xa, 0x2, 0x2, 0xf, 0x10, 0x7, 0x3, 0x2, 0x2, 0x10, 0x11, 
       0x7, 0x4, 0x2, 0x2, 0x11, 0x12, 0x7, 0x5, 0x2, 0x2, 0x12, 0x14, 0x7, 
       0x6, 0x2, 0x2, 0x13, 0x15, 0x5, 0x6, 0x4, 0x2, 0x14, 0x13, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x15, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0x17, 0x7, 0xd, 0x2, 0x2, 0x17, 0x18, 0x5, 0xa, 0x6, 0x2, 
       0x18, 0x19, 0x7, 0x7, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x8, 0x2, 0x2, 0x1a, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x1c, 0x1d, 
       0x7, 0x7, 0x2, 0x2, 0x1d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x5, 
       0x8, 0x5, 0x2, 0x1f, 0x20, 0x7, 0x7, 0x2, 0x2, 0x20, 0x21, 0x5, 0x6, 
       0x4, 0x2, 0x21, 0x23, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0x25, 0x7, 0xa, 0x2, 0x2, 0x25, 0x28, 0x7, 0x12, 0x2, 0x2, 
       0x26, 0x27, 0x7, 0x9, 0x2, 0x2, 0x27, 0x29, 0x5, 0xa, 0x6, 0x2, 0x28, 
       0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x30, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x7, 0x12, 0x2, 0x2, 0x2b, 0x2c, 
       0x7, 0x9, 0x2, 0x2, 0x2c, 0x2e, 0x5, 0xa, 0x6, 0x2, 0x2d, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x3, 0x2, 
       0x2, 0x2, 0x2f, 0x24, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2a, 0x3, 0x2, 0x2, 
       0x2, 0x30, 0x9, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x9, 0x2, 0x2, 0x2, 
       0x32, 0xb, 0x3, 0x2, 0x2, 0x2, 0x7, 0x14, 0x22, 0x28, 0x2d, 0x2f, 
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
