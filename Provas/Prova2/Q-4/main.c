#include <stdio.h>

int main() {
    int fatores[60] = {2,3,5,7,11,2,3,3,5,7,11,2,2,3,7,11,5,7,11,3};
    int cont[5] = {0}; // para 2, 3, 5, 7, 11
    int primos[5] = {2, 3, 5, 7, 11};
    int i, maior = 0, indice_maior = 0, soma = 0;

    // contar frequência
    for(i = 0; i < 20; i++) {
        if(fatores[i] == 2) cont[0]++;
        else if(fatores[i] == 3) cont[1]++;
        else if(fatores[i] == 5) cont[2]++;
        else if(fatores[i] == 7) cont[3]++;
        else if(fatores[i] == 11) cont[4]++;
    }

    // achar o que mais aparece
    for(i = 0; i < 5; i++) {
        if(cont[i] > maior) {
            maior = cont[i];
            indice_maior = i;
        }
    }

    // soma especial
    for(i = 0; i < 5; i++) {
        soma += primos[i] * cont[i];
    }

    printf("Fator que mais aparece: %d (%d vezes)\n", primos[indice_maior], maior);
    printf("Soma especial: %d\n", soma);

    return 0;
}
