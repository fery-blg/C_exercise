#include <stdio.h>
#include <stdbool.h>

int compter(int n) {
    if (n < 10) {
        return 1;
    } else {
        return 1 + compter(n / 10);
    }
}

int somme(int n) {
    if (n < 10) {
        return n;
    } else {
        return n % 10 + somme(n / 10);
    }
}

bool premier(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int somme_div(int n, int i) {
    if (i == n) {
        return 0;  
    }
    if (n % i == 0) {
        return i + somme_div(n, i + 1);
    }
    return somme_div(n, i + 1);
}

bool parfait(int n) {
    return somme_div(n, 1) == n;
}

bool impair(int n);

bool pair(int n) {
    if (n == 0) {
        return true;
    } else {
        return impair(n - 1);
    }
}

bool impair(int n) {
    if (n == 0) {
        return false;
    } else {
        return pair(n - 1);
    }
}

void permutationGauche(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

void permutationDroite(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

void AfficheInverse(int n) {
    if (n < 10) {
        printf("%d", n);
    } else {
        printf("%d", n % 10);
        AfficheInverse(n / 10);
    }
}

int main() {
    int n;
    printf("Entrez un entier positif n : ");
    while (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrée invalide. Veuillez entrer un entier positif : ");
        while (getchar() != '\n'); 
    }

    printf("Le nombre de chiffres dans %d est : %d\n", n, compter(n));
    printf("La somme des chiffres de %d est : %d\n", n, somme(n));

    if (premier(n)) {
        printf("%d est un nombre premier.\n", n);
    } else {
        printf("%d n'est pas un nombre premier.\n", n);
    }

    if (parfait(n)) {
        printf("%d est un nombre parfait.\n", n);
    } else {
        printf("%d n'est pas un nombre parfait.\n", n);
    }

    if (pair(n)) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    int a, b, c, g, d;
    printf("Entrez trois entiers a, b, c : ");
    while (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrée invalide. Veuillez entrer trois entiers : ");
        while (getchar() != '\n');
    }

    printf("Entrez le nombre de permutations à gauche (g) : ");
    while (scanf("%d", &g) != 1 || g < 0) {
        printf("Entrée invalide. Veuillez entrer un entier positif : ");
        while (getchar() != '\n');
    }

    while (g-- > 0) {
        permutationGauche(&a, &b, &c);
    }
    printf("Après permutations à gauche : a = %d, b = %d, c = %d\n", a, b, c);

    printf("Entrez le nombre de permutations à droite (d) : ");
    while (scanf("%d", &d) != 1 || d < 0) {
        printf("Entrée invalide. Veuillez entrer un entier positif : ");
        while (getchar() != '\n');
    }

    while (d-- > 0) {
        permutationDroite(&a, &b, &c);
    }
    printf("Après permutations à droite : a = %d, b = %d, c = %d\n", a, b, c);

    printf("Les chiffres de %d dans l'ordre inverse sont : ", n);
    AfficheInverse(n);
    printf("\n");

    return 0;
}
