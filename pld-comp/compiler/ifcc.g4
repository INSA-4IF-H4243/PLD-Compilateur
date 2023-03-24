grammar ifcc;

axiom : prog ;

prog : TYPE 'main' '(' ')' '{' code? RETURN expr ';' '}' ;

code : instruction ';'        # uneInst
     | instruction ';' code   # mulInst
     ;


instruction : TYPE vars ('=' expr)? #declaration
            | vars '=' expr         #affectation
            ;

expr: CONST              #const
    | VAR                #var
    | expr '+' expr      #add
    | '(' expr ')'       #par
    ;
vars: VAR(',' vars)?;
TYPE : INT|CHAR;
INT:'int';
CHAR:'char';

RETURN : 'return' ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);

VAR : [a-zA-Z]+;
