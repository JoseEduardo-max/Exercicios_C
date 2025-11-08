#include <stdio.h>

int somaIntervalo (int n1, int n2) {
    int soma = 0;

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1; i <= n2; i++) {
        soma += i;
    }

    return soma;
}

int main () {
    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = somaIntervalo(num1, num2);

    printf("A soma dos numeros entre %d e %d e: %d\n", num1, num2, resultado);

    return 0;
}