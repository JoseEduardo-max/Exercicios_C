// livia_picos.c
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    printf("Quantos valores? ");
    if(scanf("%d", &n)!=1) return 0;
    int *v = malloc(sizeof(int)*n);
    for(int i=0;i<n;i++) scanf("%d", &v[i]);

    int total = 0;
    printf("Picos encontrados nas posicoes: ");
    for(int i=1;i<=n-2;i++){
        if(v[i] > v[i-1] && v[i] > v[i+1]) {
            if(total) printf(", ");
            printf("%d", i+1); // posição 1-based
            total++;
        }
    }
    if(n<3) printf("nenhum");
    printf("\nTotal de picos: %d\n", total);
    free(v);
    return 0;
}
