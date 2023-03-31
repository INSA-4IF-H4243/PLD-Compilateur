#include "IR.h"
#include <vector>
#include <string>
#include <iostream>

IRInstr::IRInstr(BasicBlock* bb_, Operation op_, vector<string> params_){
    bb=bb_;
    op=op_;
    params=params_;
}
void IRInstr::gen_asm(ostream &o){
    cout<<"assembleur"<<endl;
} 



BasicBlock::BasicBlock(CFG* cfg_, string label_){
    cfg=cfg_;
    label=label_;
}
void BasicBlock::add_IRInstr(IRInstr* instr){
    instrs.push_back(instr);
}
void BasicBlock::gen_asm(ostream &o){
    for(IRInstr* i:instrs){
        i->gen_asm(o);
    }
} 



CFG::CFG(){
    current_bb=new BasicBlock(this,"1stBlock");
}
void CFG::add_bb(BasicBlock* bb){
    bbs.push_back(bb);
    current_bb=bb;
}
void CFG::gen_asm(ostream &o){
    for(BasicBlock* i:bbs){
        i->gen_asm(o);
    }
} 

void CFG::add_SymbolIndex(string name, int t){
    SymbolIndex[name]=t;
}





