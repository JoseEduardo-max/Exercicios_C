/**/

#include <stdio.h>

int main() {
    int consumo[5];
    int variacao[5];
    int i;

    variacao[0] = 0; 

    for(i = 0; i < 5; i ++) {
        printf ("Digite o consumo do dia %d: ", i + 1);
        scanf ("%d", &consumo[i]);
    }

    for(i = 1; i < 5; i++) {
        variacao[i] = consumo[i] - consumo[i-1];
    }

    printf("Variacao percentual:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", variacao[i]);
    }

    return 0;
}
