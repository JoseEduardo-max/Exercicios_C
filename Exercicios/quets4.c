//Escreva um programa que peça um número inteiro positivo N e mostre todos os números de 1 até N.

#include <stdio.h>

int n, i;

int main() {
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um numero positivo.\n");
        return 1;
    }

    printf("Numeros de 1 ate %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
