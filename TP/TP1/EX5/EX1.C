#include <stdio.h>

int main() {
    int A, B, C, AUX;

    // Saisie des valeurs
    printf("Entrez trois entiers (A, B, C) : ");
    scanf("%d %d %d", &A, &B, &C);

    // Affichage des valeurs initiales
    printf("Avant permutation : A = %d, B = %d, C = %d\n", A, B, C);

    // Permutation circulaire à droite
    AUX = A;
    A = C;  
    C = B;
    B = AUX;

    // Affichage des valeurs après permutation
    printf("Après permutation : A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}


