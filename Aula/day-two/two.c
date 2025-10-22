#include <stdio.h>

int main() {
    int l1, l2, c1, c2;

    scanf("%d ", &c1);
    scanf("%d", &l2);
    scanf("%d", &l1);
    scanf("%d", &c2);

    if (c1 !=l2) {
        printf("Impossível multiplicar as matrizes.\n");
        return 0;
    }

    int matriz1[l1][c1];
    int matriz2[l2][c2];
    int matriz_resultado[l1][c2];

    printf ("Digite os elementos da primeira matriz (%dx%d):\n", l1, c1);

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf ("Digite os elementos da segunda matriz (%dx%d):\n", l2, c2);

    for (int i = 0; 1 < l2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Inicializa a matriz resultado com zeros
    for (int i = 0 ; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            matriz_resultado[i][j] = 0;
        }
    }

    // Multiplica as matrizes
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                matriz_resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    printf("Matriz resultado (%dx%d):\n", l1, c2);
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", matriz_resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}