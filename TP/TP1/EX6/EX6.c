#include <stdio.h>

#define PI 3.14159 // Définition de la constante PI

int main() {
    float R, P, S;

    // Demander à l'utilisateur de saisir le rayon
    printf("Entrez le rayon du cercle : ");
    scanf("%f", &R);

    // Calcul du périmètre et de la surface
    P = 2 * PI * R;
    S = PI * R * R;

    // Affichage des résultats
    printf("Le périmètre du cercle est : %.2f\n", P);
    printf("La surface du cercle est : %.2f\n", S);

    return 0;
}