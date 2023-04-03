Compilateur C vers Assembleur:

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

Le code avec les éléments qui permettent de naviguer dedans :

Nous avons pour l'instant 2 visiteurs, un permettant de vérifier 
la déclaration des variables utilisées et un générant le code.
Les éléments sont à la même place que dans le squelette du projet.

La description succincte de votre gestion de projet passée et à venir :

Nous n'avons pas de chef, nous travaillons en binôme et nous faisons des réunions
pour savoir ce qu'on souhaite programmer et se partager le travail entre les binômes.
Chaque binôme a sa branche git et une personne est chargée de réunir les branches et de vérifier.
On remplit un document avec les Fonctionnalités voulues et vérifiées.

Pour la suite nous allons garder la même gestion pour mettre en place le passage à l'IR. Nous
avons mis 4 personnes sur l'architecture de l'IR et le reste sur
la mise en place des boucles... 
