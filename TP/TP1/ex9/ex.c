#include <stdio.h>

int main() {
    float V = 0.176;

    // Affichage avec arrondi à 2 décimales ou 3 décimales
    printf("La variable vaut %.3f ou encore %.2f\n", V, V+ 0.004);

    return 0;
}