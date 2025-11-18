#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    FILE *arq;
    char string[100];
    int i;
    arq = fopen ("arquivo.txt", "w");

    if (arq == NULL) {
        printf("Erro na arbertura do arquivo");
        system("pause");
        exit(1);
    }

    printf("Entre com a string a ser gravada no arquivo:");
    gets(string);

    for (i = 0; i < strlen(string); i++) {
        fputc(string[i], arq);
    }
    fclose(arq);

    return 0;
}