#include <stdio.h>

int main() {
    int volumes[7] = {3, 7, 4, 6, 2, 9, 5};
    int i, total = 0;

    printf("Picos encontrados nas posicoes: ");

    for (i = 1; i < 6; i++) { // começa no 1 e vai até o penúltimo
        if (volumes[i] > volumes[i - 1] && volumes[i] > volumes[i + 1]) {
            printf("%d ", i + 1); // +1 porque o exercício começa a contar do 1
            total++;
        }
    }

    printf("\nTotal de picos: %d\n", total);
    return 0;
}
