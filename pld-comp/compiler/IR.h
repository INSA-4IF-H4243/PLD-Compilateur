#ifndef IR_H
#define IR_H

#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <initializer_list>

using namespace std;
// Declarations from the parser -- replace with your own
// #include "type.h"
// #include "symbole.h"

class BasicBlock;
class CFG;
class DefFonction;

//! The class for one 3-address instruction
class IRInstr
{

public:
	/** The instructions themselves -- feel free to subclass instead */
	typedef enum
	{
		ldconst,
		copy,
		add,
		sub,
		mul,
		div,
		not_boolean,
		neg,
		// rmem,
		// wmem,
		// call,
		cmp_eq,
		cmp_ne,
		cmp_gt,
		cmp_ge,
		cmp_lt,
		cmp_le,
		func_call,
		arg_call,
		prologue,
		epilogue,
		unconditional_jump,
		conditional_jump,
		not_equal_jump,
		retour,
	} Operation;

	/**  constructor */
	IRInstr(BasicBlock *bb_, Operation op, vector<string> params);

	/** Actual code generation */
	virtual void gen_asm(ostream &o); /**< x86 assembly code generation for this IR instruction */
	virtual void gen_PseudoCode(); /**< Pseudo code generation for this IR instruction */
protected:
	BasicBlock *bb; /**< The BB this instruction belongs to, which provides a pointer to the CFG this instruction belong to */
	Operation op;
	// Type t;
	vector<string> params; /**< For 3-op instrs: d, x, y; for ldconst: d, c;  For call: label, d, params;  for wmem and rmem: choose yourself */
						   // if you subclass IRInstr, each IRInstr subclass has its parameters and the previous (very important) comment becomes useless: it would be a better design.
};

class IRInstrPrologue : public IRInstr
{
public:
	IRInstrPrologue(BasicBlock *bb_, int stack_pointer);
	void gen_asm(ostream &o) override;
private:
	int stack_pointer;
};

class IRInstrEpilogue : public IRInstr
{
public:
	IRInstrEpilogue(BasicBlock *bb_);
	void gen_asm(ostream &o) override;
};

class IRInstrArg : public IRInstr
{
public:
	IRInstrArg(BasicBlock *bb_, string nom_var, int offset);
	void gen_asm(ostream &o) override;
private:
	string nom_var;
	int offset;
};

class IRInstrFuncCall : public IRInstr
{
public:
	IRInstrFuncCall(BasicBlock *bb_, string label, string tmp, vector<string> params);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string label;
	string tmp;
	vector<string> params;
};

class IRInstrRetour : public IRInstr
{
public:
	IRInstrRetour(BasicBlock *bb_, string var);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string var;
};

class IRInstrLdconst : public IRInstr
{
public:
	IRInstrLdconst(BasicBlock *bb_, string var, int cst);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string var;
	int cst;
};

class IRInstrCopy : public IRInstr
{
public:
    IRInstrCopy(BasicBlock *bb_, string var, string res);
    void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string var;
	string res;
};

