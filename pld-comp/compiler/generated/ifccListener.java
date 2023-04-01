// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ifccParser}.
 */
public interface ifccListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void enterAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void exitAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ifccParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ifccParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by the {@code uneInst}
	 * labeled alternative in {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void enterUneInst(ifccParser.UneInstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code uneInst}
	 * labeled alternative in {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void exitUneInst(ifccParser.UneInstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code mulInst}
	 * labeled alternative in {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void enterMulInst(ifccParser.MulInstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code mulInst}
	 * labeled alternative in {@link ifccParser#code}.
	 * @param ctx the parse tree
	 */
	void exitMulInst(ifccParser.MulInstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declaration}
	 * labeled alternative in {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declaration}
	 * labeled alternative in {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitDeclaration(ifccParser.DeclarationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code affectation}
	 * labeled alternative in {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void enterAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code affectation}
	 * labeled alternative in {@link ifccParser#instruction}.
	 * @param ctx the parse tree
	 */
	void exitAffectation(ifccParser.AffectationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterPar(ifccParser.ParContext ctx);
	/**
	 * Exit a parse tree produced by the {@code par}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitPar(ifccParser.ParContext ctx);
	/**
	 * Enter a parse tree produced by the {@code add}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAdd(ifccParser.AddContext ctx);
	/**
	 * Exit a parse tree produced by the {@code add}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAdd(ifccParser.AddContext ctx);
	/**
	 * Enter a parse tree produced by the {@code neg}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNeg(ifccParser.NegContext ctx);
	/**
	 * Exit a parse tree produced by the {@code neg}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNeg(ifccParser.NegContext ctx);
	/**
	 * Enter a parse tree produced by the {@code sub}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterSub(ifccParser.SubContext ctx);
	/**
	 * Exit a parse tree produced by the {@code sub}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitSub(ifccParser.SubContext ctx);
	/**
	 * Enter a parse tree produced by the {@code not}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterNot(ifccParser.NotContext ctx);
	/**
	 * Exit a parse tree produced by the {@code not}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitNot(ifccParser.NotContext ctx);
	/**
	 * Enter a parse tree produced by the {@code or}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterOr(ifccParser.OrContext ctx);
	/**
	 * Exit a parse tree produced by the {@code or}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitOr(ifccParser.OrContext ctx);
	/**
	 * Enter a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterConst(ifccParser.ConstContext ctx);
	/**
	 * Exit a parse tree produced by the {@code const}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitConst(ifccParser.ConstContext ctx);
	/**
	 * Enter a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterVar(ifccParser.VarContext ctx);
	/**
	 * Exit a parse tree produced by the {@code var}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitVar(ifccParser.VarContext ctx);
	/**
	 * Enter a parse tree produced by the {@code and}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterAnd(ifccParser.AndContext ctx);
	/**
	 * Exit a parse tree produced by the {@code and}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitAnd(ifccParser.AndContext ctx);
	/**
	 * Enter a parse tree produced by the {@code cmp}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterCmp(ifccParser.CmpContext ctx);
	/**
	 * Exit a parse tree produced by the {@code cmp}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitCmp(ifccParser.CmpContext ctx);
	/**
	 * Enter a parse tree produced by the {@code xor}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterXor(ifccParser.XorContext ctx);
	/**
	 * Exit a parse tree produced by the {@code xor}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitXor(ifccParser.XorContext ctx);
	/**
	 * Enter a parse tree produced by the {@code muldiv}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterMuldiv(ifccParser.MuldivContext ctx);
	/**
	 * Exit a parse tree produced by the {@code muldiv}
	 * labeled alternative in {@link ifccParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitMuldiv(ifccParser.MuldivContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#vars}.
	 * @param ctx the parse tree
	 */
	void enterVars(ifccParser.VarsContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#vars}.
	 * @param ctx the parse tree
	 */
	void exitVars(ifccParser.VarsContext ctx);
}