// antonio_vendas.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    const int R=5, C=6;
    int A[R][C], B[R][C], V[R][C];
    printf("Digite matriz A (%dx%d):\n", R, C);
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) scanf("%d", &A[i][j]);
    printf("Digite matriz B (%dx%d):\n", R, C);
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) scanf("%d", &B[i][j]);
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) V[i][j] = A[i][j] - B[i][j];

    printf("Matriz VENDAS (A-B):\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) printf("%d ", V[i][j]);
        printf("\n");
    }
    long sum_main=0, sum_sec=0;
    for(int i=0;i<R;i++){
        int jm = i; // principal
        int js = C-1 - i; // secundaria
        if(jm < C) sum_main += V[i][jm];
        if(js >=0 && js < C) sum_sec += V[i][js];
    }
    printf("Soma diagonal principal: %ld\n", sum_main);
    printf("Soma diagonal secundaria: %ld\n", sum_sec);
    if(sum_main > sum_sec) printf("Diagonal principal teve maior volume.\n");
    else if(sum_sec > sum_main) printf("Diagonal secundaria teve maior volume.\n");
    else printf("As duas diagonais tiveram igual volume.\n");
    return 0;
}
