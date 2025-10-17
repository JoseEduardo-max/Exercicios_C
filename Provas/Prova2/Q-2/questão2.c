// samara_variacao.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Quantos dias? ");
    if(scanf("%d", &n)!=1) return 0;
    int *v = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) scanf("%d", &v[i]);
    int *d = malloc(sizeof(int)*n);
    if(n>0) d[0]=0;
    for(int i=1;i<n;i++){
        if(v[i-1]==0) d[i]=0; // evita divisão por zero (decisao)
        else d[i] = (v[i] - v[i-1]) * 100 / v[i-1];
    }
    printf("Variacoes (percentuais inteiros):\n");
    for(int i=0;i<n;i++) printf("%d ", d[i]);
    printf("\n");
    free(v); free(d);
    return 0;
}
