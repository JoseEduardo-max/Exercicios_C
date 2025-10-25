#include <stdio.h>
#include <string.h>

int main() {
    int mat[3][3];
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; i++) {
            printf("Digite o valor da posicao [%d][%d]", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}