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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, TYPE=9, 
		INT=10, CHAR=11, IF=12, ELSE=13, RETURN=14, CONST=15, OPM=16, OPP=17, 
		CMPOP=18, COMMENT=19, DIRECTIVE=20, WS=21, VAR=22;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "TYPE", 
			"INT", "CHAR", "IF", "ELSE", "RETURN", "CONST", "OPM", "OPP", "CMPOP", 
			"COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "','", null, 
			"'int'", "'char'", "'if'", "'else'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "TYPE", "INT", 
			"CHAR", "IF", "ELSE", "RETURN", "CONST", "OPM", "OPP", "CMPOP", "COMMENT", 
			"DIRECTIVE", "WS", "VAR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\30\u0094\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\3\2\3\2\3\2\3"+
		"\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n"+
		"\5\nE\n\n\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\16\3\16"+
		"\3\16\3\16\3\16\3\17\3\17\3\17\3\17\3\17\3\17\3\17\3\20\6\20`\n\20\r\20"+
		"\16\20a\3\21\3\21\3\22\3\22\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3\23\3"+
		"\23\5\23q\n\23\3\24\3\24\3\24\3\24\7\24w\n\24\f\24\16\24z\13\24\3\24\3"+
		"\24\3\24\3\24\3\24\3\25\3\25\7\25\u0083\n\25\f\25\16\25\u0086\13\25\3"+
		"\25\3\25\3\25\3\25\3\26\3\26\3\26\3\26\3\27\6\27\u0091\n\27\r\27\16\27"+
		"\u0092\4x\u0084\2\30\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27"+
		"\r\31\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30\3\2\b\3\2\62;"+
		"\4\2,,\61\61\4\2--//\4\2>>@@\5\2\13\f\17\17\"\"\4\2C\\c|\2\u009c\2\3\3"+
		"\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2"+
		"\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3"+
		"\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2"+
		"%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\3/\3\2\2\2\5\64"+
		"\3\2\2\2\7\66\3\2\2\2\t8\3\2\2\2\13:\3\2\2\2\r<\3\2\2\2\17>\3\2\2\2\21"+
		"@\3\2\2\2\23D\3\2\2\2\25F\3\2\2\2\27J\3\2\2\2\31O\3\2\2\2\33R\3\2\2\2"+
		"\35W\3\2\2\2\37_\3\2\2\2!c\3\2\2\2#e\3\2\2\2%p\3\2\2\2\'r\3\2\2\2)\u0080"+
		"\3\2\2\2+\u008b\3\2\2\2-\u0090\3\2\2\2/\60\7o\2\2\60\61\7c\2\2\61\62\7"+
		"k\2\2\62\63\7p\2\2\63\4\3\2\2\2\64\65\7*\2\2\65\6\3\2\2\2\66\67\7+\2\2"+
		"\67\b\3\2\2\289\7}\2\29\n\3\2\2\2:;\7=\2\2;\f\3\2\2\2<=\7\177\2\2=\16"+
		"\3\2\2\2>?\7?\2\2?\20\3\2\2\2@A\7.\2\2A\22\3\2\2\2BE\5\25\13\2CE\5\27"+
		"\f\2DB\3\2\2\2DC\3\2\2\2E\24\3\2\2\2FG\7k\2\2GH\7p\2\2HI\7v\2\2I\26\3"+
		"\2\2\2JK\7e\2\2KL\7j\2\2LM\7c\2\2MN\7t\2\2N\30\3\2\2\2OP\7k\2\2PQ\7h\2"+
		"\2Q\32\3\2\2\2RS\7g\2\2ST\7n\2\2TU\7u\2\2UV\7g\2\2V\34\3\2\2\2WX\7t\2"+
		"\2XY\7g\2\2YZ\7v\2\2Z[\7w\2\2[\\\7t\2\2\\]\7p\2\2]\36\3\2\2\2^`\t\2\2"+
		"\2_^\3\2\2\2`a\3\2\2\2a_\3\2\2\2ab\3\2\2\2b \3\2\2\2cd\t\3\2\2d\"\3\2"+
		"\2\2ef\t\4\2\2f$\3\2\2\2gh\7?\2\2hq\7?\2\2ij\7#\2\2jq\7?\2\2kq\t\5\2\2"+
		"lm\7>\2\2mq\7?\2\2no\7@\2\2oq\7?\2\2pg\3\2\2\2pi\3\2\2\2pk\3\2\2\2pl\3"+
		"\2\2\2pn\3\2\2\2q&\3\2\2\2rs\7\61\2\2st\7,\2\2tx\3\2\2\2uw\13\2\2\2vu"+
		"\3\2\2\2wz\3\2\2\2xy\3\2\2\2xv\3\2\2\2y{\3\2\2\2zx\3\2\2\2{|\7,\2\2|}"+
		"\7\61\2\2}~\3\2\2\2~\177\b\24\2\2\177(\3\2\2\2\u0080\u0084\7%\2\2\u0081"+
		"\u0083\13\2\2\2\u0082\u0081\3\2\2\2\u0083\u0086\3\2\2\2\u0084\u0085\3"+
		"\2\2\2\u0084\u0082\3\2\2\2\u0085\u0087\3\2\2\2\u0086\u0084\3\2\2\2\u0087"+
		"\u0088\7\f\2\2\u0088\u0089\3\2\2\2\u0089\u008a\b\25\2\2\u008a*\3\2\2\2"+
		"\u008b\u008c\t\6\2\2\u008c\u008d\3\2\2\2\u008d\u008e\b\26\3\2\u008e,\3"+
		"\2\2\2\u008f\u0091\t\7\2\2\u0090\u008f\3\2\2\2\u0091\u0092\3\2\2\2\u0092"+
		"\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093.\3\2\2\2\t\2Dapx\u0084\u0092"+
		"\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}