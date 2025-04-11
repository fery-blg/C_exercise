#include <stdio.h>
// function pour lire deux entiers avec pointeurs
void saisie(int *A, int *B) {
    printf("Entrez la valeur de A : ");
    scanf("%d", A);
    printf("Entrez la valeur de B : ");
    scanf("%d", B); 
}
// function qui prend en paramètres un pointeur vers un entier et incrémente sa valeur.
 void incVal(int *A){
    (*A)++;
    printf("La valeur de A après incrémentation est : %d\n", *A);

 }
//fonction qui prend en parmétres un pointeurs vers un entier et donner l'adr suiv de pointeur
void invAdr(int *A) {
    printf("Adresse actuelle du pointeur : %p\n", (void *)A);
    printf("Adresse suivante du pointeur : %p\n", (void *)(A + 1));
}




int main (){
int A, B;
saisie(&A, &B); 
incVal(&A);
invAdr(&A);

}