#include <stdio.h>

int main() {
    int mat[5][5];
    int i, j, cont = 1, soma;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            mat[i][j] = cont++;
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++) {
        soma = 0;
        for (j = 0; j < 5; j++) {
            soma += mat[i][j];
        }
        printf("Soma da linha %d: %d\n", i+1, soma);
    }

    printf("Diagonal principal: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    return 0;
}
