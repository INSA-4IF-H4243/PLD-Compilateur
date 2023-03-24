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
		TYPE=10, INT=11, CHAR=12, RETURN=13, CONST=14, COMMENT=15, DIRECTIVE=16, 
		WS=17, VAR=18;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"TYPE", "INT", "CHAR", "RETURN", "CONST", "COMMENT", "DIRECTIVE", "WS", 
			"VAR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\24w\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7"+
		"\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\5\13?\n\13\3\f\3\f\3\f\3\f\3\r\3\r"+
		"\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16\3\16\3\17\6\17R\n\17\r\17\16"+
		"\17S\3\20\3\20\3\20\3\20\7\20Z\n\20\f\20\16\20]\13\20\3\20\3\20\3\20\3"+
		"\20\3\20\3\21\3\21\7\21f\n\21\f\21\16\21i\13\21\3\21\3\21\3\21\3\21\3"+
		"\22\3\22\3\22\3\22\3\23\6\23t\n\23\r\23\16\23u\4[g\2\24\3\3\5\4\7\5\t"+
		"\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22#\23"+
		"%\24\3\2\5\3\2\62;\5\2\13\f\17\17\"\"\4\2C\\c|\2{\2\3\3\2\2\2\2\5\3\2"+
		"\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\3\'\3"+
		"\2\2\2\5,\3\2\2\2\7.\3\2\2\2\t\60\3\2\2\2\13\62\3\2\2\2\r\64\3\2\2\2\17"+
		"\66\3\2\2\2\218\3\2\2\2\23:\3\2\2\2\25>\3\2\2\2\27@\3\2\2\2\31D\3\2\2"+
		"\2\33I\3\2\2\2\35Q\3\2\2\2\37U\3\2\2\2!c\3\2\2\2#n\3\2\2\2%s\3\2\2\2\'"+
		"(\7o\2\2()\7c\2\2)*\7k\2\2*+\7p\2\2+\4\3\2\2\2,-\7*\2\2-\6\3\2\2\2./\7"+
		"+\2\2/\b\3\2\2\2\60\61\7}\2\2\61\n\3\2\2\2\62\63\7=\2\2\63\f\3\2\2\2\64"+
		"\65\7\177\2\2\65\16\3\2\2\2\66\67\7?\2\2\67\20\3\2\2\289\7-\2\29\22\3"+
		"\2\2\2:;\7.\2\2;\24\3\2\2\2<?\5\27\f\2=?\5\31\r\2><\3\2\2\2>=\3\2\2\2"+
		"?\26\3\2\2\2@A\7k\2\2AB\7p\2\2BC\7v\2\2C\30\3\2\2\2DE\7e\2\2EF\7j\2\2"+
		"FG\7c\2\2GH\7t\2\2H\32\3\2\2\2IJ\7t\2\2JK\7g\2\2KL\7v\2\2LM\7w\2\2MN\7"+
		"t\2\2NO\7p\2\2O\34\3\2\2\2PR\t\2\2\2QP\3\2\2\2RS\3\2\2\2SQ\3\2\2\2ST\3"+
		"\2\2\2T\36\3\2\2\2UV\7\61\2\2VW\7,\2\2W[\3\2\2\2XZ\13\2\2\2YX\3\2\2\2"+
		"Z]\3\2\2\2[\\\3\2\2\2[Y\3\2\2\2\\^\3\2\2\2][\3\2\2\2^_\7,\2\2_`\7\61\2"+
		"\2`a\3\2\2\2ab\b\20\2\2b \3\2\2\2cg\7%\2\2df\13\2\2\2ed\3\2\2\2fi\3\2"+
		"\2\2gh\3\2\2\2ge\3\2\2\2hj\3\2\2\2ig\3\2\2\2jk\7\f\2\2kl\3\2\2\2lm\b\21"+
		"\2\2m\"\3\2\2\2no\t\3\2\2op\3\2\2\2pq\b\22\3\2q$\3\2\2\2rt\t\4\2\2sr\3"+
		"\2\2\2tu\3\2\2\2us\3\2\2\2uv\3\2\2\2v&\3\2\2\2\b\2>S[gu\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}