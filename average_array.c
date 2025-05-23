#include <stdio.h>
// Ce programme permet de lire un tableau d'entiers et calculer leur moyenne
int main() {
    int n, i, somme = 0;
    float moyenne;

    // Lire le nombre d'éléments
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments et calculer la somme
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        somme += tab[i];
    }

    moyenne = (float)somme / n;

    // Afficher la moyenne
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
