#include <stdio.h>

int main() {
    int n, i;
    char nomes[10][50]; // até 10 nomes de até 50 letras
    int pontos[10];

    printf("Quantos competidores? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nome do competidor %d: ", i + 1);
        scanf("%s", nomes[i]); // lê uma palavra (sem espaços)
        printf("Pontos de %s: ", nomes[i]);
        scanf("%d", &pontos[i]);
    }

    int maior = pontos[0], menor = pontos[0];
    int posMaior = 0, posMenor = 0;

    for (i = 1; i < n; i++) {
        if (pontos[i] > maior) {
            maior = pontos[i];
            posMaior = i;
        }
        if (pontos[i] < menor) {
            menor = pontos[i];
            posMenor = i;
        }
    }

    printf("\nCompetidor com MAIS pontos: %s (%d pontos)\n", nomes[posMaior], maior);
    printf("Competidor com MENOS pontos: %s (%d pontos)\n", nomes[posMenor], menor);

    return 0;
}
