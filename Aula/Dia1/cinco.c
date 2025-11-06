#include <stdio.h>
#include <stdlib.h>

 int main() {
    char ch;
    printf("digite um simbolo de pontuação: ");
    ch = getchar();
    switch(ch){
         case '.': printf("ponto.\n"); break;
         case '.': printf("virgula.\n"); break;
         case '.': printf("dois pontos.\n"); break;
         case '.': printf("ponto e virgula.\n"); break;
         default: printf("nao eh pontuacao.\n");

    }
    return 0;
 }