Compilateur C vers Assembleur x86:
Programmé par l'hexanôme H4243 4IF INSA LYON:
    TABAKH Khalil, QI Jiaqi, PHUNG Minh, NGO Ngoc Minh, ALPOU Yannick, BAILLEUX Henri, MOUSSET Maxime
             
                -- Documentation Utilisateur:


        -- Aide pour compiler un programme:

Dans le dossier /compiler
    Créer le programme "mon_programme.c"

    $make
    $./ifcc mon_programme.c > mon_programme.s

    mon_programme.s contient le code assembleur du programme


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

Boucles For

Fonctions

Adressage

Types différents de int

Utilisation de Char

Tableaux

Expression Unaire

Return dans le programme

...
 

                -- Documentation Développeur:

Dans le dossier /compiler
    Voir l'arbre AST d'un programme:
        $make gui FILE=programme_test.c
        
Dans le dossier /tests
    Créer un test dans /testfiles "mon_test.c"
    Lancer le test:
        $python3 ifcc-test.py ./testfiles/mon_test.c
    Lancer tous les tests:
        $python3 ifcc-test.py ./testfiles/*.c
    

Indication de développement:
    
    grammaire : dans ifcc.g4
    
    Makefile : ($make) génère le dossier compiler/generated
    
    Visiteur : Le visiteur est un programme visitant l'arbre AST 
    du programme compilé correspondant à la grammaire
               Le visiteur de base ifccBaseVisitor est généré par le make. Il contient une fonction pour chaque mot non-terminal de la grammaire.
               Le Visiteur de base parcours l'arbre recursivement sans rien faire.
               On peut créer un visiteur héritant de ifccBaseVisitor pour changer les fonctions lors de la visite d'un mot de l'arbre.
               Il faut créer le nouveau visiteur dans main.cpp pour qu'il parcours l'arbre.

               Les visiteurs existants sont :
               DeclarationCheckVisitor qui parcours l'arbre en vérifiant que les variables dans les expressions ont toutes été déclarées.
               CFGVisitor qui crée l'IR et qui pour chaque mot visité de l'arbre ajoute les bons blocs et instructions au CFG.

    l'IR: IR.cpp contient la classe CFG qui contient les Block qui contiennent les instructions.
          Après la visite de l'arbre et l'ajout des blocs au CFG dans CFGVisitor, on appele gen_asm.
          gen_asm parcours les différents blocs et instructions et écrit l'assembleur correspondant aux instructions.
          on peut aussi génerer du pseudo code avec gen_pseudo code...

    Etapes pour ajouter une nouvelle fonctionnalité:
          - ajouter les types instructions et mots nécéssaires dans la grammaire.
          - regénèrer les visiteurs de base avec make.
          - Ecrire dans les méthodes de CFGVisitor les ajouts au bloc courrant du CFG des suites d'instructions correspondant à la fonctionnalité.
          - ajouter si besoin les nouveaux types d'instruction dans IRinstr et créer pour chacun la classe IrInstrMonInstr ainsi que ses méthodes de génération de code dans IR.h et IR.cpp.
          - Créer un test.c utilisant la fonctionnalité. 
            La visite de l'arbre du programme de test doit identifier la fonctionnalité,
            La suite d'instructions correspondante doit être ajoutée au CFG
            et son code bien généré dans le test.s

          

          



    

