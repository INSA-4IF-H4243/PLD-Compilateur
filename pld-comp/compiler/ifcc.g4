grammar ifcc;

axiom       : prog ;

prog        : TYPE 'main' '(' ')' '{' code? RETURN expr ';' '}' ;

code        : instruction ';'       #uneInst
            | instruction ';' code  #mulInst
            ;


instruction : TYPE vars ('=' expr)? #declaration
            | vars '=' expr         #affectation
            ;

expr        : expr OP  expr         #muldiv
            | expr '+' expr         #add
            | expr '-' expr         #sub
            | CONST                 #const
            | VAR                   #var
            | '(' expr ')'          #par
            ;

vars        : VAR(',' vars)?;
TYPE        : INT|CHAR;
INT         :'int';
CHAR        :'char';

RETURN      : 'return' ;
CONST       : [0-9]+ ;
OP : ('*'|'/');
COMMENT     : '/*' .*? '*/' -> skip ;
DIRECTIVE   : '#' .*? '\n' -> skip ;
WS          : [ \t\r\n] -> channel(HIDDEN);

VAR         : [a-zA-Z]+;
