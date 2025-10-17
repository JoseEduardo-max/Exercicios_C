// augusto_transforma.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Tamanho do vetor? ");
    if(scanf("%d", &n)!=1) return 0;
    int *v = malloc(sizeof(int)*n);
    int *u = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) scanf("%d", &v[i]);
    if(n>0) u[0] = v[0];
    for(int i=1;i<n;i++) u[i] = v[i] + v[i-1];
    printf("Vetor original:\n");
    for(int i=0;i<n;i++) printf("%d ", v[i]);
    printf("\nVetor transformado:\n");
    for(int i=0;i<n;i++) printf("%d ", u[i]);
    printf("\n");
    free(v); free(u);
    return 0;
}
