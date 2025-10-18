#include <stdio.h>

int main() {
    float matriz[4][5] = {
        {10, 20, 30, 40, 50},
        {5, 15, 25, 35, 45},
        {60, 70, 80, 90, 100},
        {15, 25, 35, 45, 55}
    };
    float medias[4];
    float maior = 0;
    int i, j;

    // Achar o maior valor da matriz
    for(i = 0; i < 4; i++)
        for(j = 0; j < 5; j++)
            if(matriz[i][j] > maior)
                maior = matriz[i][j];

    // Normalizar (dividir tudo pelo maior)
    for(i = 0; i < 4; i++)
        for(j = 0; j < 5; j++)
            matriz[i][j] /= maior;

    // Calcular a média de cada linha
    for(i = 0; i < 4; i++) {
        float soma = 0;
        for(j = 0; j < 5; j++)
            soma += matriz[i][j];
        medias[i] = soma / 5;
    }

    // Mostrar resultados
    printf("Médias normalizadas dos rios:\n");
    for(i = 0; i < 4; i++)
        printf("Rio %d: %.2f\n", i+1, medias[i]);

    return 0;
}
