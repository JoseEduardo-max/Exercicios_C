//Peça para o usuário digitar uma senha e compare com a senha correta "senha123". Se for igual, mostre "Acesso permitido". Caso contrário, mostre "Acesso negado".

#include <stdio.h>
#include <string.h>

int main () {
    char senha[20];
    const char senha_correta[] = "senha123";

    printf ("Digite a senha: ");
    scanf ("%19s", senha);

    if (strcmp (senha, senha_correta) == 0) {
        printf ("Acesso permitido\n");
    } else {
        printf ("Acesso negado\n");
    }

    return 0;
}
