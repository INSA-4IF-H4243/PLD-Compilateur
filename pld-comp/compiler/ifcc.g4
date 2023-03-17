grammar ifcc;

axiom : prog ;

prog : TYPE 'main' '(' ')' '{' code? RETURN expr ';' '}' ;

code : instruction ';'        # uneInst
     | instruction ';' code   # mulInst
     ;


instruction : TYPE VAR ('=' expr)? #declaration
            | VAR ('=' expr)?      #affectation
            ;

expr: (CONST|VAR);

TYPE : INT|CHAR;
INT:'int';
CHAR:'char';

RETURN : 'return' ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);

VAR : [a-zA-Z]+;
