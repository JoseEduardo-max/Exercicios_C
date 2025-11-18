#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro
{
    char nome[20], rua[20];
    int idade;
};

int main()
{
    FILE *f = fopen("arquivo.txt", "wb");
    struct cadastro c, cad[4] = {"Ricardo", "Rua 1", 31,
                                 "Carlos", "Rua 2", 28,
                                 "Ana", "Rua 3", 45,
                                 "Bianca", "Rua 4", 32};

    fwrite(cad, sizeof(struct cadastro), 4, f);
    fclose(f);

    f = fopen("arquivo. txt", "rb");
    fseek(f, 2 * sizeof(struct cadastro), SEEK_SET);
    fread(&c, sizeof(struct cadastro), 1, f);
    printf("%s\n %s\n %d\n", c.nome, c.rua, c.idade);

    fclose(f);

    return 0;
}