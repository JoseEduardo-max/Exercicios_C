#include <stdio.h>

int main () {
    int c = 10;
    int *p;
    p = &c;

    printf("Conteudo apontado por p:%d \n", *p);

    *p = 12;
    printf("Conteudo apontado por p:%d \n", *p);
    printf("Conteudo de cont: %d \n", c);
    
    return 0;
}