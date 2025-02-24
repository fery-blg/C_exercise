#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    if ((num1 % 2 == 0 && num2 % 2 == 0) || (num1 % 2 != 0 && num2 % 2 != 0)) {
        printf("num1 %d est %s.\n", num1, num1 % 2 == 0 ? "pair" : "impair");
        printf("num2 %d est %s.\n", num2, num2 % 2 == 0 ? "pair" : "impair");
        printf("Ils sont de même parité.\n");
    } else {
        printf("num1 %d est %s.\n", num1, num1 % 2 == 0 ? "pair" : "impair");
        printf("num2 %d est %s.\n", num2, num2 % 2 == 0 ? "pair" : "impair");
        printf("Ils sont de parité différente.\n");
    }

    return 0;
}
