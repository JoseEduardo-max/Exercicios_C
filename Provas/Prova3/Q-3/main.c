#include <stdio.h>

int main() {
    int X[6] = {10, 20, 25, 30, 40, 50};
    int Y[5] = {15, 20, 35, 40, 60};
    int Z[5];
    int i, j, k = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            if (X[i] == Y[j]) {
                Z[k] = X[i];
                k++;
            }
        }
    }

    printf("Produtos em comum: ");
    for (i = 0; i < k; i++) {
        printf("%d ", Z[i]);
    }

    return 0;
}
