// katia_matriz.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    const int R=4, C=5;
    double A[R][C];
    printf("Digite %d valores (4x5):\n", R*C);
    double maxv = -1e300;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%lf", &A[i][j]);
            if(A[i][j] > maxv) maxv = A[i][j];
        }
    }
    if(maxv == 0) maxv = 1; // evita divisão por zero
    double N[R][C];
    double mean[R];
    for(int i=0;i<R;i++){
        double sum = 0;
        for(int j=0;j<C;j++){
            N[i][j] = A[i][j] / maxv;
            sum += N[i][j];
        }
        mean[i] = sum / C;
    }
    /* criar cópia e ordenar linhas por mean decrescente */
    /* usarei um vetor de índices */
    int idx[R];
    for(int i=0;i<R;i++) idx[i]=i;
    for(int i=0;i<R-1;i++){
        for(int j=i+1;j<R;j++){
            if(mean[idx[j]] > mean[idx[i]]) {
                int t = idx[i]; idx[i]=idx[j]; idx[j]=t;
            }
        }
    }
    double M2[R][C];
    for(int i=0;i<R;i++){
        int src = idx[i];
        for(int j=0;j<C;j++) M2[i][j] = N[src][j];
    }

    /* saída */
    printf("Matriz original:\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) printf("%.2f ", A[i][j]);
        printf("\n");
    }
    printf("Medias (normalizadas) por linha:\n");
    for(int i=0;i<R;i++) printf("linha %d: %.4f\n", i+1, mean[i]);
    printf("Matriz final (linhas ordenadas por media decrescente):\n");
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) printf("%.4f ", M2[i][j]);
        printf("\n");
    }
    return 0;
}
