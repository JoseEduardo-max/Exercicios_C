#include <stdio.h>
#include <string.h>

int main() {
    char p1[20], p2[20];

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s", p1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s", p2);
    
    if (strcmp(p1, p2) == 0) {
        printf("Os nomes sao iguais.");
    } else {
        printf("Os nomes sao diferentes.");
    }

        return 0;
}
