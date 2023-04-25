grammar ifcc;

axiom       : prog ;

prog        : TYPE 'main' '(' ')' '{' code? RETURN expr ';' '}' ;

code        : instruction ';'                                #uneInst
            | instruction ';' code                           #mulInst
            | '{' code? '}'                                  #block
            | IF '(' expr ')' code  ( ELSE code )? code?     #ifInst
            | WHILE '(' expr ')' code code?                  #whileInst
            ;

instruction : TYPE vars ('=' expr)?        #declaration
            | vars '=' expr                #affectation
            ;

expr        : expr OPM  expr         #muldiv
            | expr OPP  expr         #addsub
            | CONST                  #const
            | VAR                    #var
            | '(' expr ')'           #par
            | expr CMPOP expr        #cmp
            ;

vars        : VAR(',' vars)?;
TYPE        : INT|CHAR;
INT         :'int';
CHAR        :'char';

IF: 'if';
ELSE: 'else';
WHILE: 'while';
RETURN      : 'return' ;
CONST       : [0-9]+ ;
OPM : ('*'|'/');
OPP : ('+'|'-');
CMPOP : ('=='|'!='|'>'|'<'|'<='|'>=');
COMMENT     : '/*' .*? '*/' -> skip ;
DIRECTIVE   : '#' .*? '\n' -> skip ;
WS          : [ \t\r\n] -> channel(HIDDEN);

VAR         : [a-zA-Z]+;
