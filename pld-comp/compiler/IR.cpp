#include "IR.h"
#include <vector>
#include <string>
#include <iostream>

IRInstr::IRInstr(BasicBlock *bb_, Operation op_, vector<string> params_)
{
    bb = bb_;
    op = op_;
    params = params_;
}

void IRInstr::gen_asm(ostream &o)
{
}

void IRInstr::gen_PseudoCode()
{
}

IRInstrPrologue::IRInstrPrologue(BasicBlock *bb_, int stack_pointer) : IRInstr(bb_, Operation::prologue, {to_string(stack_pointer)})
{
    this->stack_pointer = stack_pointer;
}

void IRInstrPrologue::gen_asm(ostream &o)
{
    o << "\n# prologue\n"
    " pushq	%rbp\n"
    " movq	%rsp, %rbp\n";
    if (stack_pointer != 0)
    {
        o << " subq	  $" << stack_pointer << ", %rsp\n";
    }
}

IRInstrEpilogue::IRInstrEpilogue(BasicBlock *bb_) : IRInstr(bb_, Operation::epilogue, {})
{
}

void IRInstrEpilogue::gen_asm(ostream &o)
{
    o << "\n# epilogue\n"
    " movq	%rbp, %rsp\n"
    " popq  %rbp\n"
    " ret\n\n";
}

IRInstrArg::IRInstrArg(BasicBlock *bb_, string nom_var, int offset) : IRInstr(bb_, Operation::arg_call, {nom_var})
{
    this->nom_var = nom_var;
    this->offset = offset;
}

void IRInstrArg::gen_asm(ostream &o)
{
    o << "\n# argument " << nom_var << "\n";
    o << " movl	" << nom_var << ", " << offset << "(%rbp)\n\n";
}

IRInstrFuncCall::IRInstrFuncCall(BasicBlock *bb_, string label, string tmp, vector<string> params) : IRInstr(bb_, Operation::func_call, params)
{
    this->label = label;
    this->tmp = tmp;
    this->params = params;
}

void IRInstrFuncCall::gen_asm(ostream &o)
{   
    std::vector<std::string> vectorName = {"%edi", "%esi", "%edx", "%ecx", "%r8d", "%r9d", "%r10d", 
				"%r11d", "%r12d", "%r13d", "%r14d", "%r15d"};
    o << "\n# appel de la fonction " << label << "\n";
    for (int i = 0; i < this->params.size(); i++)
    {
        int a;
        try {
            a = stoi(params[i]);
            o << " movl	$" << a << ", " << vectorName[i] << "\n";
        } catch (const std::invalid_argument& ia) {
            o << " movl	" << bb->cfg->get_var_index(params[i]) << "(%rbp), " << vectorName[i] << "\n";
        }
    }
    o << " call " << label << "\n";
    o << " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

void IRInstrFuncCall::gen_PseudoCode()
{
    cout << "# appel de la fonction " << label << endl;
    cout << "call " << label << " ";
    for (int i = 0; i < this->params.size(); i++)
    {
        cout << params[i] << " ";
    }
}

/*Instructions par type*/
IRInstrRetour::IRInstrRetour(BasicBlock *bb_, string var) : IRInstr(bb_, Operation::retour, {var})
{
    this->var = var;
}

void IRInstrRetour::gen_asm(ostream &o)
{
    o << "\n# retour de " << var <<"\n";
    o << " movl	"<< bb->cfg->get_var_index(var) <<"(%rbp), %eax\n\n";
}

void IRInstrRetour::gen_PseudoCode()
{
    cout << "retour de " << var << endl;
}
IRInstrLdconst::IRInstrLdconst(BasicBlock *bb_, string var, int cst) : IRInstr(bb_, Operation::ldconst, {var, to_string(cst)})
{
    this->var = var;
    this->cst = cst;
}

void IRInstrLdconst::gen_asm(ostream &o)
{
    o << "\n# declaration de " << var << " avec la valeur " << cst << "\n"
    " movl	$" << cst << ", " << bb->cfg->get_var_index(var) << "(%rbp)\n\n";
}

void IRInstrLdconst::gen_PseudoCode()
{
    cout << "ldconst " << var << " " << cst << endl;
}

IRInstrCopy::IRInstrCopy(BasicBlock *bb_, string var, string res) : IRInstr(bb_, Operation::copy, {var, res})
{
    this->var = var;
    this->res = res;
}

void IRInstrCopy::gen_asm(ostream &o)
{
    o << "\n# declaration de " << var << " dans " << res << "\n"
    " movl	" << bb->cfg->get_var_index(res) << "(%rbp), %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(var) << "(%rbp)\n\n";
}

void IRInstrCopy::gen_PseudoCode()
{
    cout << "copy " << var << " " << res << endl;
}

IRInstrNeg::IRInstrNeg(BasicBlock *bb_, string tmp, string res) : IRInstr(bb_, Operation::neg, {tmp, res})
{
    this->tmp = tmp;
    this->res = res;
}

void IRInstrNeg::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur -" << res << "\n"
    " movl	" << bb->cfg->get_var_index(res) << "(%rbp), %eax\n"
    " negl	%eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrNot::IRInstrNot(BasicBlock *bb_, string tmp, string res) : IRInstr(bb_, Operation::not_boolean, {tmp, res})
{
    this->tmp = tmp;
    this->res = res;
}

void IRInstrNot::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur !" << res << "\n"
    " movl	" << bb->cfg->get_var_index(res) << "(%rbp), %eax\n"
    " notl	%eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrAdd::IRInstrAdd(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::add, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrAdd::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur " << res_gauche << " + " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp), %eax\n"
    " addl	" << bb->cfg->get_var_index(res_droite) << "(%rbp), %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

