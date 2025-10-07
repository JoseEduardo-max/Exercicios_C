#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d,%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);

            if (mat[i][j] % 2 == 0)
                mat[i][j] = 1;
            else
                mat[i][j] = -1;
        }
    }

    printf("\nMatriz atualizada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
