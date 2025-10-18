#include <stdio.h>

int main() {
    FILE *arquivo;
    char texto[1000];
    char palavra[100];
    int i, j, cont = 0, achou;

    arquivo = fopen("artigo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // lê todo o texto do arquivo
    fread(texto, sizeof(char), 1000, arquivo);
    fclose(arquivo);

    printf("Digite a palavra para procurar: ");
    scanf("%s", palavra);

    // comparar cada posição do texto
    for (i = 0; texto[i] != '\0'; i++) {
        achou = 1;
        for (j = 0; palavra[j] != '\0'; j++) {
            if (texto[i + j] != palavra[j]) {
                achou = 0;
                break;
            }
        }
        if (achou == 1) cont++;
    }

    printf("A palavra apareceu %d vezes.\n", cont);
    return 0;
}
