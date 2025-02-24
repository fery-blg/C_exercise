#include <stdio.h>

int main() {
    int A, B;

    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);

    if (A == 0 || B == 0) {
        printf("Le produit de A et B est nul.\n");
    } else if ((A > 0 && B > 0) || (A < 0 && B < 0)) {
        printf("Le produit de A et B est positif.\n");
    } else {
        printf("Le produit de A et B est négatif.\n");
    }

    return 0;
}
