#include <stdio.h>
#include <string.h>

int main(){
    char v[] = "aeiouyAEIOUY";
    char ch1[50];
    char res[50];
    int j = 0;

    printf("Chaîne initiale : ");
    fgets(ch1, 50, stdin);
    ch1[strcspn(ch1, "\n")] = '\0';

    for (int i = 0; i < strlen(ch1); i++) {
        int voy = 0;
        for (int k = 0; k < strlen(v); k++) {
            if (ch1[i] == v[k]) {
                voy = 1;
                break;
            }
        }
        if (!voy) {
            res[j++] = ch1[i];
        }
    }
    res[j] = '\0'; 

    printf("Chaîne sans voyelles : %s\n", res);

    return 0;
}