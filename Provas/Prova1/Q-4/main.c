#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int pontos;
} Competidor;

void maiorPontuacao(Competidor *lista, int n) {
    int i, maior = 0;
    for (i = 1; i < n; i++) {
        if (lista[i].pontos > lista[maior].pontos) {
            maior = i;
        }
    }
    printf("O competidor com mais pontos é %s (%d pontos)\n", lista[maior].nome, lista[maior].pontos);
}

int main() {
    int n, i;
    Competidor *lista;

    printf("Quantos competidores? ");
    scanf("%d", &n);

    lista = (Competidor *) malloc(n * sizeof(Competidor));

    for (i = 0; i < n; i++) {
        printf("Nome: ");
        scanf("%s", lista[i].nome);
        printf("Pontos: ");
        scanf("%d", &lista[i].pontos);
    }

    maiorPontuacao(lista, n);

    free(lista);
    return 0;
}
