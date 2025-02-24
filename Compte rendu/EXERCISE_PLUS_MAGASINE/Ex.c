#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char names [100][50];
    char categories [100];
    int stock [100];
    double price [100];
    int produtCount = 0 ;
    int choice;
    while (1){
        printf("1jouter un produit \n");
        printf("2.Vendre un produit \n");
        printf("Affiuher le rapport  \n");
        printf("4.Rechercher un produit \n");
        printf("5.Quitter \n");
        scanf("%d",&choice);
        getchar();

        if (choice==1){
            if (produtCount>=100){
                printf("Stock plein \n");
                continue;
            }
            char nom[100];
            printf("Nom du produit : ");
            fgets(nom,100,stdin);
            nom[strlen(nom)-1]='\0';
            

            //unique
            int unique = 1 ;
            for (int i=0 ; i<produtCount;i++){
                if (strcmp(names[i],names)==0){
                    unique = 0;
                    break;
                }
            }
        // valide 

        int valid = 1 ;
        for (int i=0 ; names[i] ; i++){
            if (!isalpha(names[i]&&names[i]!="")){
                valid = 0;
                break ;
            }
        }
        if(!valid || !unique){
            printf("nom invalide .\n");
            continue;
        }
        printf("Catégrie(E pour electrique , M pour manuel , A pour accessoire):");
        scanf("%c",&categories[produtCount]);
        printf("Quantité:");
        scanf("%d" ,&stock[produtCount]);
        printf(%)

        }
    } 


}