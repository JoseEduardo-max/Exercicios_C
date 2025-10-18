#include <stdio.h>

int main() {
    int consumo[5] = {100, 110, 105, 115, 120};
    int variacao[5];
    int i;

    variacao[0] = 0; // o primeiro dia não tem variação

    for(i = 1; i < 5; i++) {
        variacao[i] = consumo[i] - consumo[i-1];
    }

    printf("Variação percentual:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", variacao[i]);
    }

    return 0;
}
