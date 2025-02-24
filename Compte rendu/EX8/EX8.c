#include <stdio.h>

int main() {
    char emplacement;
    int surface;
    int prix_unitaire = 0;
    int prix_total;

    printf("Entrez l'emplacement du lot (A, B ou C) : ");
    scanf(" %c", &emplacement);
    printf("Entrez la surface du lot en mètres carrés : ");
    scanf("%d", &surface);

    if ((emplacement != 'A' && emplacement != 'B' && emplacement != 'C') || surface <= 0) {
        printf(" Emplacement ou surface invalide.\n");
        return 1;
    }

    if (emplacement == 'A') {
        if (surface == 500) {
            prix_unitaire = 100;
        } else if (surface == 1000) {
            prix_unitaire = 90;
        } else {
            printf(" Surface non disponible pour l'emplacement A.\n");
            return 1;
        }
    } else if (emplacement == 'B') {
        if (surface == 500) {
            prix_unitaire = 120;
        } else if (surface == 100) {
            prix_unitaire = 100;
        } else {
            printf("Surface non disponible pour l'emplacement B.\n");
            return 1;
        }
    } else if (emplacement == 'C') {
        if (surface == 500) {
            prix_unitaire = 150;
        } else if (surface <= 300) {
            prix_unitaire = 200;
        } else {
            printf("Surface non disponible pour l'emplacement C.\n");
            return 1;
        }
    }

    prix_total = surface * prix_unitaire;

    printf("Le prix total du lot est : %d dinars\n", prix_total);

    return 0;
}
