#include <stdio.h>

float calculaAreaTriangulo(float base, float altura) {
    float area;
    area = (base * altura) / 2;
    return area;
}

int main () {
    float b, h, resultado;

    printf("Digite a base do trinagulo: ");
    scanf("%f", &b);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &h);

    resultado = calculaAreaTriangulo( b, h);

    printf("A area do triangulo e: %.0f\n", resultado);

    return 0;
}
