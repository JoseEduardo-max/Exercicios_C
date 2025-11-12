#include <stdio.h>

int main(){

    int A, B;
    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    int *pa = &A;
    int *pb = &B;

    if(pa > pb)
        printf("Maior endereco: %x com o conteudo: %d\nMenor endereco: %x com o conteudo: %d", pa, A, pb, B);
    else 
        printf("Maior endereco: %x com o conteudo: %d\nMenor endereco: %x com o conteudo: %d", pb, B, pa, A);

    return 0;
}