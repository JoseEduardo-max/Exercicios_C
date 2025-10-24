/*Crie uma função chamada fatorial(int n) que retorna o fatorial de um número.
 No main, peça um número e mostre o resultado.
 Exemplo:
 Entrada → 5
 Saída → 120*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main () {
    int numero;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);
    printf("O fatorial de %d eh: %d\n", numero, resultado);

    return 0;
}