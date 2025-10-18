// sergio_intersecao.c
#include <stdio.h>
#include <stdlib.h>

int contains(int *arr, int n, int val)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == val)
            return 1;
    return 0;
}

int main(void)
{
    int nx, ny;
    printf("tamanho X e Y: ");
    if (scanf("%d %d", &nx, &ny) != 2)
        return 0;
    int *X = malloc(sizeof(int) * nx);
    int *Y = malloc(sizeof(int) * ny);
    for (int i = 0; i < nx; i++)
        scanf("%d", &X[i]);
    for (int i = 0; i < ny; i++)
        scanf("%d", &Y[i]);
    int *Z = malloc(sizeof(int) * (nx < ny ? nx : ny));
    int zn = 0;
    for (int i = 0; i < nx; i++)
    {
        if (contains(Y, ny, X[i]) && !contains(Z, zn, X[i]))
        {
            Z[zn++] = X[i];
        }
    }
    printf("Interseccao (Z): ");
    for (int i = 0; i < zn; i++)
        printf("%d ", Z[i]);
    printf("\n");
    free(X);
    free(Y);
    free(Z);
    return 0;
}
