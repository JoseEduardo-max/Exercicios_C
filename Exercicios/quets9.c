/* Crie uma struct chamada Aluno com os campos:- nome (string de até 50 caracteres)- idade (int)- media (float)
 Leia os dados de 3 alunos, e depois mostre:- O nome do aluno com maior média- A média geral da turma*/

#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 3
#define MAX_NOME 50

struct Aluno {
    char nome[MAX_NOME];
    int idade;
    float media;
};

int main () {
    struct Aluno alunos[MAX_ALUNOS];
    float soma_medias = 0.0;
    int indice_maior_media = 0;

    // Leitura dos dados dos alunos
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].nome);
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].idade);
        printf("Digite a media do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);

        soma_medias += alunos[i].media;

        // Verifica se este aluno tem a maior média até agora
        if (alunos[i].media > alunos[indice_maior_media].media) {
            indice_maior_media = i;
        }
    }

    // Cálculo da média geral da turma
    float media_geral = soma_medias / MAX_ALUNOS;

    // Exibição dos resultados
    printf("O aluno com maior media eh: %s\n", alunos[indice_maior_media].nome);
    printf("A media geral da turma eh: %.2f\n", media_geral);

    return 0;
}
