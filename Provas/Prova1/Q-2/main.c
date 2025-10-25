#include <stdio.h>

int main() {
    char ingredientes[200];
    int i;

    printf("Digite os ingredientes separados por vírgula:\n");
    gets(ingredientes); // lê a linha toda

    printf("\nIngredientes separados:\n");

    for (i = 0; ingredientes[i] != '\0'; i++) {
        if (ingredientes[i] == ',') {
            printf("\n"); // pula linha
        } else {
            printf("%c", ingredientes[i]); // mostra a letra normal
        }
    }

    printf("\n");
    return 0;
}
