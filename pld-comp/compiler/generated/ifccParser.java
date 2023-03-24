// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		TYPE=10, INT=11, CHAR=12, RETURN=13, CONST=14, COMMENT=15, DIRECTIVE=16, 
		WS=17, VAR=18;
	public static final int
		RULE_axiom = 0, RULE_prog = 1, RULE_code = 2, RULE_instruction = 3, RULE_expr = 4, 
		RULE_vars = 5;
	private static String[] makeRuleNames() {
		return new String[] {
			"axiom", "prog", "code", "instruction", "expr", "vars"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'+'", "','", 
			null, "'int'", "'char'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "TYPE", "INT", 
			"CHAR", "RETURN", "CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ifccParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class AxiomContext extends ParserRuleContext {
		public ProgContext prog() {
			return getRuleContext(ProgContext.class,0);
		}
		public AxiomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_axiom; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAxiom(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAxiom(this);
		}
	}

	public final AxiomContext axiom() throws RecognitionException {
		AxiomContext _localctx = new AxiomContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_axiom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(12);
			prog();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(ifccParser.TYPE, 0); }
		public TerminalNode RETURN() { return getToken(ifccParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(14);
			match(TYPE);
			setState(15);
			match(T__0);
			setState(16);
			match(T__1);
			setState(17);
			match(T__2);
			setState(18);
			match(T__3);
			setState(20);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE || _la==VAR) {
				{
				setState(19);
				code();
				}
			}

			setState(22);
			match(RETURN);
			setState(23);
			expr(0);
			setState(24);
			match(T__4);
			setState(25);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CodeContext extends ParserRuleContext {
		public CodeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code; }
	 
		public CodeContext() { }
		public void copyFrom(CodeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class UneInstContext extends CodeContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public UneInstContext(CodeContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterUneInst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitUneInst(this);
		}
	}
	public static class MulInstContext extends CodeContext {
		public InstructionContext instruction() {
			return getRuleContext(InstructionContext.class,0);
		}
		public CodeContext code() {
			return getRuleContext(CodeContext.class,0);
		}
		public MulInstContext(CodeContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterMulInst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitMulInst(this);
		}
	}

	public final CodeContext code() throws RecognitionException {
		CodeContext _localctx = new CodeContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_code);
		try {
			setState(34);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new UneInstContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(27);
				instruction();
				setState(28);
				match(T__4);
				}
				break;
			case 2:
				_localctx = new MulInstContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(30);
				instruction();
				setState(31);
				match(T__4);
				setState(32);
				code();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InstructionContext extends ParserRuleContext {
		public InstructionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instruction; }
	 
		public InstructionContext() { }
		public void copyFrom(InstructionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DeclarationContext extends InstructionContext {
		public TerminalNode TYPE() { return getToken(ifccParser.TYPE, 0); }
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public DeclarationContext(InstructionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitDeclaration(this);
		}
	}
	public static class AffectationContext extends InstructionContext {
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AffectationContext(InstructionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAffectation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAffectation(this);
		}
	}

	public final InstructionContext instruction() throws RecognitionException {
		InstructionContext _localctx = new InstructionContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_instruction);
		int _la;
		try {
			setState(46);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case TYPE:
				_localctx = new DeclarationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(36);
				match(TYPE);
				setState(37);
				vars();
				setState(40);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__6) {
					{
					setState(38);
					match(T__6);
					setState(39);
					expr(0);
					}
				}

				}
				break;
			case VAR:
				_localctx = new AffectationContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(42);
				vars();
				setState(43);
				match(T__6);
				setState(44);
				expr(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParContext extends ExprContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ParContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterPar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitPar(this);
		}
	}
	public static class AddContext extends ExprContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public AddContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAdd(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAdd(this);
		}
	}
	public static class ConstContext extends ExprContext {
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public ConstContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitConst(this);
		}
	}
	public static class VarContext extends ExprContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarContext(ExprContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitVar(this);
		}
	}

	public final ExprContext expr() throws RecognitionException {
		return expr(0);
	}

	private ExprContext expr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExprContext _localctx = new ExprContext(_ctx, _parentState);
		ExprContext _prevctx = _localctx;
		int _startState = 8;
		enterRecursionRule(_localctx, 8, RULE_expr, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case CONST:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(49);
				match(CONST);
				}
				break;
			case VAR:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(50);
				match(VAR);
				}
				break;
			case T__1:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(51);
				match(T__1);
				setState(52);
				expr(0);
				setState(53);
				match(T__2);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(62);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					{
					_localctx = new AddContext(new ExprContext(_parentctx, _parentState));
					pushNewRecursionContext(_localctx, _startState, RULE_expr);
					setState(57);
					if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
					setState(58);
					match(T__7);
					setState(59);
					expr(3);
					}
					} 
				}
				setState(64);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class VarsContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarsContext vars() {
			return getRuleContext(VarsContext.class,0);
		}
		public VarsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_vars; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterVars(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitVars(this);
		}
	}

	public final VarsContext vars() throws RecognitionException {
		VarsContext _localctx = new VarsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_vars);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(65);
			match(VAR);
			setState(68);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==T__8) {
				{
				setState(66);
				match(T__8);
				setState(67);
				vars();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 4:
			return expr_sempred((ExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expr_sempred(ExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\24I\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\5\3"+
		"\27\n\3\3\3\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4%\n\4\3\5\3"+
		"\5\3\5\3\5\5\5+\n\5\3\5\3\5\3\5\3\5\5\5\61\n\5\3\6\3\6\3\6\3\6\3\6\3\6"+
		"\3\6\5\6:\n\6\3\6\3\6\3\6\7\6?\n\6\f\6\16\6B\13\6\3\7\3\7\3\7\5\7G\n\7"+
		"\3\7\2\3\n\b\2\4\6\b\n\f\2\2\2J\2\16\3\2\2\2\4\20\3\2\2\2\6$\3\2\2\2\b"+
		"\60\3\2\2\2\n9\3\2\2\2\fC\3\2\2\2\16\17\5\4\3\2\17\3\3\2\2\2\20\21\7\f"+
		"\2\2\21\22\7\3\2\2\22\23\7\4\2\2\23\24\7\5\2\2\24\26\7\6\2\2\25\27\5\6"+
		"\4\2\26\25\3\2\2\2\26\27\3\2\2\2\27\30\3\2\2\2\30\31\7\17\2\2\31\32\5"+
		"\n\6\2\32\33\7\7\2\2\33\34\7\b\2\2\34\5\3\2\2\2\35\36\5\b\5\2\36\37\7"+
		"\7\2\2\37%\3\2\2\2 !\5\b\5\2!\"\7\7\2\2\"#\5\6\4\2#%\3\2\2\2$\35\3\2\2"+
		"\2$ \3\2\2\2%\7\3\2\2\2&\'\7\f\2\2\'*\5\f\7\2()\7\t\2\2)+\5\n\6\2*(\3"+
		"\2\2\2*+\3\2\2\2+\61\3\2\2\2,-\5\f\7\2-.\7\t\2\2./\5\n\6\2/\61\3\2\2\2"+
		"\60&\3\2\2\2\60,\3\2\2\2\61\t\3\2\2\2\62\63\b\6\1\2\63:\7\20\2\2\64:\7"+
		"\24\2\2\65\66\7\4\2\2\66\67\5\n\6\2\678\7\5\2\28:\3\2\2\29\62\3\2\2\2"+
		"9\64\3\2\2\29\65\3\2\2\2:@\3\2\2\2;<\f\4\2\2<=\7\n\2\2=?\5\n\6\5>;\3\2"+
		"\2\2?B\3\2\2\2@>\3\2\2\2@A\3\2\2\2A\13\3\2\2\2B@\3\2\2\2CF\7\24\2\2DE"+
		"\7\13\2\2EG\5\f\7\2FD\3\2\2\2FG\3\2\2\2G\r\3\2\2\2\t\26$*\609@F";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}