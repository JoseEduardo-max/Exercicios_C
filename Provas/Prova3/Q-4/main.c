// renata_matriz.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    const int R=4, C=5;
    double A[R][C];
    printf("Digite %d valores (4x5):\n", R*C);
    for(int i=0;i<R;i++) for(int j=0;j<C;j++) scanf("%lf", &A[i][j]);

    double mean[R];
    for(int i=0;i<R;i++){
        double s=0;
        for(int j=0;j<C;j++) s+=A[i][j];
        mean[i] = s / C;
    }
    int idx[R];
    for(int i=0;i<R;i++) idx[i]=i;
    /* ordenar por mean crescente */
    for(int i=0;i<R-1;i++) for(int j=i+1;j<R;j++)
        if(mean[idx[i]] > mean[idx[j]]) { int t=idx[i]; idx[i]=idx[j]; idx[j]=t; }

    double M2[R][C];
    for(int i=0;i<R;i++){
        int s = idx[i];
        for(int j=0;j<C;j++) M2[i][j] = A[s][j];
    }

    printf("Matriz original:\n");
    for(int i=0;i<R;i++){ for(int j=0;j<C;j++) printf("%.2f ", A[i][j]); printf("\n"); }
    printf("Medias por grupo:\n");
    for(int i=0;i<R;i++) printf("grupo %d: %.4f\n", i+1, mean[i]);
    printf("Matriz reordenada (media crescente):\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) printf("%.4f ", M2[i][j]);
        printf("\n");
    }
    return 0;
}
