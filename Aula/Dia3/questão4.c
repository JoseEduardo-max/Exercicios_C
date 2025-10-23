//leia tres nomes e imprima aquele que vem primeiro em ordem alfabetica

#include <stdio.h>
#include <string.h>

int main() {
    char n1[20], n2[20], n3[20];

    printf ("Digite o primeiro nome: ");
    scanf ("%19s", n1);

    printf ("Digite o segundo nome: ");
    scanf("%19s", n2);

    printf ("Digite o terceiro nome: ");
    scanf ("%19s", n3);

    if (strcmp (n1, n2) <= 0 && strcmp (n1, n3) <= 0) {
        printf ("O nome que vem primeiro em ordem alfabetica e: %s\n" , n1);
    } else if (strcmp (n2, n1) <= 0 && strcmp (n2, n3) <= 0) {
        printf ("O nome que vem primeiro em ordem alfabetica e: %s\n" , n2);
    } else {
        printf ("O nome que vem primeiro em ordem alfabetica e: %s\n" , n3);
    }

    return 0;
}