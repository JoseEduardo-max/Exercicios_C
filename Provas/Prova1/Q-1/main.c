// paula_contar_substr.c
#include <stdio.h>
#include <stdlib.h>

/* implementações simples sem usar string.h */
size_t my_strlen(const char *s)
{
    size_t n = 0;
    while (s && s[n])
        n++;
    return n;
}

int count_substr(const char *text, const char *pat)
{
    size_t n = my_strlen(text);
    size_t m = my_strlen(pat);
    if (m == 0 || n == 0 || m > n)
        return 0;
    int count = 0;
    for (size_t i = 0; i + m <= n; ++i)
    {
        int ok = 1;
        for (size_t j = 0; j < m; ++j)
        {
            if (text[i + j] != pat[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            count++;
    }
    return count;
}

int main(void)
{
    char text[1000];
    char pat[200];
    printf("Digite o texto (uma linha):\n");
    if (!fgets(text, sizeof(text), stdin))
        return 0;
    /* remove newline */
    size_t ln = my_strlen(text);
    if (ln > 0 && text[ln - 1] == '\n')
        text[ln - 1] = 0;
    printf("Digite a substring a buscar:\n");
    if (!fgets(pat, sizeof(pat), stdin))
        return 0;
    ln = my_strlen(pat);
    if (ln > 0 && pat[ln - 1] == '\n')
        pat[ln - 1] = 0;

    int occ = count_substr(text, pat);
    printf("Ocorrencias encontradas: %d\n", occ);
    return 0;
}
