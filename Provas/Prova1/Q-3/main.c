#include <stdio.h>

int contarPicos(int v[], int n) {
    int i, picos = 0;
    for (i = 1; i < n - 1; i++) {
        if (v[i] > v[i-1] && v[i] > v[i+1]) {
            printf("Pico encontrado na posicao: %d\n", i);
            picos++;
        }
    }
    return picos;
}

int main() {
    int volumes[] = {3, 7, 4, 6, 2, 9, 5};
    int total = contarPicos(volumes, 7);
    printf("Total de picos: %d\n", total);
    return 0;
}
