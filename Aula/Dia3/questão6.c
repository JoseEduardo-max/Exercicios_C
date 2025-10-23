//Crie uma struct chamada Aluno com o campo nome. Leia dois nomes e diga se eles são iguais ou diferentes.

#include <stdio.h>
#include <string.h>

int main () {
    struct Aluno {
        char nome[20];
    };

    struct Aluno aluno1, aluno2;

    printf ("Digite o nome do primeiro aluno: ");
    scanf ("%19s", aluno1.nome);

    printf ("Digite o nome do segundo aluno: ");
    scanf ("%19s", aluno2.nome);

    if (strcmp (aluno1.nome, aluno2.nome) == 0) {
        printf ("Os nomes sao iguais\n");
    } else {
        printf ("Os nomes sao diferentes\n");
    }

    return 0;
}