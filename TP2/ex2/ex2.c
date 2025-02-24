#include <stdio.h>
 
int main () {
    int Min =-100 ;
    int Max = 100;
    int Num;
    printf("Enter the num: ");
    scanf("%d", &Num);
    if (Num< Min ){
        printf("Num est inférieur à Min.\n");
    } else if (Num > Max) {
        printf("Num est supérieur à Max\n");
    } else {
        printf("Num est comris entre les bornes.\n");
    }
}