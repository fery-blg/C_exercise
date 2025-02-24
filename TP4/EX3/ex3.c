#include <stdio.h>  
#include <string.h>  

int main() {  
    char CH1[50], CH2[50], CH3[100];
    int i;  

    printf("Entrez la première chaîne (CH1) : ");  
    fgets(CH1, sizeof(CH1), stdin);  
    printf("Entrez la deuxième chaîne (CH2) : ");  
    fgets(CH2, sizeof(CH2), stdin);  

    
    CH1[strcspn(CH1, "\n")] = '\0'; 
    CH2[strcspn(CH2, "\n")] = '\0';  

   
    for (i = 0; i < strlen(CH1) / 2; i++) {  
        CH3[i] = CH1[i];  
    }  

    for ( ; i < (strlen(CH1) / 2 + strlen(CH2) / 2); i++) {  
        CH3[i] = CH2[i - (strlen(CH1) / 2)];  
    }  

    CH3[i] = '\0'; 

   
    puts("La chaîne ch3  : ");  
    puts(CH3);  

    return 0;  
}