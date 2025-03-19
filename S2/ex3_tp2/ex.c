#include <stdio.h>

// enreg de date 
struct Date {
    int jour;
    int mois;
    int annee;
};

// enreg de produit
struct produit {
    int code_a_barre;
    char nom[30];
    int quantite;
    float prix;
    struct Date date_fin_validite;
};

// enreg de stock
struct Stock {
    int nbr_tot_produits;
    struct produit produits[100];
};

void saisieProduit(struct produit *P) {
    printf("Donner le code a barre du produit :");
    scanf("%d", &P->code_a_barre);
    printf("Donner le nom du produit :");
    scanf("%s", P->nom);
    printf("Donner la quantite du produit :");
    scanf("%d", &P->quantite);
    printf("Donner le prix de produit :");
    scanf("%f", &P->prix);
    printf("Donner la date de fin de validite du produit : ");
    scanf("%d", &P->date_fin_validite.jour);
    scanf("%d", &P->date_fin_validite.mois);
    scanf("%d", &P->date_fin_validite.annee);
}
void afficheProduit(struct produit P){
    printf("Code a barre : %d\n",P.code_a_barre);
    printf("Nom : %s\n", P.nom);
    printf("Quantite : %d\n", P.quantite);
}
void saisie

int main() {
    struct Date D;
    struct produit P;
    struct Stock S;
    saisieProduit(&P);
    return 0;
}