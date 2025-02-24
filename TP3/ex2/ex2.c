#include <stdio.h>

int main() {
    int N;
    int u0 = 1;
    int u1 = 1;
    int un;

    printf("Entrer le valeur de N:");
    scanf("%d",&N);
  if (N==0){
    un = u0 ;
  } else if (N==1){
    un = u1 ;
    } else {
        for (int i = 2; i <= N; i++) {
            un = u0 + u1;
            u0 = u1;
            u1 = un;
        }
    }


    
  

    printf("Le %d terme de la suite de Fibonacci est : %d\n", N, un);

    return 0;
}