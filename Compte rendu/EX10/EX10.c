#include <stdio.h>
#include <math.h>

int main() {
    int XA, YA, XB, YB;
    double DIST;

    // Saisie des coordonnées des points
    printf("Entrez les coordonnées du point A (XA YA) : ");
    scanf("%d %d", &XA, &YA);

    printf("Entrez les coordonnées du point B (XB YB) : ");
    scanf("%d %d", &XB, &YB);

    // Calcul de la distance
    DIST = sqrt(pow(XB - XA, 2) + pow(YB - YA, 2));

    // Affichage du résultat
    printf("La distance entre les points A et B est : %.2f\n", DIST);

    return 0;
}