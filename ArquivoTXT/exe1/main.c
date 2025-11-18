#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fp;
    fp = fopen ("exemplo.bin", "wb");
    if (fp == NULL) {
        printf("Erro: arquivo não existe.");
    }

    fclose(fp);
    
    return 0;
}