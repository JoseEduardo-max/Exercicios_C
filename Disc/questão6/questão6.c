/*Leia uma matriz 3x3 de caracters e mostre-a formatada na tela
Depois, mostre quantas vogais a na matriz.*/

#include <stdio.h>
#include <string.h>

int main() {
    char mat[3][3];
    int i, j;
    int contador = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]", i+1, j+1);
            scanf(" %c", &mat[i][j]);
        }
    }

    printf("\nMatriz Digitada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            char c = mat[i][j];
            if ( c == 'a' || c == 'A'||
                 c == 'e' || c == 'E'||
                 c == 'i' || c == 'I'||
                 c == 'o' || c == 'O'||
                 c == 'u' || c == 'U' ) {
                 contador++;
            }
        }
    }

    printf("\nQuantidade de vogais na matriz: %d\n", contador);

    return 0;
}