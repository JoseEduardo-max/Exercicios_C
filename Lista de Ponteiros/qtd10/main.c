#include <stdio.h>
#include <stdlib.h> 

void ordenarVetor(int *vetor, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int *vetor; 
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Digite %d numeros inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    ordenarVetor(vetor, n);

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
