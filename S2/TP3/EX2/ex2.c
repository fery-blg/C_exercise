#include <stdio.h>
// fonction pour lire deux entiers avec pointeurs
void lireint(int *A, int *B) {
    printf("Entrez la valeur de A : ");
    scanf("%d", A);
    printf("Entrez la valeur de B : ");
    scanf("%d", B); 
}
 // fonction pour calculer et afficher la somme de deux entiers et leur produit 
void somme(int *A, int *B) {
    int s = *A + *B;
    int p = *A * *B;
    printf("Le produit de A et B est : %d\n", p);
    printf("La somme de A et B est : %d\n", s);}

//function pour permuter le contenu de deux var A et B
void permuter(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
    printf("Les valeurs permutées sont A = %d et B = %d\n", *A, *B);
}


int main() {
    int A, B;
    lireint(&A, &B);
    somme( &A, &B);
    permuter(&A, &B);

    return 0;
}

