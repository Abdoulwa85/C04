#include <stdio.h>
// Ce programme permet de trier un tableau d'entiers par ordre croissant
int main() {
    int n, i, j, temp;

    // Lire le nombre d'éléments
    scanf("%d", &n);
    int tab[n];

    // Lire les éléments
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Tri à bulles (Bubble sort)
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }

    // Afficher le tableau trié
    printf("Tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
