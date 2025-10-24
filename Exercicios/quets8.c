/*Peça ao usuário que digite uma palavra (máx. 50 caracteres).
 Mostre quantas vogais (a, e, i, o, u) existem nessa palavra.
 Dica: use char palavra[50]; e um laço for com strlen().*/

#include <stdio.h>
#include <string.h>

int main () {
    char palavra[50];
    int contador_vogais = 0;

    printf("Digite uma palavra (maximo 50 caracteres): ");
    scanf("%49s", palavra);

    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++) {
        char letra = palavra[i];
        // Verifica se a letra é uma vogal (considerando maiúsculas e minúsculas)
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            contador_vogais++;
        }
    }

    printf("A palavra '%s' possui %d vogais.\n", palavra, contador_vogais);

    return 0;
}