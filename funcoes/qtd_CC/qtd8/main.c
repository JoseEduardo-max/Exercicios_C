#include <stdio.h>
#include <stdlib.h>

int main () {
    int c = 10;
    int *p;

    p = &c;
    printf("Conteudo appontado por p: %d \n", *p);

    *p = 12;
    printf("Conteudo apontado por p: %d \n", c);

    return 0;
}