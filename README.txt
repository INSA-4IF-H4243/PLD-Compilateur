Compilateur C vers Assembleur:
Programmé par l'hexanôme H4243 4IF INSA LYON:
    TABAKH Khalil, QI Jiaqi, PHUNG Minh, NGO Ngoc Minh, ALPOU Yannick, BAILLEUX Henri, MOUSSET Maxime

                -- Fonctionnalités De notre Compilateur : 

Programme basique C:
int main() {
   return 42;
}
test 1_1

Déclaration de variables:
    int a=8;
    int b=5;
    int c=a;
    return c;
test 1_5

Affectation d'une variable:
    int a=8;
    int b=5;
    b=a;
test 1_7

Déclaration de char:
    char a = 4;
    return a;
test 1_9

Déclaration et Affectation de plusieurs variables en une instruction:
    int a,b,v;
    a,b,v=12;
    return a,b,v;
test 1_93

Détection de non déclaration:
int main() {
    int c=a;
    return c;
}
test 1_6

Expressions Arithmétiques (=,+,-,*,/,()):
        int b,c;
        int a=17;
        b=42+a;
        c = a*b - (b*b +12)*7;
        return c+46*(6-12);
test 3_7

Détection des multiples déclarations:
        int a,b;
        int a;
        return 0;
test 3_9

Comparateurs:
    int a = 7;
    int b = 9;
    int c = 11;
    c = ((a+b) > (a*3));
test 5_5

If..Else:
   int a = 7;
   if(a == 9) {
      a = 1;
   }else{
      a = 0;
   }
test4_1

While:
    int a = 3;
    while (a < 7) {
        a = a + 1;
    }
test6_1

                -- Ce qui ne Fonctionne Pas:

Boucles: For

Fonctions:

Adressage:

Types différents de int:

Utilisation de Char:

Tableaux:

...

                -- Documentation Utilisateur:
 
Pour compiler un programme:
    Dans le dossier /compiler
        $make
        $./ifcc mon_programme.c > mon_programme.s

                -- Documentation Développeur:

Dans le dossier /compiler
    Voir l'arbre AST d'un programme:
        $make gui FILE=programme_test.c
        
Dans le dossier /tests
    Lancer tous les tests:
        $python3 ifcc-test.py ./testfiles/*.c

Indication de développement:
    grammaire : dans ifcc.g4
    Makefile : ($make) génère le dossier compiler/generated
    Visiteur : Le visiteur est un programme visitant l'arbre AST 
    du programme compilé correspondant à la grammaire/
               Le visiteur de base ifccBaseVisitor est généré par le make. Il contient
               Le Visiteur de base parcours l'arbre recursivement sans rien faire.
               On peut créer un visiteur

