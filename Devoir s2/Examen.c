//Exercice 1 
#include <stdio.h>
// Saisir deux entiers A et B par adresse
void Saisie(int *PA , int *PB) {
    printf ("Donner la valeur de l'entier pointé par PA : ");
    scanf ("%d",PA) ;
    printf ("Donner la valeur de l'entier pointé par PB : ");
    scanf ("%d",PB) ;
    }

//2.function qui prend en parmetre un point vers un entier et incrementer sa val 
    int increamntercval(int *A){
        *A=*A+1;

    }





//the main function 
int main (){
    
    
    int A,B;
    Saisie(&A,&B) ; 
    printf ("A = %d\n", A) ;
    printf ("B = %d\n", B) ;
    increamntercval(&A);
    increamntercval(&B);
    printf ("A = %d\n", A) ;
    printf ("B = %d\n", B) ;


}


