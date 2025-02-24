#include <stdio.h>  

int main() {  
    int N, val, found = 0;  
    int T[50];  

    // Lire la dimension N du tableau  
    printf("Donner la dimension du tableau (max 50): ");  
    scanf("%d", &N);  

    // Vérifier que N est valide  
    if (N <= 0 || N > 50) {  
        printf("Erreur: la dimension du tableau doit etre entre 1 et 50.\n");  
        return 1;  
    }  

    // Remplir le tableau par des valeurs entrées au clavier  
    printf("Entrer les valeurs du tableau:\n");  
    for (int i = 0; i < N; i++) {  
        scanf("%d", &T[i]);  
    }  

    // Lire la valeur à chercher  
    printf("Entrer la valeur à chercher: ");  
    scanf("%d", &val);  

    // Recherche de la valeur dans le tableau  
    for (int i = 0; i < N; i++) {  
        if (T[i] == val) {  
            printf("La valeur %d est trouvee a l'indice %d\n", val, i);  
            found = 1;  
            break; // Sortir de la boucle une fois la valeur trouvée  
        }  
    }  

    // Si la valeur n'a pas été trouvée  
    if (!found) {  
        printf("La valeur %d n'est pas trouvee dans le tableau.\n", val);  
    }  

    return 0;  
}