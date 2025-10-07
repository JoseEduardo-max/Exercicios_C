#include <stdio.h>

int main() {
    float dados[10][2], resultado, soma_lucros = 0, media;
    int i, qtd_lucro = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o investimento da filial %d: ", i+1);
        scanf("%f", &dados[i][0]);
        printf("Digite o retorno da filial %d: ", i+1);
        scanf("%f", &dados[i][1]);

        resultado = dados[i][1] - dados[i][0];

        if (resultado > 0) {
            printf("Filial %d teve lucro de %.2f\n", i+1, resultado);
            soma_lucros += resultado;
            qtd_lucro++;
        }
    }

    if (qtd_lucro > 0) {
        media = soma_lucros / qtd_lucro;
        printf("Média dos lucros: %.2f\n", media);
    } else {
        printf("Nenhuma filial deu lucro.\n");
    }

    return 0;
}
