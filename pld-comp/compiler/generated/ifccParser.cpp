
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

tree::TerminalNode* ifccParser::ProgContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::IdContext* ifccParser::ProgContext::id() {
  return getRuleContext<ifccParser::IdContext>(0);
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
    setState(20);
    match(ifccParser::T__0);
    setState(21);
    match(ifccParser::T__1);
    setState(22);
    match(ifccParser::T__2);
    setState(23);
    match(ifccParser::T__3);
    setState(24);
    match(ifccParser::T__4);
    setState(26);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::T__0)
      | (1ULL << ifccParser::T__9)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(25);
      code();
    }
    setState(28);
    match(ifccParser::RETURN);
    setState(29);
    id();
    setState(30);
    match(ifccParser::T__5);
    setState(31);
    match(ifccParser::T__6);
   
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

ifccParser::StatementContext* ifccParser::CodeContext::statement() {
  return getRuleContext<ifccParser::StatementContext>(0);
}

ifccParser::CodeContext* ifccParser::CodeContext::code() {
  return getRuleContext<ifccParser::CodeContext>(0);
}


size_t ifccParser::CodeContext::getRuleIndex() const {
  return ifccParser::RuleCode;
}


antlrcpp::Any ifccParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCode(this);
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
    setState(37);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(33);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(34);
      statement();
      setState(35);
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

//----------------- StatementContext ------------------------------------------------------------------

ifccParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::DeclarationContext* ifccParser::StatementContext::declaration() {
  return getRuleContext<ifccParser::DeclarationContext>(0);
}

ifccParser::AffectationContext* ifccParser::StatementContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}


size_t ifccParser::StatementContext::getRuleIndex() const {
  return ifccParser::RuleStatement;
}


antlrcpp::Any ifccParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::StatementContext* ifccParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::T__0:
      case ifccParser::T__9: {
        enterOuterAlt(_localctx, 1);
        setState(39);
        declaration();
        break;
      }

      case ifccParser::VAR: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        affectation();
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

//----------------- DeclarationContext ------------------------------------------------------------------

ifccParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::DeclarationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

tree::TerminalNode* ifccParser::DeclarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::IdContext* ifccParser::DeclarationContext::id() {
  return getRuleContext<ifccParser::IdContext>(0);
}

ifccParser::VarsContext* ifccParser::DeclarationContext::vars() {
  return getRuleContext<ifccParser::VarsContext>(0);
}


size_t ifccParser::DeclarationContext::getRuleIndex() const {
  return ifccParser::RuleDeclaration;
}


antlrcpp::Any ifccParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DeclarationContext* ifccParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleDeclaration);

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(43);
      type();
      setState(44);
      match(ifccParser::VAR);
      setState(45);
      match(ifccParser::T__7);
      setState(46);
      id();
      setState(47);
      match(ifccParser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      type();
      setState(50);
      vars();
      setState(51);
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

//----------------- AffectationContext ------------------------------------------------------------------

ifccParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::AffectationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::IdContext* ifccParser::AffectationContext::id() {
  return getRuleContext<ifccParser::IdContext>(0);
}


size_t ifccParser::AffectationContext::getRuleIndex() const {
  return ifccParser::RuleAffectation;
}


antlrcpp::Any ifccParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AffectationContext* ifccParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleAffectation);

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
    match(ifccParser::VAR);
    setState(56);
    match(ifccParser::T__7);
    setState(57);
    id();
    setState(58);
    match(ifccParser::T__5);
   
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
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      match(ifccParser::VAR);
      setState(62);
      match(ifccParser::T__8);
      setState(64);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ifccParser::VAR) {
        setState(63);
        vars();
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

//----------------- IdContext ------------------------------------------------------------------

ifccParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::IdContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

tree::TerminalNode* ifccParser::IdContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}


size_t ifccParser::IdContext::getRuleIndex() const {
  return ifccParser::RuleId;
}


antlrcpp::Any ifccParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::IdContext* ifccParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleId);
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
    setState(68);
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

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}


