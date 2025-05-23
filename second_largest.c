#include <stdio.h>
// Ce programme permet de déterminer le deuxieme plus grand nombre d'un tableau
int main() {
    int n, i, max, second;

    // Lire le nombre d'éléments
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Initialisation des deux plus grands
    if (tab[0] > tab[1]) {
        max = tab[0];
        second = tab[1];
    } else {
        max = tab[1];
        second = tab[0];
    }

    // Rechercher le deuxième plus grand
    for (i = 2; i < n; i++) {
        if (tab[i] > max) {
            second = max;
            max = tab[i];
        } else if (tab[i] > second && tab[i] != max) {
            second = tab[i];
        }
    }

    // Afficher le deuxième plus grand
    printf("Le deuxième plus grand nombre est : %d\n", second);

    return 0;
}
