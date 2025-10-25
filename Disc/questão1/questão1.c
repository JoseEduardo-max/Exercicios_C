#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct pessoa p1;

    printf ("Digite o nome da pessoa: ");
    scanf ("%s", p1.nome);

    printf ("Digite a idade da pessoa: ");
    scanf ("%d", &p1.idade);

    printf("nome e %s e tem a idade %d", p1.nome, p1.idade);

    return 0;
}