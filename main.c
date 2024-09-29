#include <stdlib.h>
#include <stdio.h>

int main() {

    int nombre1;
    int nombre2;
    char opérateur;




    printf("Bonjoue choisissez un opérateur parmi la liste suivante +, -, *, /, %%: ");
    scanf(" %c", &opérateur);


    printf("Veuillez entrer un premier nombre: ");
    scanf("%d", &nombre1);


    printf("Entrez un second nombre: ");
    scanf("%d", &nombre2);


    if (opérateur == '+') {
        int resultat = nombre1 + nombre2;
        printf("%d %c %d = %d\n", nombre1, opérateur, nombre2, resultat);
    } else if (opérateur == '-') {
        int resultat = nombre1 - nombre2;
        printf("%d %c %d = %d\n", nombre1, opérateur, nombre2, resultat);
    } else if (opérateur == '*') {
        int resultat = nombre1 * nombre2;
        printf("%d %c %d = %d\n", nombre1, opérateur, nombre2, resultat);
    } else if (opérateur == '/') {
        if (nombre2 == 0) {
            printf("Il n'est pas possible de diviser par 0.\n");
        } else {
            int resultat = nombre1 / nombre2;
            printf("%d %c %d = %d\n", nombre1, opérateur, nombre2, resultat);
        }
    } else if (opérateur == '%') {
        if (nombre2 == 0) {
            printf("Il n'est pas possible de diviser par 0.\n");
        } else {
            int resultat = nombre1 % nombre2;
            printf("%d %c %d = %d\n", nombre1, opérateur, nombre2, resultat);
        }
    } else {
        printf("L'opérateur n'est pas reconnu.\n");
    }


    exit(0);
}
