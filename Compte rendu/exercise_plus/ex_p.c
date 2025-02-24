#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    float notes[10];
    float moyenne ;
}Etudient;

typedef struct{
    char nom[50];
    char matiére [50];
}Professeur;

typedef struct {
    char nom[50];
    char professeur[50];
    char salle[50];
}Matiére;

typedef struct{
    char nom[50];
    int capacite;
}Salle;

int main (){
    Etudient etudient[50];
    Professeur professeur [20];
    Matiére matiére[10];
    Salle salle [15];

    int nbEtudient = 0 ;
    int nbProfesseur = 0 ;
    int nbMatiére = 0 ;
    int nbSalle = 0 ;
    int choix ;
    do {
        printf("\n Menu:\n");
        printf("1.Saisir les donneées\n");
        printf("2.Afficher les résultats\n");
        printf("3.Recherche (érudient , professeur , salle)\n");
        printf("4.Quitter\n");
        printf("Faites votre choix :");
        scanf("%d ",&choix );
    }
    switch (chiox){
        case 1 :{
            printf("Saisir le nbr de sales (3-15)");
            while (scanf("%d",&nbSalle)!=1 || nbSalle<3 || nbSalle > 15){
                printf("Nbr de salles invalide .reessayez:");
                
            }
        }
    }
}