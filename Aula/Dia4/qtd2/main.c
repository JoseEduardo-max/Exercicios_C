#include <stdio.h>
#include <stdlib.h>

int fatorial (int a) {
    int b = 1;
    for (int i = a; i >= 1; i--) {
        b *= i;
    };
    return b;
}

int main () {
    int n1, n2;
    printf("Digite o numero: ");
    scanf("%d", &n1);

    n2 = fatorial(n1);
    printf("O fatorial dele e: %d", n2);

    return 0;
}