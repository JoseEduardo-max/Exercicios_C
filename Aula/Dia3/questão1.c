// crie um struct chamada jogador com os campos nome e pontos.

#include <stdio.h>
#include <string.h>

struct jogador {
    char nome[50];
    int pontos;
};

struct jogador jogador1, jogador2;

// leia os dados de dois jogadores e mostre quem fez mais pontos.
int main () {
    strcpy(jogador1.nome, "Alice");
    jogador1.pontos = 150;

    strcpy(jogador2.nome, "Bob");
    jogador2.pontos = 200;

    if (jogador1.pontos > jogador2.pontos) {
        printf("O jogador com mais pontos e: %s com %d pontos.\n", jogador1.nome, jogador1.pontos);
    } else if (jogador2.pontos > jogador1.pontos) {
        printf("O jogador com mais pontos e: %s com %d pontos.\n", jogador2.nome, jogador2.pontos);
    } else {
        printf("Os dois jogadores tem a mesma pontuacao de %d pontos.\n", jogador1.pontos);
    }

    return 0;
}


