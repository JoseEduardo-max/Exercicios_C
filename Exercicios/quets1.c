#include <stdio.h>

int n1, n2, soma;

int main() {
    printf ("Digite o primeiro numero: ");
    scanf ("%d", &n1);

    printf ("Digite o segundo numero: ");
    scanf ("%d", &n2);

    soma = n1 + n2;

    printf ("A soma dos dois numeros e: %d\n", soma);

    return 0;
}