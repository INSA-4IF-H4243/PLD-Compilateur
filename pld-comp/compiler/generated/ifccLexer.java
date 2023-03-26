// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, TYPE=11, INT=12, CHAR=13, RETURN=14, CONST=15, OP=16, COMMENT=17, 
		DIRECTIVE=18, WS=19, VAR=20;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "TYPE", "INT", "CHAR", "RETURN", "CONST", "OP", "COMMENT", "DIRECTIVE", 
			"WS", "VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'+'", "'-'", 
			"','", null, "'int'", "'char'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, "TYPE", 
			"INT", "CHAR", "RETURN", "CONST", "OP", "COMMENT", "DIRECTIVE", "WS", 
			"VAR"
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


	public ifccLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\26\177\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5"+
		"\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\5\fE\n"+
		"\f\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3"+
		"\17\3\17\3\20\6\20X\n\20\r\20\16\20Y\3\21\3\21\3\22\3\22\3\22\3\22\7\22"+
		"b\n\22\f\22\16\22e\13\22\3\22\3\22\3\22\3\22\3\22\3\23\3\23\7\23n\n\23"+
		"\f\23\16\23q\13\23\3\23\3\23\3\23\3\23\3\24\3\24\3\24\3\24\3\25\6\25|"+
		"\n\25\r\25\16\25}\4co\2\26\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25"+
		"\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26\3\2\6\3\2\62;\4\2"+
		",,\61\61\5\2\13\f\17\17\"\"\4\2C\\c|\2\u0083\2\3\3\2\2\2\2\5\3\2\2\2\2"+
		"\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2"+
		"\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2"+
		"\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2"+
		"\2\2)\3\2\2\2\3+\3\2\2\2\5\60\3\2\2\2\7\62\3\2\2\2\t\64\3\2\2\2\13\66"+
		"\3\2\2\2\r8\3\2\2\2\17:\3\2\2\2\21<\3\2\2\2\23>\3\2\2\2\25@\3\2\2\2\27"+
		"D\3\2\2\2\31F\3\2\2\2\33J\3\2\2\2\35O\3\2\2\2\37W\3\2\2\2![\3\2\2\2#]"+
		"\3\2\2\2%k\3\2\2\2\'v\3\2\2\2){\3\2\2\2+,\7o\2\2,-\7c\2\2-.\7k\2\2./\7"+
		"p\2\2/\4\3\2\2\2\60\61\7*\2\2\61\6\3\2\2\2\62\63\7+\2\2\63\b\3\2\2\2\64"+
		"\65\7}\2\2\65\n\3\2\2\2\66\67\7=\2\2\67\f\3\2\2\289\7\177\2\29\16\3\2"+
		"\2\2:;\7?\2\2;\20\3\2\2\2<=\7-\2\2=\22\3\2\2\2>?\7/\2\2?\24\3\2\2\2@A"+
		"\7.\2\2A\26\3\2\2\2BE\5\31\r\2CE\5\33\16\2DB\3\2\2\2DC\3\2\2\2E\30\3\2"+
		"\2\2FG\7k\2\2GH\7p\2\2HI\7v\2\2I\32\3\2\2\2JK\7e\2\2KL\7j\2\2LM\7c\2\2"+
		"MN\7t\2\2N\34\3\2\2\2OP\7t\2\2PQ\7g\2\2QR\7v\2\2RS\7w\2\2ST\7t\2\2TU\7"+
		"p\2\2U\36\3\2\2\2VX\t\2\2\2WV\3\2\2\2XY\3\2\2\2YW\3\2\2\2YZ\3\2\2\2Z "+
		"\3\2\2\2[\\\t\3\2\2\\\"\3\2\2\2]^\7\61\2\2^_\7,\2\2_c\3\2\2\2`b\13\2\2"+
		"\2a`\3\2\2\2be\3\2\2\2cd\3\2\2\2ca\3\2\2\2df\3\2\2\2ec\3\2\2\2fg\7,\2"+
		"\2gh\7\61\2\2hi\3\2\2\2ij\b\22\2\2j$\3\2\2\2ko\7%\2\2ln\13\2\2\2ml\3\2"+
		"\2\2nq\3\2\2\2op\3\2\2\2om\3\2\2\2pr\3\2\2\2qo\3\2\2\2rs\7\f\2\2st\3\2"+
		"\2\2tu\b\23\2\2u&\3\2\2\2vw\t\4\2\2wx\3\2\2\2xy\b\24\3\2y(\3\2\2\2z|\t"+
		"\5\2\2{z\3\2\2\2|}\3\2\2\2}{\3\2\2\2}~\3\2\2\2~*\3\2\2\2\b\2DYco}\4\b"+
		"\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}