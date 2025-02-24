#include <stdio.h>

int main() {
    char categorie;
    int heures_supplementaires;
    int salaire_base = 0, salaire_final;

    printf("Entrez la catégorie de l'employé (A, B ou C) : ");
    scanf(" %c", &categorie);

    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%d", &heures_supplementaires);

    if (categorie == 'A' || categorie == 'a') {
        salaire_base = 600;
        salaire_final = salaire_base + (heures_supplementaires * 5);
    } else if (categorie == 'B' || categorie == 'b') {
        salaire_base = 700;
        salaire_final = salaire_base + (heures_supplementaires * 10);
    } else if (categorie == 'C' || categorie == 'c') {
        salaire_base = 900;
        salaire_final = salaire_base + (heures_supplementaires * 15);
    } else {
        printf("Catégorie invalide. Veuillez entrer A, B ou C.\n");
        return 1; 
    }

    printf("Le salaire final de l'employé est : %d dinars\n", salaire_final);

    return 0;
}
