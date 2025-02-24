#include <stdio.h>

int main() {
    int N, i = 0, number;
    int product = 1;
    int sum = 0;
    float moy;

    printf("Entrez le nombre de valeurs N : ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N doit être un entier positif.\n");
        return 1;
    }

    do {
        printf("Entrez un entier : ");
        scanf("%d", &number);

        sum += number;
        product *= number;
        i++;
    } while (i < N);

    moy = (float)sum / N;

    printf("Somme = %d\n", sum);
    printf("Produit = %lld\n", product);
    printf("Moyenne = %.2f\n", moy);

    return 0;
}
