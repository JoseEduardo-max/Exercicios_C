#include <stdio.h>
#include <ctype.h> 

void paraMaiusculas(char *str) {
    while (*str != '\0') { 
        *str = toupper(*str);  
        str++;  
    }
}

int main() {
    char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    paraMaiusculas(texto); 

    printf("Frase em maiusculas: %s\n", texto);

    return 0;
}
