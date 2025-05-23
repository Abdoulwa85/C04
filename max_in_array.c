#include <stdio.h>
// Ce programme permet de lire les éléments d'un tableau et afficher le plus grand
int main() {
    int n, i, max;

    // Lire le nombre d'éléments
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments dans le tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    max = tab[0]; // Initialiser max avec le premier élément

    // Chercher le maximum
    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    // Afficher le maximum
    printf("Le maximum est : %d\n", max);

    return 0;
}
