#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if (num > 10)
        printf("O numero eh maior do que 10.\n");
    else 
        printf("O numero é diferente de 10.\n");
    
    return 0;
}