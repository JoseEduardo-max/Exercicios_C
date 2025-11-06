#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20];

    printf("Digite a primeira string: ");
    scanf("%s", str1);

    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strlen(str1) > strlen(str2)) {
        printf("A primeira string e maior: %s\n", str1);
    } else if (strlen(str1) < strlen(str2)) {
        printf("A segunda string e maior: %s\n", str2);
    } else {
        printf("As duas strings tem o mesmo tamanho.\n");
    }

    //recebe uma string e verifica se ela contem a letra 'a'
    char str3[30];
    printf("Digite uma string para verificar se contem a Letra 'A':");
    scanf("%s", str3);

    if (strchr(str3, 'a') != NULL || strchr(str3, 'A') != NULL) {
        printf("A string contem a letra 'A'.\n");
    } else {
        printf("A string nao contem a letra 'A'.\n");
    }

    return 0;
}