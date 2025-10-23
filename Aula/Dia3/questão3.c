//leia 3 palavras separadas e junte todas em uma unica string com espaço entre elas

#include <stdio.h>
#include <string.h>


int main () {
    char palavra1[20], palavra2[20], palavra3[20];
    char frase[100] = "";

    printf ("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf ("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    printf ("Digite a terceiro palavra: ");
    scanf("%s", palavra3);

    strcpy(frase, palavra1);
    strcat(frase, " ");
    strcpy(frase, palavra2);
    strcat(frase, " ");
    strcpy(frase, palavra3);

    printf ("\nFrase completa: %s\n", frase);


    return 0;

}