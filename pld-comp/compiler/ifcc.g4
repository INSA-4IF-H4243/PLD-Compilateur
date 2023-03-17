grammar ifcc;

axiom : prog ;

prog : 'int' 'main' '(' ')' '{' code? RETURN id ';' '}' ;

code : statement
     | statement code;

statement : declaration 
          | affectation ;

declaration : type VAR '=' id ';'
            | type vars ';' ;
          
affectation : VAR '=' id ';' ;

vars : VAR
     | VAR ',' vars? ;

id : CONST|VAR;
type : 'string'|'int';
RETURN : 'return' ;
CONST : [0-9]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
VAR : [a-zA-Z]+;
