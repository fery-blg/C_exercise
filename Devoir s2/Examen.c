//Exercice 1 
#include <stdio.h>
// Saisir deux entiers A et B par adresse
void Saisie(int *A , int B) {
    printf ("Donner la valeur de l'entier pointe par A : ");
    scanf ("%d",A) ;
    printf ("Donner la valeur de l'entier pointe par B : ");
    scanf ("%d",B) ;
    }

//2.function qui prend en parmetre un point vers un entier et incrementer sa val 
    int Incval(int *A){
        *A=*A+1;

    }



//3. function qui prend deucv val et invrement du adr

  
    

//the main function  
int main (){
    
    
    int A,B;
    int *PA,*PB;
    PA=&A;
    PB=&B;
    Saisie(&A,&B) ; 
    printf ("A = %d\n", A) ;
    printf ("B = %d\n", B) ;
    Incval(&A);
    Incval(&B);
    printf ("A = %d\n", A) ;
    printf ("B = %d\n", B) ;
    


}


