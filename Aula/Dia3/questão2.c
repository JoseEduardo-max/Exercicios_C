//crie uma struct chamada produto com os campos nome e preço.

#include <stdio.h>
#include <string.h>

struct produto {
    char nome[50];
    float preco;
};

//leia 3 produtos e mostre o nome e o preço médio

struct produto produtos[3];

int main () {
    printf ("Digite o nome e o preco dos 3 produtos: \n");
    for (int i = 0; i < 3; i++) {
        printf ("Produto %d:\n", i + 1);
        printf ("Nome: ");
        scanf ("%s", produtos[i].nome);
        printf ("Preco: ");
        scanf ("%f", &produtos[i].preco);
    }

    float soma = 0.0;
    for (int i = 0; i < 3; i++) {
        soma += produtos[i].preco;
    }
    float preco_medio = soma / 3.0;

    printf ("O prece medio e: %.2f\n", preco_medio);

    for ( int i = 0; i < 3; i++) 
        printf ("%s - R$ %.2f\n", produtos[i].nome, produtos[i].preco);

    return 0;

}