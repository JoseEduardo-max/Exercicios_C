#include <stdio.h>

void somar(int *a, int *b) {
    *a = *a + *b; 
}

int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    somar(&A, &B);

    printf("\nApos a soma:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
