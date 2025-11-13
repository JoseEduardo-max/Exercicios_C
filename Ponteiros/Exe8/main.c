#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x, y;
};

int main () {
struct ponto q, *p;

p = &q;
(*p).x = 10;
p -> y = 20;

printf("valor de x eh %d\nvalor de y eh %d", p -> x, p -> y);

return 0;
}