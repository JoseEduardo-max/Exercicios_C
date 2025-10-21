#include <stdio.h>

int main() {
    char receita[100] = "sal,Tomate,Queijo,Manjericao";
    int i = 0;

    printf("Ingredientes separados:\n");

    while (receita[i] != '\0') {
        if (receita[i] == ',') {
            printf("\n"); 
        } else {
            printf("%c", receita[i]); 
        }
        i++;
    }

    printf("\n");
    return 0;
}
