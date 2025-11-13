#include <stdio.h>

int main () {
    int mat[2][2] = {{1,2},{3,4}};
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\n", mat[i][j]);
        }
    }

    return 0;
}

/*
int main () {
    int mat[2][2] = {{1,2},{3,4}};
    int *p = &mat[0][0];
    int i;

    for (i = 0; i < 2; i++){
        printf("%d\n", *(p + i));
    }

    return 0;
}
*/