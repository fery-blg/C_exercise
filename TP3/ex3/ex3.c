#include <stdio.h>

int main () {
    int N;
    int T[20];
    int TPOS[20];
    int TNEG[20];
    int sum=0;
    int min, max;
    int pos_max=0 , pos_min=0;
    int pos_i=0, neg_i=0;
    //Lire  la dim N du tab
    printf("Donner la dimension du tableau: ");
    scanf("%d", &N);
    if (N>20) {
        printf("La dimension du tableau ne doit pas dépasser 20\n");
        return 1;
    }
    // Remplir le tableau par les valeurs entrées par le clavier
    printf("entrer les valeurs du tableau: \n");
    for (int i=0; i<N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    // Afficher le tableau
    printf("Le tableau est: \n");
    for (int i=0; i<N;i++) {
        printf("%d ", T[i]);
    }

    // Calculer la somme des éléments du tableau
    for (int i=0; i<N; i++) {
        sum += T[i];
    }
    printf("Somme les elements du tableau: %d\n", sum);

    //determiner le min et le max
    max = T[0];
    min = T[0];
    for (int i=0; i<N; i++) {
        if (T[i] > max) {
            max = T[i];
            pos_max = i;
        }
        if (T[i] < min) {
            min = T[i];
            pos_min = i;
        }
    }

    // Afficher le min et le max
    printf("Le min est: %d, sa position est: %d\n", min, pos_min);
    printf("Le max est: %d, sa position est: %d\n", max, pos_max);  

    // Remplir les tableaux TPOS et TNEG
    for (int i=0; i<N; i++){
        if (T[i] >= 0) {
            TPOS[pos_i] = T[i];
            pos_i++;
        } else {
            TNEG[neg_i] = T[i];
            neg_i++;
        }


    }
    // Afficher les tableaux TPOS et TNEG
    printf("Le tableau des elements positifs: \n");
    
    for (int i=0; i<pos_i;i++) {
        printf("%d ", TPOS[i]);
    }
    printf("le tableau des elementes negatives: \n");
     for (int i=0; i<neg_i;i++) {
        printf("%d ", TNEG[i]);
    }





}
