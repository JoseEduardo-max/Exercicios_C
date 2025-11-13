#include <stdio.h>
#include <stdlib.h> 

int main() {
    float vetor_estatico[10];

    float *vetor_dinamico;
    vetor_dinamico = (float*) malloc(10 * sizeof(float));

    if (vetor_dinamico == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("=== Endereços do vetor estático ===\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor_estatico[%d] -> %p\n", i, (void*)&vetor_estatico[i]);
    }

    printf("\n=== Endereços do vetor dinâmico ===\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor_dinamico[%d] -> %p\n", i, (void*)&vetor_dinamico[i]);
    }

    free(vetor_dinamico);

    return 0;
}
