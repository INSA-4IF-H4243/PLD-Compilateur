grammar ifcc;

axiom       : prog ;

prog        : TYPE 'main' '(' ')' '{' code? RETURN expr ';' '}' ;

code        : instruction ';'       #uneInst
            | instruction ';' code  #mulInst
            ;


instruction : TYPE vars ('=' expr)? #declaration
            | vars '=' expr         #affectation
            ;

expr        : expr OPM  expr        #muldiv
            | expr '+'  expr        #add
            | expr '-'  expr        #sub
            | CONST                 #const
            | VAR                   #var
            | '(' expr ')'          #par
            | expr CMPOP expr       #cmp
            | expr '|' expr         #or
            | expr '&' expr         #and
            | expr '^' expr         #xor
            | '-' expr              #neg
            | '!' expr              #not
            ;

vars        : VAR(',' vars)?;
TYPE        : INT|CHAR;
INT         :'int';
CHAR        :'char';

RETURN      : 'return' ;
CONST       : [0-9]+ ;
OPM : ('*'|'/');
CMPOP : ('=='|'!='|'>'|'<');
COMMENT     : '/*' .*? '*/' -> skip ;
DIRECTIVE   : '#' .*? '\n' -> skip ;
WS          : [ \t\r\n] -> channel(HIDDEN);

VAR         : [a-zA-Z]+;