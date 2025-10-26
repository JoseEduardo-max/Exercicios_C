#include <stdio.h>

struct aluno {
    char nome[50];
    float notas[3];
    float media;
};

int main() {
    struct aluno a1, a2, a3, a4, a5;
    struct aluno maior;

    printf("Digite o nome do primeiro aluno: ");
    scanf("%s", a1.nome);
    printf("Digite as 3 notas de %s:\n", a1.nome);
    scanf("%f %f %f", &a1.notas[0], &a1.notas[1], &a1.notas[2]);
    a1.media = (a1.notas[0] + a1.notas[1] + a1.notas[2]) / 3;

    printf("Digite o nome do segundo aluno: ");
    scanf("%s", a2.nome);
    printf("Digite as 3 notas de %s:\n", a2.nome);
    scanf("%f %f %f", &a2.notas[0], &a2.notas[1], &a2.notas[2]);
    a2.media = (a2.notas[0] + a2.notas[1] + a2.notas[2]) / 3;

    printf("Digite o nome do terceiro aluno: ");
    scanf("%s", a3.nome);
    printf("Digite as 3 notas de %s:\n", a3.nome);
    scanf("%f %f %f", &a3.notas[0], &a3.notas[1], &a3.notas[2]);
    a3.media = (a3.notas[0] + a3.notas[1] + a3.notas[2]) / 3;

    printf("Digite o nome do quarto aluno: ");
    scanf("%s", a4.nome);
    printf("Digite as 3 notas de %s:\n", a4.nome);
    scanf("%f %f %f", &a4.notas[0], &a4.notas[1], &a4.notas[2]);
    a4.media = (a4.notas[0] + a4.notas[1] + a4.notas[2]) / 3;

    printf("Digite o nome do quinto aluno: ");
    scanf("%s", a5.nome);
    printf("Digite as 3 notas de %s:\n", a5.nome);
    scanf("%f %f %f", &a5.notas[0], &a5.notas[1], &a5.notas[2]);
    a5.media = (a5.notas[0] + a5.notas[1] + a5.notas[2]) / 3;

    maior = a1; 

    if (a2.media > maior.media) maior = a2;
    if (a3.media > maior.media) maior = a3;
    if (a4.media > maior.media) maior = a4;
    if (a5.media > maior.media) maior = a5;

    printf("\nA maior media e de %s com %.2f\n", maior.nome, maior.media);

    return 0;
}
