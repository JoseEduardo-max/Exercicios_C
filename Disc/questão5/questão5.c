#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int contador_A = 0;

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho; i++) {
        char letra = palavra[i];

        if (letra == 'A' || letra == 'a'){
            contador_A++;
        }
    }

    printf("A quantidade de vezes que a letra A aparece e %d", contador_A);

    return 0;
}