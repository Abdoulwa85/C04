#include <stdio.h>
// Ce programme permet de supprimer les doublons d'un tableau et afficher le résultat
int main() {
    int n, i, j, k;

    // Lire le nombre d'éléments
    scanf("%d", &n);
    int tab[n], unique[n];

    // Lire les éléments
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    k = 0;

    // Supprimer les doublons
    for (i = 0; i < n; i++) {
        int existe = 0;
        for (j = 0; j < k; j++) {
            if (tab[i] == unique[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            unique[k++] = tab[i];
        }
    }

    // Afficher le tableau sans doublons
    printf("Après suppression des doublons : ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
