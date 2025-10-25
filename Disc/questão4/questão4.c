#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    for (int i = strlen(palavra); i >= 0; i--){
        printf("%c", palavra[i]);
    }

    return 0;

}