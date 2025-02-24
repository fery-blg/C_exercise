#include <stdio.h>

int main() {
      float montant_achat, reduction = 0.0, montant_final; 

    int membre_fidele; 

    char code_promo[]= "FSM2024";

    float reduction_montant = 0.0, reduction_fidelite = 0.0, reduction_promo = 0.0; 
    // saisie du montant de l'achat
    printf("Entrez le montant de l'achat : ");
    scanf("%f", &montant_achat);
//  applicatio de la reduction
      if (montant_achat >= 1000) { 

        reduction_montant = montant_achat * 0.30; 

    } else if (montant_achat >= 500) { 

        reduction_montant = montant_achat * 0.20; 

    } else if (montant_achat >= 100) { 

        reduction_montant = montant_achat * 0.10; 

    } 

    //vérification si c'est un membre fidèle

        printf("Êtes-vous membre fidèle ? (1 pour oui, 0 pour non) : "); 

    scanf("%d", &membre_fidele); 

    if (membre_fidele) { 

        reduction_fidelite = montant_achat * 0.05; 

    } 
    // vérification du code promo 
     printf("Entrez le code promo (si disponible) : "); 

    scanf("%s", &code_promo);
    if (code_promo == "FSM2024"&& montant_achat > 50) { 

        reduction_promo = 10.0; 

    }
     // Calcul de la réduction totale 

    reduction = reduction_montant + reduction_fidelite + reduction_promo; 

  

    // Limiter la réduction totale à 50 % du montant d'achat initial 

    if (reduction > montant_achat * 0.50) { 

        reduction = montant_achat * 0.50; 

    } 

  

    // Calcul du montant final après réduction 

    montant_final = montant_achat - reduction; 

  

    // Affichage du montant final après réduction 

    printf("Le montant final après réduction est : %.2f ", montant_final); 

  

    return 0; 



  


    
}