antlrcpp::Any ifccParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleType);
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
    setState(70);
    _la = _input->LA(1);
    if (!(_la == ifccParser::T__0

    || _la == ifccParser::T__9)) {
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
  "axiom", "prog", "code", "statement", "declaration", "affectation", "vars", 
  "id", "type"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "','", 
  "'string'", "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "RETURN", "CONST", "COMMENT", 
  "DIRECTIVE", "WS", "VAR"
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
       0x3, 0x12, 0x4b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x1d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x5, 0x4, 0x28, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2c, 0xa, 
       0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x38, 0xa, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x43, 0xa, 0x8, 0x5, 0x8, 0x45, 
       0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x2, 
       0x2, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x2, 0x4, 
       0x4, 0x2, 0xe, 0xe, 0x12, 0x12, 0x4, 0x2, 0x3, 0x3, 0xc, 0xc, 0x2, 
       0x47, 0x2, 0x14, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0x37, 0x3, 0x2, 0x2, 0x2, 0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe, 0x44, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x46, 0x3, 0x2, 0x2, 0x2, 0x12, 0x48, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x4, 0x3, 0x2, 0x15, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x17, 0x7, 0x3, 0x2, 0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 
       0x2, 0x18, 0x19, 0x7, 0x5, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x6, 0x2, 0x2, 
       0x1a, 0x1c, 0x7, 0x7, 0x2, 0x2, 0x1b, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1c, 
       0x1b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 
       0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0xd, 0x2, 0x2, 0x1f, 0x20, 0x5, 
       0x10, 0x9, 0x2, 0x20, 0x21, 0x7, 0x8, 0x2, 0x2, 0x21, 0x22, 0x7, 
       0x9, 0x2, 0x2, 0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 0x28, 0x5, 0x8, 
       0x5, 0x2, 0x24, 0x25, 0x5, 0x8, 0x5, 0x2, 0x25, 0x26, 0x5, 0x6, 0x4, 
       0x2, 0x26, 0x28, 0x3, 0x2, 0x2, 0x2, 0x27, 0x23, 0x3, 0x2, 0x2, 0x2, 
       0x27, 0x24, 0x3, 0x2, 0x2, 0x2, 0x28, 0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 
       0x2c, 0x5, 0xa, 0x6, 0x2, 0x2a, 0x2c, 0x5, 0xc, 0x7, 0x2, 0x2b, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x9, 0x3, 
       0x2, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x12, 0xa, 0x2, 0x2e, 0x2f, 0x7, 
       0x12, 0x2, 0x2, 0x2f, 0x30, 0x7, 0xa, 0x2, 0x2, 0x30, 0x31, 0x5, 
       0x10, 0x9, 0x2, 0x31, 0x32, 0x7, 0x8, 0x2, 0x2, 0x32, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x33, 0x34, 0x5, 0x12, 0xa, 0x2, 0x34, 0x35, 0x5, 
       0xe, 0x8, 0x2, 0x35, 0x36, 0x7, 0x8, 0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 
       0x2, 0x2, 0x37, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x37, 0x33, 0x3, 0x2, 0x2, 
       0x2, 0x38, 0xb, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x12, 0x2, 0x2, 
       0x3a, 0x3b, 0x7, 0xa, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x10, 0x9, 0x2, 
       0x3c, 0x3d, 0x7, 0x8, 0x2, 0x2, 0x3d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x45, 0x7, 0x12, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x12, 0x2, 0x2, 0x40, 
       0x42, 0x7, 0xb, 0x2, 0x2, 0x41, 0x43, 0x5, 0xe, 0x8, 0x2, 0x42, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0x45, 0x3, 
       0x2, 0x2, 0x2, 0x44, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x44, 0x3f, 0x3, 0x2, 
       0x2, 0x2, 0x45, 0xf, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x9, 0x2, 0x2, 
       0x2, 0x47, 0x11, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x9, 0x3, 0x2, 0x2, 
       0x49, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1c, 0x27, 0x2b, 0x37, 0x42, 
       0x44, 
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
