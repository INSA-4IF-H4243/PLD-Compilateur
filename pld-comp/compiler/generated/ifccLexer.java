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
		RETURN=10, CONST=11, COMMENT=12, DIRECTIVE=13, WS=14, VAR=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"RETURN", "CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'int'", "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", "'string'", 
			"'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, "RETURN", 
			"CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\21k\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\6\fF\n\f"+
		"\r\f\16\fG\3\r\3\r\3\r\3\r\7\rN\n\r\f\r\16\rQ\13\r\3\r\3\r\3\r\3\r\3\r"+
		"\3\16\3\16\7\16Z\n\16\f\16\16\16]\13\16\3\16\3\16\3\16\3\16\3\17\3\17"+
		"\3\17\3\17\3\20\6\20h\n\20\r\20\16\20i\4O[\2\21\3\3\5\4\7\5\t\6\13\7\r"+
		"\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21\3\2\5\3\2\62;\5\2"+
		"\13\f\17\17\"\"\4\2C\\c|\2n\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3"+
		"\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2"+
		"\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37"+
		"\3\2\2\2\3!\3\2\2\2\5%\3\2\2\2\7*\3\2\2\2\t,\3\2\2\2\13.\3\2\2\2\r\60"+
		"\3\2\2\2\17\62\3\2\2\2\21\64\3\2\2\2\23\66\3\2\2\2\25=\3\2\2\2\27E\3\2"+
		"\2\2\31I\3\2\2\2\33W\3\2\2\2\35b\3\2\2\2\37g\3\2\2\2!\"\7k\2\2\"#\7p\2"+
		"\2#$\7v\2\2$\4\3\2\2\2%&\7o\2\2&\'\7c\2\2\'(\7k\2\2()\7p\2\2)\6\3\2\2"+
		"\2*+\7*\2\2+\b\3\2\2\2,-\7+\2\2-\n\3\2\2\2./\7}\2\2/\f\3\2\2\2\60\61\7"+
		"=\2\2\61\16\3\2\2\2\62\63\7\177\2\2\63\20\3\2\2\2\64\65\7?\2\2\65\22\3"+
		"\2\2\2\66\67\7u\2\2\678\7v\2\289\7t\2\29:\7k\2\2:;\7p\2\2;<\7i\2\2<\24"+
		"\3\2\2\2=>\7t\2\2>?\7g\2\2?@\7v\2\2@A\7w\2\2AB\7t\2\2BC\7p\2\2C\26\3\2"+
		"\2\2DF\t\2\2\2ED\3\2\2\2FG\3\2\2\2GE\3\2\2\2GH\3\2\2\2H\30\3\2\2\2IJ\7"+
		"\61\2\2JK\7,\2\2KO\3\2\2\2LN\13\2\2\2ML\3\2\2\2NQ\3\2\2\2OP\3\2\2\2OM"+
		"\3\2\2\2PR\3\2\2\2QO\3\2\2\2RS\7,\2\2ST\7\61\2\2TU\3\2\2\2UV\b\r\2\2V"+
		"\32\3\2\2\2W[\7%\2\2XZ\13\2\2\2YX\3\2\2\2Z]\3\2\2\2[\\\3\2\2\2[Y\3\2\2"+
		"\2\\^\3\2\2\2][\3\2\2\2^_\7\f\2\2_`\3\2\2\2`a\b\16\2\2a\34\3\2\2\2bc\t"+
		"\3\2\2cd\3\2\2\2de\b\17\3\2e\36\3\2\2\2fh\t\4\2\2gf\3\2\2\2hi\3\2\2\2"+
		"ig\3\2\2\2ij\3\2\2\2j \3\2\2\2\7\2GO[i\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}