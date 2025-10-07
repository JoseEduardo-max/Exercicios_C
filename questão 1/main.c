#include <stdio.h>

int main() {
    float notas[10], soma = 0, media;
    int i, qtd_aprovados = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);

        if (notas[i] > 4) {
            soma += notas[i];
            qtd_aprovados++;
        }
    }

    if (qtd_aprovados > 0) {
        media = soma / qtd_aprovados;
        printf("Média funcional: %.2f\n", media);
    } else {
        printf("Nenhum aluno aprovado.\n");
    }

    return 0;
}