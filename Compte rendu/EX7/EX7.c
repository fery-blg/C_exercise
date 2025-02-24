#include <stdio.h>

int main() {
    int jour, mois;

    printf("Entrez le jour : ");
    scanf("%d", &jour);
    printf("Entrez le mois : ");
    scanf("%d", &mois);

    if ((mois < 1 || mois > 12) || (jour < 1 || jour > 31) || 
        (mois == 2 && jour > 28) || 
        ((mois == 4 || mois == 6 || mois == 9 || mois == 11) && jour > 30)) {
        printf(" Date invalide. Veuillez entrer un jour et un mois valides.\n");
    } else {
        if ((mois == 9 && jour >= 23) || (mois == 10) || (mois == 11) || (mois == 12 && jour <= 21)) {
            printf("Saison : Automne\n");
        } else if ((mois == 12 && jour >= 22) || (mois == 1) || (mois == 2) || (mois == 3 && jour <= 19)) {
            printf("Saison : Hiver\n");
        } else if ((mois == 3 && jour >= 20) || (mois == 4) || (mois == 5) || (mois == 6 && jour <= 20)) {
            printf("Saison : Printemps\n");
        } else if ((mois == 6 && jour >= 21) || (mois == 7) || (mois == 8) || (mois == 9 && jour <= 22)) {
            printf("Saison : Été\n");
        }
    }

    return 0;
}
