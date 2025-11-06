#include <stdio.h>

int main() {
    char texto[200];
    char palavra[50];
    int i, j, cont = 0;

    printf("Digite o texto: ");
    gets(texto);
    printf("Digite a palavra que quer buscar: ");
    gets(palavra);

    // Contar quantas vezes a palavra aparece
    for (i = 0; texto[i] != '\0'; i++) {
        int igual = 1; // assume que é igual
        for (j = 0; palavra[j] != '\0'; j++) {
            if (texto[i + j] != palavra[j]) {
                igual = 0;
                break;
            }
        }
        if (igual) {
            cont++;
        }
    }

    printf("A palavra '%s' aparece %d vezes.\n", palavra, cont);
    return 0;
}
