// carlos_fatores.c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int primes[5] = {2, 3, 5, 7, 11};
    int counts[5] = {0, 0, 0, 0, 0};
    int n = 60;
    printf("Digite %d fatores (cada um deve ser 2,3,5,7 ou 11):\n", n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        int found = 0;
        for (int j = 0; j < 5; j++)
            if (x == primes[j])
            {
                counts[j]++;
                found = 1;
                break;
            }
        if (!found)
        {
            printf("Valor invalido %d ignorado\n", x);
        }
    }
    printf("Frequencias:\n");
    for (int j = 0; j < 5; j++)
        printf("%d x %d\n", counts[j], primes[j]);
    int imax = 0;
    for (int j = 1; j < 5; j++)
        if (counts[j] > counts[imax])
            imax = j;
    printf("Fator com mais frequencia: %d (ocorre %d vezes)\n", primes[imax], counts[imax]);

    long total = 0;
    printf("Expressao: ");
    for (int j = 0; j < 5; j++)
    {
        if (j)
            printf(" + ");
        printf("%dx%d", counts[j], primes[j]);
        total += (long)counts[j] * primes[j];
    }
    printf("\nResultado da soma: %ld\n", total);
    return 0;
}
