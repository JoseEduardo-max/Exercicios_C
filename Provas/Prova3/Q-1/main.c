#include <stdio.h>

int main() {
    int original[5] = {5, 7, 6, 9, 8};
    int novo[5];
    int i;

    novo[0] = original[0]; // primeiro valor é igual

    for (i = 1; i < 5; i++) {
        novo[i] = original[i] - original[i - 1];
    }

    printf("Novo vetor: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", novo[i]);
    }

    return 0;
}
