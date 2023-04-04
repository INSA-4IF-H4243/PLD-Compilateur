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
/*Instructions par type*/
IRInstrLdconst::IRInstrLdconst(BasicBlock *bb_, string var, int cst) : IRInstr(bb_, Operation::ldconst, {var, to_string(cst)})
{
    this->var = var;
    this->cst = cst;
}

void IRInstrLdconst::gen_asm(ostream &o)
{
    cout<<"test"<<endl;
    o << "\n# declaration de " << var << "(%rbp) avec la valeur " << cst << "\n"
    " movl	$" << cst << ", " << var << "(%rbp)\n\n";
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
    o << "\n# declaration de " << var << "(%rbp) dans " << res << "(%rbp)\n"
    " movl	" << var << "(%rbp),%eax\n"
    " movl	%eax, " << res << "(%rbp)\n\n";
}

void IRInstrCopy::gen_PseudoCode()
{
    cout << "copy " << var << " " << res << endl;
}

IRInstrAdd::IRInstrAdd(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::add, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrAdd::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) + " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " addl	" << res_droite << "(%rbp),%eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
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
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) - " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " subl	" << res_droite << "(%rbp),%eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
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
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) * " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " imull	" << res_droite << "(%rbp),%eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
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
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) / " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " cltd\n"
    " idivl	" << res_droite << "(%rbp)\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
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
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) == " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " cmpl	" << res_droite << "(%rbp),%eax\n"
    " sete	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
}

IRInstrCmp_lt::IRInstrCmp_lt(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_lt, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_lt::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) < " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " cmpl	" << res_droite << "(%rbp),%eax\n"
    " setl	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
}

IRInstrCmp_le::IRInstrCmp_le(BasicBlock *bb_, string tmp, string res_gauche, string res_droite) : IRInstr(bb_, Operation::cmp_le, {tmp, res_gauche, res_droite})
{
    this->tmp = tmp;
    this->res_gauche = res_gauche;
    this->res_droite = res_droite;
}

void IRInstrCmp_le::gen_asm(ostream &o)
{
    o << "\n# declaration de " << tmp << "(%rbp) avec la valeur " << res_gauche << "(%rbp) <= " << res_droite << "(%rbp)\n"
    " movl	" << res_gauche << "(%rbp),%eax\n"
    " cmpl	" << res_droite << "(%rbp),%eax\n"
    " setle	%al\n"
    " movzbl	%al, %eax\n"
    " movl	%eax, " << tmp << "(%rbp)\n\n";
}


BasicBlock::BasicBlock(CFG *cfg_, string label_)
{
    cfg = cfg_;
    label = label_;
}
void BasicBlock::add_IRInstr(IRInstr *instr)
{
    instrs.push_back(instr);
}
void BasicBlock::gen_asm(ostream &o)
{
    for (IRInstr *i : instrs)
    {
        i->gen_asm(o);
    }
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
    current_bb = new BasicBlock(this, "1stBlock");
    
}
void CFG::add_bb(BasicBlock *bb)
{
    bbs.push_back(bb);
    current_bb = bb;
}
void CFG::gen_asm(ostream &o)
{
    current_bb->gen_asm(o);
    for (BasicBlock *i : bbs)
    {
        i->gen_asm(o);
    }
}
void CFG::gen_PseudoCode()
{
    current_bb->gen_PseudoCode();
    for (BasicBlock *i : bbs)
    {
        i->gen_PseudoCode();
    }
}

void CFG::add_SymbolIndex(string name, int t)
{
    SymbolIndex[name] = t;
}
