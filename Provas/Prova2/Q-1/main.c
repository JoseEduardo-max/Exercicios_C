// jorge_precos.c
#include <stdio.h>
#include <stdlib.h>

int cmp_desc(const void *a, const void *b)
{
    double da = *(const double *)a;
    double db = *(const double *)b;
    if (da < db)
        return 1;
    if (da > db)
        return -1;
    return 0;
}

int main(void)
{
    int n;
    printf("Quantos precos? ");
    if (scanf("%d", &n) != 1)
        return 0;
    double *v = malloc(sizeof(double) * n);
    for (int i = 0; i < n; i++)
        scanf("%lf", &v[i]);
    qsort(v, n, sizeof(double), cmp_desc);
    printf("Precos em ordem decrescente:\n");
    for (int i = 0; i < n; i++)
        printf("%.2f ", v[i]);
    printf("\nMaior: %.2f\nMenor: %.2f\n", v[0], v[n - 1]);
    free(v);
    return 0;
}
