#include <stdio.h>

int main() {
    float alturas[6], ordenadas[6], maior, menor, aux;
    int i, j, indice_maior = 0, indice_menor = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite a altura do jogador %d: ", i+1);
        scanf("%f", &alturas[i]);
        ordenadas[i] = alturas[i];
    }

    maior = alturas[0];
    menor = alturas[0];

    for (i = 1; i < 6; i++) {
        if (alturas[i] > maior) {
            maior = alturas[i];
            indice_maior = i;
        }
        if (alturas[i] < menor) {
            menor = alturas[i];
            indice_menor = i;
        }
    }

    printf("Maior altura: %.2f (índice %d)\n", maior, indice_maior+1);
    printf("Menor altura: %.2f (índice %d)\n", menor, indice_menor+1);

    for (i = 0; i < 5; i++) {
        for (j = i+1; j < 6; j++) {
            if (ordenadas[i] < ordenadas[j]) {
                aux = ordenadas[i];
                ordenadas[i] = ordenadas[j];
                ordenadas[j] = aux;
            }
        }
    }

    printf("Alturas em ordem decrescente: ");
    for (i = 0; i < 6; i++) {
        printf("%.2f ", ordenadas[i]);
    }
    printf("\n");

    return 0;
}
