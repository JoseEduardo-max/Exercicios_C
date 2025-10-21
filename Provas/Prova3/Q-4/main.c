#include <stdio.h>

int main() {
    float matriz[4][5] = {
        {80,90,100,85,95},
        {70,75,80,70,65},
        {85,88,84,82,83},
        {100,110,105,115,120}
    };
    float media[4];
    int i, j;

    for (i = 0; i < 4; i++) {
        float soma = 0;
        for (j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
        media[i] = soma / 5;
    }

    printf("Médias de cada grupo:\n");
    for (i = 0; i < 4; i++) {
        printf("Grupo %d: %.2f\n", i + 1, media[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 4; j++) {
            if (media[i] > media[j]) {
                float temp = media[i];
                media[i] = media[j];
                media[j] = temp;
            }
        }
    }

    printf("\nMédias em ordem crescente:\n");
    for (i = 0; i < 4; i++) {
        printf("%.2f ", media[i]);
    }

    return 0;
}
