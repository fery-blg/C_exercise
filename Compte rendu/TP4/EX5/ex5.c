#include <stdio.h>  

int main() {  
    char chaine[100];   
    int i = 0;  
    int dchaine = 0;   

    printf("Entrez une chaîne : ");  
    fgets(chaine, sizeof(chaine), stdin);  
    while (chaine[i] != '\0') {   
        while (chaine[i] == ' ' && chaine[i] != '\0') {  
            i++;   
        }  
        dchaine = i;  
        while (chaine[i] != ' ' && chaine[i] != '\0') {  
            i++;  
        }
        if (dchaine < i) {  
            printf("%.*s\n", i - dchaine, &chaine[dchaine]);  
        }  
    }
    return 0;  
}