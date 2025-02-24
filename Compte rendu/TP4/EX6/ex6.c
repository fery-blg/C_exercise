#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50]; 
    char ch2[50]; 
    int position;


    printf("Chaîne initiale : ");
    fgets(ch1, 50, stdin);
    ch1[strcspn(ch1, "\n")] = '\0'; 
    printf("Deuxième chaîne à insérer : ");
    fgets(ch2, 50, stdin);
    ch2[strcspn(ch2, "\n")] = '\0';
    printf("Entrez la position où insérer la deuxième chaîne : ");
    scanf("%d", &position);
    int ln1 = strlen(ch1);
    int ln2 = strlen(ch2);
    if (position < 0 || position > ln1 || ln1 + ln2 >= sizeof(ch1)) {
        printf("Erreur \n");
        return 1;
    }
    for (int i = ln1; i >= position; i--) {
        ch1[i + ln2] = ch1[i];
    }
    for (int i = 0; i < ln2; i++) {
        ch1[position + i] = ch2[i];
    }
    printf("Résultat : %s\n", ch1);
    return 0;
}
