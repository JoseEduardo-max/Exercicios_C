// amanda_competicao.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    printf("Quantos competidores? ");
    if (scanf("%d", &n) != 1)
        return 0;
    char nome[100];
    int *p = malloc(sizeof(int) * n);
    char **nomes = malloc(sizeof(char *) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Nome %d: ", i + 1);
        scanf(" %99s", nome); // para simplificar nomes sem espaços
        nomes[i] = malloc(strlen(nome) + 1);
        strcpy(nomes[i], nome);
        printf("Pontos %s: ", nome);
        scanf("%d", &p[i]);
    }

    int imax = 0, imin = 0;
    for (int i = 1; i < n; i++)
    {
        if (p[i] > p[imax])
            imax = i;
        if (p[i] < p[imin])
            imin = i;
    }
    printf("Maior pontuacao: %s com %d\n", nomes[imax], p[imax]);
    printf("Menor pontuacao: %s com %d\n", nomes[imin], p[imin]);

    for (int i = 0; i < n; i++)
        free(nomes[i]);
    free(nomes);
    free(p);
    return 0;
}
