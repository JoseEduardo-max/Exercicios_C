#include <stdio.h>

int main() {
    char receita[100] = "sal,Tomate,Queijo,Manjericao";
    int i = 0;

    printf("Ingredientes separados:\n");

    while (receita[i] != '\0') {
        if (receita[i] == ',') {
            printf("\n"); // quebra a linha quando achar vírgula
        } else {
            printf("%c", receita[i]); // mostra a letra normal
        }
        i++;
    }

    printf("\n");
    return 0;
}
