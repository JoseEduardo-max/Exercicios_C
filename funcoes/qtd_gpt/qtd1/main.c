#include <stdio.h>
#include <stdlib.h>

int somaDois(int a, int b) {
    return a + b;
}

int main () {
    int a, b, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    resultado = somaDois( a, b);

    printf("O resultado e: %d\n", resultado);

    return 0;
}