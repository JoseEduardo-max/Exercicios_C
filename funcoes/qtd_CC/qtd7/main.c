#include <stdio.h>

long long int fatorial (int num) {
    long long int fat = 1;

    for (int i = 1; i <= num; i++) {
        fat *= i;
    }

    return fat;
}

long long int arranjo (int n, int p) {
    if (p > n || p < 0) {
        printf("Erro: p deve ser menor ou igual a n e maior ou igual a 0.\n");
        return 0;
    }

    long long int resultado = fatorial(n) / fatorial(n - p);
    return resultado;
}

int main () {
    int n, p;
    long long int resultado;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de p: ");
    scanf("%d", &p);

    resultado = arranjo(n, p);

    if (resultado != 0) {
        printf("O arranjo de %d elementos tomados %d a %d e: %11d\n", n, p, p, resultado);
    }

    return 0;
}