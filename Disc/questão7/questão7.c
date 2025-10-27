#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int notas[3];
    float media;
};

int main() {
    struct Aluno alunos[5];
    int i, j;
    float maior_media = 0;
    int indice_maior = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);

        int soma = 0;
        for (j = 0; j < 3; j++) {
            printf("Digite a nota %d de %s: ", j + 1, alunos[i].nome);
            scanf("%d", &alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }

        alunos[i].media = soma / 3.0;

        if (alunos[i].media > maior_media) {
            maior_media = alunos[i].media;
            indice_maior = i;
        }

        printf("\n");
    }

    printf("\nO aluno com a maior média é: %s\n", alunos[indice_maior].nome);
    printf("Média: %.2f\n", alunos[indice_maior].media);

    return 0;
}
