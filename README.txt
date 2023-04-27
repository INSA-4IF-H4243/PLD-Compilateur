Compilateur C vers Assembleur:
Programmé par l'hexanôme H4243 4IF INSA LYON:
    TABAKH Khalil, QI Jiaqi, PHUNG Minh, NGO Ngoc Minh, ALPOU Yannick, BAILLEUX Henri, MOUSSET Maxime

                -- Fonctionnalités De notre Compilateur : 

Programme basique C:
int main() {
   return 42;
}
test1_1

Déclaration de variables:
    int a=8;
    int b=5;
    int c=a;
    return c;
test1_2

Affectation d'une variable:
    int a=8;
    int b=5;
    b=a;
    return b;
test1_3

Déclaration et Affectation de plusieurs variables en une instruction: /!\ Fonctionnement différent de gcc : toutes les variables sont initialisées à la même valeur
    int a,b,v;
    a,b,v=12;
    return a,b,v;
test1_4

Détection de non déclaration:
    int c=a;
    return c;
test1_5

Détection des multiples déclarations:
        int a,b;
        int a;
        return 0;
test1_6

Expressions Arithmétiques (=,+,-,*,/,()):
        int b,c;
        int a=17;
        b=42+a;
        c = a*b - (b*b +12)*7;
        return c+46*(6-12);
test1_7

Comparateurs:
    int a = 7;
    int b = 9;
    int c = 11;
    c = ((a+b) > (a*3));
test1_8

If..Else:
   int a = 7;
   if(a == 9) {
      a = 1;
   }else{
      a = 0;
   }
test1_9

While:
    int a = 3;
    while (a < 7) {
        a = a + 1;
    }
test1_10

Fonctions: /!\ On n'obtient un résultat différent à l'éxecution
    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int a = 2;
        int b = 3;
        a = add(b, 3);
        return a;
    }
test1_11

 
 		   -- Non implémenté: :
Mettre un chiffre/un symbole dans un nom de variable: 
    int x42 = 42;
    return x42;


Initialiser avec une expression: 
    int a = 3 - 4;
    return a;


Enchaîner plusieurs soustractions:
    return (2-2-2);

Boucles: For

Adressage

Types différents de int

Utilisation de Char

Tableaux

...

                -- Documentation Utilisateur:
 
Pour compiler un programme:
    Dans le dossier /compiler
        $make
        $./ifcc mon_programme.c > mon_programme.s

                -- Documentation Développeur:

Dans le dossier /compiler
    Voir l'arbre AST d'un programme:
        $make gui FILE=mon_programme.c
        
Dans le dossier /tests
    Lancer tous les tests:
        $python3 ifcc-test.py ./testfiles/*.c
    Lancer un test unique:
        $python3 ifcc-test.py ./testfiles/mon_programme.c		

Indication de développement:
    Grammaire : dans ifcc.g4
    Makefile : ($make) génère le dossier compiler/generated
    Visiteur : Le visiteur est un programme visitant l'arbre AST du programme compilé correspondant à la grammaire/
               Le visiteur de base ifccBaseVisitor est généré par le make. 
		   Il contient le Visiteur de base parcours l'arbre recursivement sans rien faire.
               On peut créer un visiteur
