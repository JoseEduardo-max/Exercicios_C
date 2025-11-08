#include <stdio.h>

float pesoIdeal (float h, int sexo) {
    float peso;

    if (sexo == 1) {
        peso = (72.7 * h) - 58;
    } else if (sexo == 2) {
        peso = (62.1 * h) - 44.7;
    } else {
        printf("Sexo inválido! Use 1 para masculino e 2 para feminino.\n ");
        peso = 0;
    }

    return peso;
}

int main () {
    float altura, resultado;
    int sexo;

    printf("Digite a sua altura : ");
    scanf("%f", &altura);

    printf("Digite o seu sexo: ");
    scanf("%d", &sexo);

    resultado = pesoIdeal(altura, sexo);

    if (resultado != 0) {
        printf("O peso ideal e: %.0f", resultado);
    }

    return 0;
}