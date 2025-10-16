#include <stdio.h>

int main() {
    int idades[6][6];
    int i, j, k, aux, linha, soma = 0;
    float media;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite a idade da posicao [%d,%d]: ", i+1, j+1);
            scanf("%d", &idades[i][j]);
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 5; j++) {
            for (k = j+1; k < 6; k++) {
                if (idades[i][j] > idades[i][k]) {
                    aux = idades[i][j];
                    idades[i][j] = idades[i][k];
                    idades[i][k] = aux;
                }
            }
        }
    }

    printf("Digite o índice da linha para calcular a média (1..6): ");
    scanf("%d", &linha);

    soma = 0;
    for (j = 0; j < 6; j++) {
        soma += idades[linha-1][j];
    }
    media = soma / 6.0;

    printf("Média da linha %d: %.2f\n", linha, media);

    return 0;
}
