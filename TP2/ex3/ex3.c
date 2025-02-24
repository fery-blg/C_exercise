#include <stdio.h>

int main() {
    int A , B ;
    printf("Enter A: ");
    scanf("%d", &A);
    printf("Enter B: ");
    scanf("%d", &B);
    if (A*B > 0) {
        printf("le produit est positif.\n");
    } else {
        printf("le produit est négatif.\n");
        
    }
}