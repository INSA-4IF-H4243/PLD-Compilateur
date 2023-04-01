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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, TYPE=15, INT=16, CHAR=17, 
		RETURN=18, CONST=19, OPM=20, CMPOP=21, COMMENT=22, DIRECTIVE=23, WS=24, 
		VAR=25;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "TYPE", "INT", "CHAR", "RETURN", 
			"CONST", "OPM", "CMPOP", "COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'+'", "'-'", 
			"'|'", "'&'", "'^'", "'!'", "','", null, "'int'", "'char'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "TYPE", "INT", "CHAR", "RETURN", "CONST", "OPM", "CMPOP", 
			"COMMENT", "DIRECTIVE", "WS", "VAR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\33\u0098\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3"+
		"\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17"+
		"\3\17\3\20\3\20\5\20W\n\20\3\21\3\21\3\21\3\21\3\22\3\22\3\22\3\22\3\22"+
		"\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\24\6\24j\n\24\r\24\16\24k\3\25\3"+
		"\25\3\26\3\26\3\26\3\26\3\26\5\26u\n\26\3\27\3\27\3\27\3\27\7\27{\n\27"+
		"\f\27\16\27~\13\27\3\27\3\27\3\27\3\27\3\27\3\30\3\30\7\30\u0087\n\30"+
		"\f\30\16\30\u008a\13\30\3\30\3\30\3\30\3\30\3\31\3\31\3\31\3\31\3\32\6"+
		"\32\u0095\n\32\r\32\16\32\u0096\4|\u0088\2\33\3\3\5\4\7\5\t\6\13\7\r\b"+
		"\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26"+
		"+\27-\30/\31\61\32\63\33\3\2\7\3\2\62;\4\2,,\61\61\4\2>>@@\5\2\13\f\17"+
		"\17\"\"\4\2C\\c|\2\u009e\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2"+
		"\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25"+
		"\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2"+
		"\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2"+
		"\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\3\65\3\2\2\2\5:\3\2"+
		"\2\2\7<\3\2\2\2\t>\3\2\2\2\13@\3\2\2\2\rB\3\2\2\2\17D\3\2\2\2\21F\3\2"+
		"\2\2\23H\3\2\2\2\25J\3\2\2\2\27L\3\2\2\2\31N\3\2\2\2\33P\3\2\2\2\35R\3"+
		"\2\2\2\37V\3\2\2\2!X\3\2\2\2#\\\3\2\2\2%a\3\2\2\2\'i\3\2\2\2)m\3\2\2\2"+
		"+t\3\2\2\2-v\3\2\2\2/\u0084\3\2\2\2\61\u008f\3\2\2\2\63\u0094\3\2\2\2"+
		"\65\66\7o\2\2\66\67\7c\2\2\678\7k\2\289\7p\2\29\4\3\2\2\2:;\7*\2\2;\6"+
		"\3\2\2\2<=\7+\2\2=\b\3\2\2\2>?\7}\2\2?\n\3\2\2\2@A\7=\2\2A\f\3\2\2\2B"+
		"C\7\177\2\2C\16\3\2\2\2DE\7?\2\2E\20\3\2\2\2FG\7-\2\2G\22\3\2\2\2HI\7"+
		"/\2\2I\24\3\2\2\2JK\7~\2\2K\26\3\2\2\2LM\7(\2\2M\30\3\2\2\2NO\7`\2\2O"+
		"\32\3\2\2\2PQ\7#\2\2Q\34\3\2\2\2RS\7.\2\2S\36\3\2\2\2TW\5!\21\2UW\5#\22"+
		"\2VT\3\2\2\2VU\3\2\2\2W \3\2\2\2XY\7k\2\2YZ\7p\2\2Z[\7v\2\2[\"\3\2\2\2"+
		"\\]\7e\2\2]^\7j\2\2^_\7c\2\2_`\7t\2\2`$\3\2\2\2ab\7t\2\2bc\7g\2\2cd\7"+
		"v\2\2de\7w\2\2ef\7t\2\2fg\7p\2\2g&\3\2\2\2hj\t\2\2\2ih\3\2\2\2jk\3\2\2"+
		"\2ki\3\2\2\2kl\3\2\2\2l(\3\2\2\2mn\t\3\2\2n*\3\2\2\2op\7?\2\2pu\7?\2\2"+
		"qr\7#\2\2ru\7?\2\2su\t\4\2\2to\3\2\2\2tq\3\2\2\2ts\3\2\2\2u,\3\2\2\2v"+
		"w\7\61\2\2wx\7,\2\2x|\3\2\2\2y{\13\2\2\2zy\3\2\2\2{~\3\2\2\2|}\3\2\2\2"+
		"|z\3\2\2\2}\177\3\2\2\2~|\3\2\2\2\177\u0080\7,\2\2\u0080\u0081\7\61\2"+
		"\2\u0081\u0082\3\2\2\2\u0082\u0083\b\27\2\2\u0083.\3\2\2\2\u0084\u0088"+
		"\7%\2\2\u0085\u0087\13\2\2\2\u0086\u0085\3\2\2\2\u0087\u008a\3\2\2\2\u0088"+
		"\u0089\3\2\2\2\u0088\u0086\3\2\2\2\u0089\u008b\3\2\2\2\u008a\u0088\3\2"+
		"\2\2\u008b\u008c\7\f\2\2\u008c\u008d\3\2\2\2\u008d\u008e\b\30\2\2\u008e"+
		"\60\3\2\2\2\u008f\u0090\t\5\2\2\u0090\u0091\3\2\2\2\u0091\u0092\b\31\3"+
		"\2\u0092\62\3\2\2\2\u0093\u0095\t\6\2\2\u0094\u0093\3\2\2\2\u0095\u0096"+
		"\3\2\2\2\u0096\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097\64\3\2\2\2\t\2"+
		"Vkt|\u0088\u0096\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}