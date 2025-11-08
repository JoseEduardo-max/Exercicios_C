#include <stdio.h>

int ehPrimo (int x) {
    if (x < 2) {
        return 0;
    }

    for (int i = 2; i * i <= x; i++ ) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    int soma = 0;

    for (int n = 1; n <= 1000; n++) {
        if (ehPrimo(n)) {
            soma += n;
        }
    }

    printf("A soma dos numeros primos de 1 a 1000 e: %d\n", soma);

    return 0;
}