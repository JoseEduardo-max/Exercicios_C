#include <stdio.h>
#include <stdlib.h> 

int main() {
    float matriz_estatica[3][3];

    float **matriz_dinamica;
    matriz_dinamica = (float**) malloc(3 * sizeof(float*)); 

    if (matriz_dinamica == NULL) {
        printf("Erro ao alocar memoria para as linhas!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        matriz_dinamica[i] = (float*) malloc(3 * sizeof(float));
        if (matriz_dinamica[i] == NULL) {
            printf("Erro ao alocar memoria para as colunas!\n");
            return 1;
        }
    }

    printf("=== Enderecos da matriz estatica ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz_estatica[%d][%d] -> %p\n", i, j, (void*)&matriz_estatica[i][j]);
        }
    }

    printf("\n=== Enderecos da matriz dinamica ===\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz_dinamica[%d][%d] -> %p\n", i, j, (void*)&matriz_dinamica[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        free(matriz_dinamica[i]); 
    }
    free(matriz_dinamica); 

    return 0;
}
