#include <stdio.h>

int ehPrimo (int x) {
    if (x < 2) {
        return 0;
    }

    for (int i = 0; i * i <= x; i++ ) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main () {
    for (int n = 1; n <= 1000; n++) {
        if (ehPrimo(n)) {
            printf("E primo\n, n");
        } else {
            printf("Nao e primo\n, n");
        }
    }

    return 0;
}

