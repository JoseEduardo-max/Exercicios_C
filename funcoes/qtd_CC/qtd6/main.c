#include <stdio.h>

void ordenaVetor (float v[], int tamanho) {
    float temp;

    for (int i = 0; i < tamanho - 1; i ++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main () {
    int n;

    printf("Digite a quantidade de notas da equipe: ");
    scanf("%d", &n);

    float notas[n];

    for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    ordenaVetor(notas, n);

    printf("\nNotas ordenadas em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    return 0;
}