#include <stdio.h>

int potenciaValor(int base, int expoente) {
    int resultado = 1;
    for(int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

void potenciaReferencia(int *base, int expoente) {
    int resultado = 1;
    for(int i = 0; i < expoente; i++) {
        resultado *= *base;
    }
    *base = resultado;
}

int main() {
    int b1 = 2, e1 = 3;
    int b2 = 2, e2 = 3;
    
    int resultado = potenciaValor(b1, e1);
    printf("Por valor: base = %d, resultado = %d\n", b1, resultado);
    
    potenciaReferencia(&b2, e2);
    printf("Por referencia: base = %d\n", b2);
    
    return 0;
}
