#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    printf("Donner une chaine de caractères: ");
    fgets(s, 50, stdin);    
    int len = strlen(s)-1;
    printf("La longueur de la chaine de caractères est: %d\n", len);

    return 0;
}