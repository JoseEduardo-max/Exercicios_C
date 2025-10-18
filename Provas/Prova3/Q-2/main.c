#include <stdio.h>

int main() {
    int A[3][3] = {{5,4,3},{2,6,1},{3,4,5}};
    int B[3][3] = {{4,3,2},{2,4,1},{1,2,4}};
    int VENDAS[3][3];
    int i, j;
    int somaPrincipal = 0, somaSecundaria = 0;

    // Calcula matriz de vendas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            VENDAS[i][j] = A[i][j] - B[i][j];
        }
    }

    // Soma das diagonais
    for (i = 0; i < 3; i++) {
        somaPrincipal += VENDAS[i][i];
        somaSecundaria += VENDAS[i][2 - i];
    }

    printf("Soma diagonal principal: %d\n", somaPrincipal);
    printf("Soma diagonal secundaria: %d\n", somaSecundaria);

    if (somaPrincipal > somaSecundaria)
        printf("A diagonal principal vendeu mais.\n");
    else
        printf("A diagonal secundaria vendeu mais.\n");

    return 0;
}
