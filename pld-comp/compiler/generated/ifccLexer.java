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
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, TYPE=8, INT=9, 
		CHAR=10, RETURN=11, CONST=12, COMMENT=13, DIRECTIVE=14, WS=15, VAR=16;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "TYPE", "INT", 
			"CHAR", "RETURN", "CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'('", "')'", "'{'", "';'", "'}'", "'='", null, "'int'", 
			"'char'", "'return'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, "TYPE", "INT", "CHAR", 
			"RETURN", "CONST", "COMMENT", "DIRECTIVE", "WS", "VAR"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\22o\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3\2\3"+
		"\2\3\2\3\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\5\t"+
		"\67\n\t\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3\f\3\f\3\f\3"+
		"\f\3\f\3\r\6\rJ\n\r\r\r\16\rK\3\16\3\16\3\16\3\16\7\16R\n\16\f\16\16\16"+
		"U\13\16\3\16\3\16\3\16\3\16\3\16\3\17\3\17\7\17^\n\17\f\17\16\17a\13\17"+
		"\3\17\3\17\3\17\3\17\3\20\3\20\3\20\3\20\3\21\6\21l\n\21\r\21\16\21m\4"+
		"S_\2\22\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\35\20\37\21!\22\3\2\5\3\2\62;\5\2\13\f\17\17\"\"\4\2C\\c|\2s\2\3\3\2"+
		"\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17"+
		"\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2"+
		"\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\3#\3\2\2\2\5(\3"+
		"\2\2\2\7*\3\2\2\2\t,\3\2\2\2\13.\3\2\2\2\r\60\3\2\2\2\17\62\3\2\2\2\21"+
		"\66\3\2\2\2\238\3\2\2\2\25<\3\2\2\2\27A\3\2\2\2\31I\3\2\2\2\33M\3\2\2"+
		"\2\35[\3\2\2\2\37f\3\2\2\2!k\3\2\2\2#$\7o\2\2$%\7c\2\2%&\7k\2\2&\'\7p"+
		"\2\2\'\4\3\2\2\2()\7*\2\2)\6\3\2\2\2*+\7+\2\2+\b\3\2\2\2,-\7}\2\2-\n\3"+
		"\2\2\2./\7=\2\2/\f\3\2\2\2\60\61\7\177\2\2\61\16\3\2\2\2\62\63\7?\2\2"+
		"\63\20\3\2\2\2\64\67\5\23\n\2\65\67\5\25\13\2\66\64\3\2\2\2\66\65\3\2"+
		"\2\2\67\22\3\2\2\289\7k\2\29:\7p\2\2:;\7v\2\2;\24\3\2\2\2<=\7e\2\2=>\7"+
		"j\2\2>?\7c\2\2?@\7t\2\2@\26\3\2\2\2AB\7t\2\2BC\7g\2\2CD\7v\2\2DE\7w\2"+
		"\2EF\7t\2\2FG\7p\2\2G\30\3\2\2\2HJ\t\2\2\2IH\3\2\2\2JK\3\2\2\2KI\3\2\2"+
		"\2KL\3\2\2\2L\32\3\2\2\2MN\7\61\2\2NO\7,\2\2OS\3\2\2\2PR\13\2\2\2QP\3"+
		"\2\2\2RU\3\2\2\2ST\3\2\2\2SQ\3\2\2\2TV\3\2\2\2US\3\2\2\2VW\7,\2\2WX\7"+
		"\61\2\2XY\3\2\2\2YZ\b\16\2\2Z\34\3\2\2\2[_\7%\2\2\\^\13\2\2\2]\\\3\2\2"+
		"\2^a\3\2\2\2_`\3\2\2\2_]\3\2\2\2`b\3\2\2\2a_\3\2\2\2bc\7\f\2\2cd\3\2\2"+
		"\2de\b\17\2\2e\36\3\2\2\2fg\t\3\2\2gh\3\2\2\2hi\b\20\3\2i \3\2\2\2jl\t"+
		"\4\2\2kj\3\2\2\2lm\3\2\2\2mk\3\2\2\2mn\3\2\2\2n\"\3\2\2\2\b\2\66KS_m\4"+
		"\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}