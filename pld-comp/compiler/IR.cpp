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

IRInstrLdconst::IRInstrLdconst(BasicBlock *bb_, string var, int cst) : IRInstr(bb_, Operation::ldconst, {var, to_string(cst)})
{
    this->var = var;
    this->cst = cst;
}

void IRInstrLdconst::gen_asm(ostream &o)
{
    o << "\n# declaration de " << var << "(%rbp) avec la valeur " << cst << "\n"
    " movl	$" << cst << ", " << var << "(%rbp)\n\n";
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
    for (BasicBlock *i : bbs)
    {
        i->gen_asm(o);
    }
}

void CFG::add_SymbolIndex(string name, int t)
{
    SymbolIndex[name] = t;
}
