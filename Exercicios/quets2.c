#include <stdio.h>

int n1, n2, n3;

int main() {
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf ("O maior numero e: %d\n", n1);
    } else if (n2 >= n1 && n2 >= n3) {
        printf ("O maior numero e: %d\n", n2);
    } else {
        printf ("O maior numero e: %d\n", n3);
    }

    return 0;
}