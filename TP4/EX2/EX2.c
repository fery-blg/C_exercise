#include <stdio.h>  
#include <ctype.h> 
#include <string.h>

int main() {  
    char ch[50];  
    int compte[26] = {0};  
    char lettre_max = '\0';  
    int max_freq = 0;  

    printf("Donner une chaîne de caractères : ");  
    fgets(ch, sizeof(ch), stdin);  

      
    for (int i = 0; ch[i] != '\0' && ch[i] != '\n'; i++) {  
        char c = tolower(ch[i]); 
        
        
        if (c >= 'a' && c <= 'z') {  
            compte[c - 'a']++;  
        }  
    }  

  
    for (int i = 0; i < 26; i++) {  
        if (compte[i] > max_freq) {  
            max_freq = compte[i];  
            lettre_max = 'a' + i;
        }  
    }  

    
    if (max_freq > 0) {  
        printf("La lettre la plus fréquente est : '%c' avec %d occurrences.\n", lettre_max, max_freq);  
    } else {  
        printf("Aucune lettre trouvée dans la chaîne.\n");  
    }  

    return 0;   
}