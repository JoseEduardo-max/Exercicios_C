#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (&a > &b) {
        printf("\nA possui o maior endereco de memoria.\n");
        printf("Endereço de A: %p\n", (void*)&a);
        printf("Endereço de B: %p\n", (void*)&b);
    } else {
        printf("\nB possui o maior endereço de memoria.\n");
        printf("Endereco de A: %p\n", (void*)&a);
        printf("Endereco de B: %p\n", (void*)&b);
    }

    return 0;
}
