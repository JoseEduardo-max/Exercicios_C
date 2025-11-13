#include <stdio.h>

void inverterNumero(int *num) {
    int resto, invertido = 0;
    int original = *num; 

    while (original != 0) {
        resto = original % 10; 
        invertido = invertido * 10 + resto;
        original /= 10; 
    }

    *num = invertido; 
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    inverterNumero(&numero); 

    printf("Numero invertido: %d\n", numero);

    return 0;
}
