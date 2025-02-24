#include <stdio.h>  
#include <string.h>  

int main() {  
    char prenoms[100][50]; 
    char lettre;  
    int nombrePrenoms;   


    printf("Combien de prénoms voulez-vous entrer ?(100 max) ");  
    scanf("%d", &nombrePrenoms);
    getchar();  
    for (int i = 0; i < nombrePrenoms; i++) {  
        printf("Entrez le prénom %d : ", i + 1);  
        fgets(prenoms[i], 50, stdin);  
        prenoms[i][strcspn(prenoms[i], "\n")] = '\0'; 
    }    
    printf("Entrez une lettre pour filtrer les prénoms : ");  
    scanf(" %c", &lettre);
    printf("Prénoms commençant par '%c' :\n", lettre);  
    for (int i = 0; i < nombrePrenoms; i++) {  
        if (prenoms[i][0] == lettre || prenoms[i][0] == lettre + ('a' - 'A')) {  
            puts(prenoms[i]);
        }  
    }  

    return 0;  
}