#include <stdio.h>

int main() {
    int vetor[5];  
    int *p = vetor;  

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nEnderecos dos numeros pares:\n");
    for (int i = 0; i < 5; i++) {
        if (*(p + i) % 2 == 0) { // *(p + i) acessa o valor do i-ésimo elemento
            printf("Numero %d -> Endereco: %p\n", *(p + i), (p + i));
        }
    }

    return 0;
}
