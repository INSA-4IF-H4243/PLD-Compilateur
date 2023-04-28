Compilateur C vers Assembleur:

Création des tests:

- Créer un dossier dans "./pld-comp/tests/testfiles". Par ex: nom "TestAdd1"
- Créer un fichier .c pour faire le test (par ex: "test.c", ".c" est obligatoire)
- Créer un fichier "description" (création n'est pas obligatoire mais le nommage "description" est obligatoire,
pour que le ifcc-test.py puisse le lire)
- Va dans ce chemin "./pld-comp/tests"
- Lancer la commande "python3 ifcc-test.py ./testfiles/TestAdd1" pour compiler le test	

Fonctionnalités : 

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

Ce qui ne Fonctionne Pas:

Boucles:

Fonctions:

If..Else:

Comparateurs:

Adressage:

Types différents de int:

Utilisation de Char:

Tableaux:

...