void IRInstrAdd::gen_PseudoCode()
{
    cout << "add " << tmp << " " << res_gauche << " " << res_droite << endl;
}

IRInstrSub::IRInstrSub(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::sub, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrSub::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur " << res_gauche << " - " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " subl	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

void IRInstrSub::gen_PseudoCode()
{
    cout << "sub " << tmp << " " << res_gauche << " " << res_droite << endl;
}

IRInstrMul::IRInstrMul(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::mul, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrMul::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur " << res_gauche << " * " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " imull	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

void IRInstrMul::gen_PseudoCode()
{
    cout << "mul " << tmp << " " << res_gauche << " " << res_droite << endl;
}

IRInstrDiv::IRInstrDiv(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::div, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrDiv::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << " avec la valeur " << res_gauche << " / " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cltd\n"
    " idivl	" << bb->cfg->get_var_index(res_droite) << "(%rbp)\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

void IRInstrDiv::gen_PseudoCode()
{
    cout << "div " << tmp << " " << res_gauche << " " << res_droite << endl;
}

IRInstrCmp_eq::IRInstrCmp_eq(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_eq, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_eq::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " == " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " sete	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrCmp_ne::IRInstrCmp_ne(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_ne, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_ne::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " != " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " setne	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrCmp_gt::IRInstrCmp_gt(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_gt, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_gt::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " > " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	%eax, " << bb->cfg->get_var_index(res_droite) << "(%rbp)\n"
    " setl	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrCmp_ge::IRInstrCmp_ge(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_ge, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_ge::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " >= " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	%eax, " << bb->cfg->get_var_index(res_droite) << "(%rbp)\n"
    " setle	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrCmp_lt::IRInstrCmp_lt(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_lt, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_lt::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " < " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " setl	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrCmp_le::IRInstrCmp_le(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_le, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_le::gen_asm(ostream &o)
{
    o << "\n# comparaison de " << tmp << " avec la valeur " << res_gauche << " <= " << res_droite << "\n"
    " movl	" << bb->cfg->get_var_index(res_gauche) << "(%rbp),%eax\n"
    " cmpl	" << bb->cfg->get_var_index(res_droite) << "(%rbp),%eax\n"
    " setle	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << bb->cfg->get_var_index(tmp) << "(%rbp)\n\n";
}

IRInstrUncoJump::IRInstrUncoJump(BasicBlock *bb_, string label) : IRInstr(bb_, Operation::unconditional_jump, {})
{
    this->label = label;
}

void IRInstrUncoJump::gen_asm(ostream &o)
{
    o << "\n# saut inconditionnel vers " << label << "\n"
    " jmp " << label << "\n\n";
}

IRInstrCondJump::IRInstrCondJump(BasicBlock *bb_, string label) : IRInstr(bb_, Operation::conditional_jump, {})
{
    this->label = label;
}

void IRInstrCondJump::gen_asm(ostream &o)
{
    o << "\n# saut conditionnel vers " << label << "\n"
    " jle " << label << "\n\n";
}

IRInstrNEJump::IRInstrNEJump(BasicBlock *bb_, string label) : IRInstr(bb_, Operation::not_equal_jump, {})
{
    this->label = label;
}

void IRInstrNEJump::gen_asm(ostream &o)
{
    o << "\n# saut si non égal vers " << label << "\n"
    " jne " << label << "\n\n";
}


BasicBlock::BasicBlock(CFG *cfg_, string label_)
{
    this->cfg = cfg_;
    this->label = label_;
}

void BasicBlock::add_IRInstr(IRInstr *instr)
{
    instrs.push_back(instr);
}

void BasicBlock::gen_asm(ostream &o)
{
    if (is_func) {
        o << ".globl  " << label << "\n";
    }
    o << label << ":\n";
    for (IRInstr *i : instrs)
    {
        i->gen_asm(o);
    }
}

void BasicBlock::set_is_func(bool is_func)
{
    this->is_func = is_func;
}

void BasicBlock::gen_PseudoCode()
{
    for (IRInstr *i : instrs)
    {
        i->gen_PseudoCode();
    }
}

CFG::CFG()
{
    this->current_bb = new BasicBlock(this, "initBlock");
}

void CFG::add_bb(BasicBlock *bb)
{
    bbs.push_back(bb);
    current_bb = bb;
}

int CFG::get_stack_pointer() {
    int min = 999999;
    for (auto& index : SymbolIndex) {
        if (index.second < min) {
            min = index.second;
        }
    }
    if (min == 999999) {
        return 0;
    }
    return -min;
}

void CFG::gen_asm(ostream &o)
{
    for (BasicBlock *i : bbs)
    {
        i->gen_asm(o);
    }
}

void CFG::gen_PseudoCode()
{
    for (BasicBlock *i : bbs)
    {
        i->gen_PseudoCode();
    }
}

void CFG::add_SymbolIndex(string name, int t)
{
    SymbolIndex[name] = t;
}

int CFG::get_var_index(string name)
{
    return SymbolIndex[name];
}