class IRInstrAdd : public IRInstr
{
public:
	IRInstrAdd(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrSub : public IRInstr
{
public:
	IRInstrSub(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrMul : public IRInstr
{
public:
	IRInstrMul(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrDiv : public IRInstr
{
public:
	IRInstrDiv(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
	void gen_PseudoCode() override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrNeg : public IRInstr
{
public:
	IRInstrNeg(BasicBlock *bb_, string tmp, string res);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res;
};

class IRInstrNot : public IRInstr
{
public:
	IRInstrNot(BasicBlock *bb_, string tmp, string res);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res;
};

class IRInstrCmp_eq : public IRInstr
{
public:
	IRInstrCmp_eq(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrCmp_ne : public IRInstr
{
public:
	IRInstrCmp_ne(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrCmp_gt : public IRInstr
{
public:
	IRInstrCmp_gt(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrCmp_ge : public IRInstr
{
public:
	IRInstrCmp_ge(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrCmp_lt : public IRInstr
{
public:
	IRInstrCmp_lt(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrCmp_le : public IRInstr
{
public:
	IRInstrCmp_le(BasicBlock *bb_, string tmp, string res_gauche, string res_droite);
	void gen_asm(ostream &o) override;
private:
	string tmp;
	string res_gauche;
	string res_droite;
};

class IRInstrUncoJump : public IRInstr
{
public:
	IRInstrUncoJump(BasicBlock *bb_, string label);
	void gen_asm(ostream &o) override;
private:
	string label;
};

class IRInstrCondJump : public IRInstr
{
public:
	IRInstrCondJump(BasicBlock *bb_, string label);
	void gen_asm(ostream &o) override;
private:
	string label;
};

class IRInstrNEJump : public IRInstr
{
public:
	IRInstrNEJump(BasicBlock *bb_, string label);
	void gen_asm(ostream &o) override;
private:
	string label;
};


/**  The class for a basic block */

/* A few important comments.
	 IRInstr has no jump instructions.
	 cmp_* instructions behaves as an arithmetic two-operand instruction (add or mult),
	  returning a boolean value (as an int)

	 Assembly jumps are generated as follows:
	 BasicBlock::gen_asm() first calls IRInstr::gen_asm() on all its instructions, and then
			if  exit_true  is a  nullptr,
			the epilogue is generated
		else if exit_false is a nullptr,
		  an unconditional jmp to the exit_true branch is generated
				else (we have two successors, hence a branch)
		  an instruction comparing the value of test_var_name to true is generated,
					followed by a conditional branch to the exit_false branch,
					followed by an unconditional branch to the exit_true branch
	 The attribute test_var_name itself is defined when converting
  the if, while, etc of the AST  to IR.

Possible optimization:
	 a cmp_* comparison instructions, if it is the last instruction of its block,
	   generates an actual assembly comparison
	   followed by a conditional jump to the exit_false branch
*/

class BasicBlock
{
public:
	BasicBlock(CFG *cfg, string label);
	void gen_asm(ostream &o); /**< x86 assembly code generation for this basic block (very simple) */
	void set_is_func(bool is_func);
	void add_IRInstr(IRInstr *instr);
	void gen_PseudoCode();
	// No encapsulation whatsoever here. Feel free to do better.
	//BasicBlock *exit_true;	  /**< pointer to the next basic block, true branch. If nullptr, return from procedure */
	//BasicBlock *exit_false;	  /**< pointer to the next basic block, false branch. If null_ptr, the basic block ends with an unconditional jump */
	string label;			  /**< label of the BB, also will be the label in the generated code */
	CFG *cfg;				  /** < the CFG where this block belongs */
	vector<IRInstr *> instrs; /** < the instructions themselves. */
	string test_var_name;	  /** < when generating IR code for an if(expr) or while(expr) etc,
														  store here the name of the variable that holds the value of expr */
protected:
	bool is_func = false;
};

/** The class for the control flow graph, also includes the symbol table */

/* A few important comments:
	 The entry block is the one with the same label as the AST function name.
	   (it could be the first of bbs, or it could be defined by an attribute value)
	 The exit block is the one with both exit pointers equal to nullptr.
	 (again it could be identified in a more explicit way)

 */
class CFG
{
public:
	// CFG(DefFonction* ast);

	// DefFonction* ast; /**< The AST this CFG comes from */
	CFG();
	void add_bb(BasicBlock *bb);
	void gen_PseudoCode();
	// x86 code generation: could be encapsulated in a processor class in a retargetable compiler
	void gen_asm(ostream &o);
	// string IR_reg_to_asm(string reg); /**< helper method: inputs a IR reg or input variable, returns e.g. "-24(%rbp)" for the proper value of 24 */

	// symbol table methods
	void add_SymbolIndex(string name, int t);
	// string create_new_tempvar(int t);
	int get_var_index(string name);
	int get_stack_pointer();
	// int get_var_type(string name);

	BasicBlock *current_bb;
	
protected:
	map<string, int> SymbolIndex;
	// map <string, Type> SymbolType; /**< part of the symbol table  */
	 /**< part of the symbol table  */
	// int nextFreeSymbolIndex; /**< to allocate new symbols in the symbol table */
	// int nextBBnumber; /**< just for naming */

	vector<BasicBlock *> bbs; /**< all the basic blocks of this CFG*/
};

#endif
