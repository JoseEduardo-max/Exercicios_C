#include <stdio.h>

int main() {
    float notas[15], soma = 0, media;
    int i;

    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15;

    if (media > 8) {
        media = 10;
    }

    printf("Média perfeita: %.2f\n", media);

    return 0;
}
