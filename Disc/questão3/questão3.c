#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[30];
    int idade;
};

int main() {
    struct pessoa n1, n2, n3;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", n1.nome);
    printf("Digite a idade: ");
    scanf("%d", &n1.idade);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", n2.nome);
    printf("Digite a idade: ");
    scanf("%d", &n2.idade);

    printf("Digite o nome da terceira pessoa: ");
    scanf("%s", n3.nome);
    printf("Digite a idade: ");
    scanf("%d", &n3.idade);

    if (n1.idade > n2.idade && n1.idade > n3.idade) {
        printf("A pessoa mais velha e: %s", n1.nome);
    } else if (n2.idade > n1.idade && n2.idade > n3.idade) {
        printf("A pessoa mais velha e: %s", n2.nome);
    } else {
        printf("A pessoa mais velha e: %s", n3.nome);
    }

    return 0;
}