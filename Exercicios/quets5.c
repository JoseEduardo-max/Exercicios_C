//Crie um programa que leia 5 números inteiros e armazene-os em um vetor.Depois, mostre todos os valores e a soma deles 

#include <stdio.h>

int main () {
    int numeros[5];
    int soma = 0;

    // Leitura dos números
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Exibição dos números e da soma
    printf("Numeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }
    printf("Soma dos numeros: %d\n", soma);

    return 0;
}