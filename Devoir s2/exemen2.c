#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int NB_MOTS= 5 ;
#define MAX_LONGUEUR_MOT 50
// saise 
char ** Saisie(char **tab) {
    printf("Saisir %d mots (maximum %d caractères chacun):\n", NB_MOTS, MAX_LONGUEUR_MOT);
    char **p ;
     for (p = tab; p < tab+NB_MOTS; p++){
        *p= (char *)malloc((MAX_LONGUEUR_MOT + 1) * sizeof(char)); 
        scanf("%s", *p); 
    }
    return tab ;
}
// inserer mot ♥♥♣
char** insererMot(char **tab) {
    NB_MOTS=NB_MOTS+1 ; 
    tab = (char **) realloc (tab, (NB_MOTS)*sizeof(char*)) ; 
     
   *(tab+(NB_MOTS-1)) = (char *)malloc((MAX_LONGUEUR_MOT + 1) * sizeof(char));
   printf("\n Donner une chaine : ") ;
   scanf("%s", *(tab+(NB_MOTS-1)));
   return tab ;
}
// inverser mots
void inverserMot(char *mot) {
    char *p1 = mot;                       
    char *p2 = mot + strlen(mot) - 1;   
    char temp ; 
    while (p1 < p2) {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}
// inverser 
void inverserTab(char **tab) {
    char **p1 = tab;                      
    char **p2 = tab + NB_MOTS - 1;        
    char **temp ; 
    while (p1 < p2) {
        *temp = *p1;
        *p1 = *p2;
        *p2 = *temp;
        p1++;
        p2--;
    }
    char **p ;
    for (p = tab; p < tab+NB_MOTS; p++) {
        inverserMot(*p);
    }
    
}
//affiche
void Afficher(char **tab) {
    printf("Contenu du tableau de mots :\n");
    char **p ;
    for (p = tab; p < tab+NB_MOTS; p++) {
        printf("%s\n", *p);
    }
}
// libration
void Liberer(char **tab) {
    char **p ;
    for (p = tab; p < tab+NB_MOTS; p++) {
        free(*p);
    }
    free(tab) ;
}

// main func
int main()
{
    
    char **tab;  
    tab = (char **)malloc(NB_MOTS * sizeof(char*)); 
    tab = Saisie(tab);
    printf("Tableau de mots avant l'inversion :\n");
    Afficher(tab);
    inverserTab(tab);
    printf("Tableau de mots après l'inversion :\n");
    Afficher(tab); 
    Liberer(tab)  ;
    Afficher(tab); 
}