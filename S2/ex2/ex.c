#include <stdio.h>
#include <string.h>

// enregistrement Matiere
struct Matiere {
    char N_Mat[30];
    float N_ds;
    float N_exam;
};

// enregistrement Etudient
struct Etudient {
    char Nom[30];
    char Prenom[30];
    struct Matiere M;
};

// enregistrement Classe
struct Classe {
    char Filliere[30];
    struct Etudient tab_etud[100];
    int nb_etud;
};

// fonction saisie_Note
void saisie_Note(struct Matiere *M) {
    printf("Donner le nom de la matiere: ");
    scanf("%s", M->N_Mat);
    printf("Donner la note du DS: ");
    scanf("%f", &M->N_ds);
    printf("Donner la note de l'examen :");
    scanf("%f", &M->N_exam);
}

// fonction affiche_Note
void affiche_Note(struct Matiere M) {
    printf("La note du DS est : %f\n", M.N_ds);
    printf("La note de l'examen est : %f\n", M.N_exam);
}

// fonction clacule_note
float clacule_note(struct Matiere M) {
    return (M.N_ds + M.N_exam * 2) / 3;
}

// fonction saisieEtudient
void saisieEtudient(struct Etudient *E) {
    printf("Donner le nom de l'etudient: ");
    scanf("%s", E->Nom);
    printf("Donner le prenom de l'etudient: ");
    scanf("%s", E->Prenom);
    saisie_Note(&E->M);
}

// fonction afficheEtudient
void afficheEtudient(struct Etudient E) {
    printf("Nom de l'etudient : %s\n", E.Nom);
    printf("Prenom de l'etudient : %s\n", E.Prenom);
    affiche_Note(E.M);
    printf("La note finale est : %f\n", clacule_note(E.M));
}

// fonction saisieClasse
void saisieClasse(struct Classe *C) {
    printf("Donner le nom de la filiere: ");
    scanf("%s", C->Filliere);
    printf("Donner le nombre d'etudiants: ");
    scanf("%d", &C->nb_etud);
    for (int i = 0; i < C->nb_etud; i++) {
        saisieEtudient(&C->tab_etud[i]);
    }
}

// fonction affiche_classe
void affiche_classe(struct Classe C) {
    printf("La filiere est : %s\n", C.Filliere);
    printf("Le nombre d'etudiants est : %d\n", C.nb_etud);
    for (int i = 0; i < C.nb_etud; i++) {
        afficheEtudient(C.tab_etud[i]);
    }
}

// fonction pourcentageReussite
float pourcentageReussite(struct Classe C) {
    int count = 0;
    for (int i = 0; i < C.nb_etud; i++) {
        if (clacule_note(C.tab_etud[i].M) >= 10) {
            count++;
        }
    }
    return (count / (float)C.nb_etud) * 100;
}

// fonction meilleurEtudiant
struct Etudient meilleurEtudiant(struct Classe C) {
    struct Etudient best = C.tab_etud[0];
    for (int i = 1; i < C.nb_etud; i++) {
        if (clacule_note(C.tab_etud[i].M) > clacule_note(best.M)) {
            best = C.tab_etud[i];
        }
    }
    return best;
}

// fonction rechercheEtudiant
void rechercheEtudiant(struct Classe C, char l) {
    for (int i = 0; i < C.nb_etud; i++) {
        if (C.tab_etud[i].Nom[0] == l) {
            afficheEtudient(C.tab_etud[i]);
        }
    }
}

// fonction main
int main() {
    struct Classe C;
    saisieClasse(&C);
    affiche_classe(C);
    printf("Le pourcentage de reussite est : %f%%\n", pourcentageReussite(C));
    struct Etudient best = meilleurEtudiant(C);
    printf("Le meilleur etudiant est :\n");
    afficheEtudient(best);
    char l;
    printf("Entrer une lettre :\n"); 

    scanf(" %c", &l);
    rechercheEtudiant(C, l);
    return 0;
}