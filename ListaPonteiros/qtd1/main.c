#include <stdio.h>

void Soma(int *A, int *B){
    *A = *A + *B;
}

int main(){
    int A, B;
    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    int *pa = &A;
    int *pb = &B;
    
    Soma(&A, &B);

    printf("A soma: %d",A);
    return 0;
}