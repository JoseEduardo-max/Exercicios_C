#include <stdio.h>

int n1, n2, n3, n4, media;

int main() {
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf ("A media e: %d\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media <= 6.9 && media >=5) {
        printf ("Recuperacao\n");
        } else if (media < 5) {
            printf ("Reprovado\n");
    }

    return 0;
}