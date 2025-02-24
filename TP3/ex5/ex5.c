#include <stdio.h>

int main() {
    int A[] = {1, 3, 18, 20};
    int B[] = {2, 4, 5, 6, 21};
    int DA = sizeof(A) / sizeof(A[0]);
    int DB = sizeof(B) / sizeof(B[0]);
    int C[DA + DB];

    int i = 0, j = 0, k = 0;

    while (i < DA && j < DB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < DA) {
        C[k++] = A[i++];
    }

    while (j < DB) {
        C[k++] = B[j++];
    }

    printf("Tableau C fusionné et trié :\n");
    for (int x = 0; x < DA + DB; x++) {
        printf("%d ", C[x]);
    }
    printf("\n");

    return 0;
}
