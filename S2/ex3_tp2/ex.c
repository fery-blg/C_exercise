#include <stdio.h>
    //enreg de date 
struct Date {
    int jour;
    int mois;
    int annee;
};
    //enreg de produit
struct produit {
     int code_a_barre;
     char nom[30];
     int quantite;
     float prix;
     struct Date date_fin_validite;
    };
    //enreg de stock
struct Stock {
    int nbr_tot_produits;
    struct produit produits[100];
};

int main (){
    struct Date D;
    struct produit P ;
    struct Stock S  ;
};