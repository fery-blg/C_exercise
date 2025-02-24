#include <stdio.h>

int main() {
    int heures, minutes, secondes;


    printf("Entrez le nombre d'heures : ");
    scanf("%d", &heures);
    printf("Entrez le nombre de minutes : ");
    scanf("%d", &minutes);
    printf("Entrez le nombre de secondes : ");
    scanf("%d", &secondes);

    if (heures < 0 || heures > 23 || minutes < 0 || minutes > 59 || secondes < 0 || secondes > 59) {
        printf(" Veuillez entrer des valeurs valides pour les heures (0-23), minutes (0-59), et secondes (0-59).\n");
    } else {
        secondes++;
        
        if (secondes == 60) {
            secondes = 0;
            minutes++;
            
            if (minutes == 60) {
                minutes = 0;
                heures++;
                
                if (heures == 24) {
                    heures = 0;
                }
            }
        }

        printf("Il est %d heure%s, %d minute%s, %d seconde%s.\n",
               heures, (heures == 1 ? "" : "s"),
               minutes, (minutes == 1 ? "" : "s"),
               secondes, (secondes == 1 ? "" : "s"));
    }

    return 0;
}
