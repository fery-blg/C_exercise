#include <stdio.h>

int  main(){
    int L,C;
    printf("Entrez le nombre de lignes (max 50) : ");
    scanf("%d", &L);
    while (L <= 0 || L > 50) {
        printf("Erreur! Entrez un nombre de lignes valide (max 50) : ");
        scanf("%d", &L);
    }

    printf("Entrez le nombre de colonnes (max 50) : ");
    scanf("%d", &C);
    while (C <= 0 || C > 50) {
        printf("Erreur! Entrez un nombre de colonnes valide (max 50) : ");
        scanf("%d", &C);
    }


    int M[L][C];
    printf("entrer les elements du tableau");
    int somme=0;
    for (int i =0 ; i<L ; i++){
        for (int j = 0 ; j<C ;j++){
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
            somme+=M[i][j];
        } 
        printf("\n");
    }
    printf("la somme des elements du tableau est : %d\n",somme);
    return 0;
}