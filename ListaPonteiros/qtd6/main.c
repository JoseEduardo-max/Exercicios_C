#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 10;

    float estatico[n];   

    int *p = (int *)malloc(n*sizeof(float));

    if(p == NULL)  
        printf("Deu ruim");

    printf("dinamico:\n");
    for(int i = 0; i < n; i++){
        printf("Endereco de %d : %x\n", i, p[i]);
    }
    printf("estatico:\n");

    for(int i = 0; i < n; i++){
        printf("Endereco de %d : %x\n", i, estatico[i]);
    }

    return 0;
}