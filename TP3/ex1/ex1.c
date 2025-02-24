#include <stdio.h>

int main() {
    int N, i = 0, number;
    int product = 1;
    int sum = 0;
    float moy;

    printf("Entrez le nombre de valeurs N : ");
    scanf("%d", &N);

    while (i < N) {
        printf("Entrez un entier : ");
        scanf("%d", &number);

        sum += number;
        product *= number;
        i++;
    }

    moy = (float)sum / N;

    printf("Somme = %d\n", sum);
    printf("Produit = %lld\n", product);
    printf("Moyenne = %.2f\n", moy);

    return 0;
}
