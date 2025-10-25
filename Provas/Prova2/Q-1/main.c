#include <stdio.h>

int main() {
    float precos[10] = {54.50, 12.00, 5.50, 33.75, 8.00, 16.20, 2.23, 48.70, 31.20, 22.80};
    int i, j;
    float temp;

    // Ordenar os preços em ordem decrescente (Bubble Sort simples)
    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(precos[i] < precos[j]) {
                temp = precos[i];
                precos[i] = precos[j];
                precos[j] = temp;
            }
        }
    }

    printf("Preços em ordem decrescente:\n");
    for(i = 0; i < 10; i++) {
        printf("%.2f ", precos[i]);
    }

    printf("\n\nMaior preço: %.2f\n", precos[0]);
    printf("Menor preço: %.2f\n", precos[9]);

    return 0;
}
