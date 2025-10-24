/*Peça ao usuário para preencher uma matriz 3x3 com números inteiros.
 Mostre:- A matriz completa- A soma da diagonal principal
 Dica: diagonal principal é quando i == j.*/
 #include <stdio.h>

int main () {
    int matriz[3][3];
    int soma_diagonal = 0;

    // Leitura dos valores da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma_diagonal += matriz[i][j];
            }
        }
    }
    // Exibição da matriz completa
    printf("Matriz completa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    // Exibição da soma da diagonal principal
    printf("Soma da diagonal principal: %d\n", soma_diagonal);
    
    return 0;

}