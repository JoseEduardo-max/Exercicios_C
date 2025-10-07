#include <stdio.h>

int main() {
    int livros[100], n, i, id_busca;
    int encontrado = 0;

    printf("Digite a quantidade de livros: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o id do livro %d: ", i+1);
        scanf("%d", &livros[i]);
    }

    printf("Digite o id do livro que deseja buscar: ");
    scanf("%d", &id_busca);

    for (i = 0; i < n; i++) {
        if (livros[i] == id_busca) {
            printf("Livro encontrado no índice %d\n", i+1);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Livro não encontrado.\n");
    }

    return 0;
}
