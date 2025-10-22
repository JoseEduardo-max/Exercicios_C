#include <stdio.h>

int main() {
    float matriz[4][5] = {
        {10, 20, 30, 40, 50}, 
        {5, 15, 25, 35, 45},  
        {8, 18, 28, 38, 48},  
        {12, 22, 32, 42, 52}  
    };

    //* Normaliza a matriz e calcula a média de cada linha
    float matriz_norm[4][5];
    float media[4];
    float maior = 0;
    int i, j;

    //* Encontra o maior valor na matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
        }
    }

    //* Normaliza a matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            matriz_norm[i][j] = matriz[i][j] / maior;
        }
    }

    //* Calcula a média de cada linha da matriz normalizada
    for (i = 0; i < 4; i++) {
        float soma = 0;
        for (j = 0; j < 5; j++) {
            soma += matriz_norm[i][j];
        }
        media[i] = soma / 5;
    }

    //* Ordena as linhas da matriz normalizada com base na média em ordem decrescente
    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (media[i] < media[j]) {
                float temp = media[i];
                media[i] = media[j];
                media[j] = temp;

                float tempLinha[5];
                for (int k = 0; k < 5; k++) {
                    tempLinha[k] = matriz_norm[i][k];
                    matriz_norm[i][k] = matriz_norm[j][k];
                    matriz_norm[j][k] = tempLinha[k];
                }
            }
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz normalizada e reordenada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%.2f\t", matriz_norm[i][j]);
        }
        printf("\n");
    }

    printf("\nMedias normalizadas (em ordem decrescente):\n");
    for (i = 0; i < 4; i++) {
        printf("Rio %d: %.2f\n", i + 1, media[i]);
    }

    return 0;
}
