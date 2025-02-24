#include <stdio.h>

int main(){
    int N ;
    printf("entrer la dimension N des matrices carreés (max 10):");
    scanf("%d",&N);
    while (N <= 0 || N > 10){
        printf("Erreur! Entrez une dimension N valide (max 10) : ");
        scanf("%d", &N);
    }
    int A[N][N],B[N][N],C[N][N];

    printf("entrer les elmentes de la matrice A(%d%d):\n",N,N);
    for (int i=0 ; i < N ; i++){
        for (int j=0 ; j < N ; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("entrer les elmentes de la matrice B(%d%d):\n",N,N);
    for (int i=0 ; i < N ; i++){
        for (int j=0 ; j < N ; j++){
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for (int i=0 ; i <N ; i++){
        for (int j=0 ; j <N ; j++){
            C[i][j]=0;
        }
    }
    for (int i=0 ; i<N ; i++){
        for (int j=0 ; j<N ; j++){
            for (int k=0 ; k<N ; k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("le produit des matrices A et B est :\n");
    for (int i=0 ; i<N ; i++){
        for (int j=0 ; j<N ; j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}