#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float notas[3];
};

int main() {
    struct Aluno alunos[5], auxAluno;

    int i, j;
    float maiorNota1, maiorMedia, menorMedia, somaMedia, media;

    char opcao;

    for (i = 0; i < 5; i++) {
        printf("Nome de aluno: ");
        gets(alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        for (j = 0; j < 3; j++) {
            printf("Nota da %dª prova: ", j + 1);
            scanf("%d", &alunos[i].notas[j]);
        }
    }

    while (1) {
        printf("\nAlunos:\n");
        printf("(a) Encontre o aluno com maior nota da primeira prova.\n");
        printf("(b) Encontre o aluno com maior média geral.\n");
        printf("(c) Encontre o aluno com menor média geral.\n");
        printf("(d) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.\n");
        printf("\nDigite a função desejada: ");
        scanf("%c", &opcao);
        switch (opcao) {
            case 'a':
                maiorNota1 = 0;
                for (i = 0; i < 5; i++) {
                    if (alunos[i].notas[0] > maiorNota1) {
                        maiorNota1 = alunos[i].notas[0];
                        auxAluno = alunos[i];
                    }
                }
                printf("\nAluno com maior nota da primeira prova: %s", alunos[i].nome);
                break;
            case 'b':
                maiorMedia = 0;
                for (i = 0; i < 5; i++) {
                    for (j = 0; j < 3; j++) {
                        media += alunos[i].notas[j];
                    }
                    media /= 3;
                    if (maiorMedia > media) {
                        maiorMedia = media;
                        auxAluno = alunos[i];
                    }
                }
                printf("\nAluno com maior media: %s", auxAluno.nome);
                break;
            case 'c':
                menorMedia = 0;
                for (i = 0; i < 5; i++) {
                    for (j = 0; j < 3; j++) {
                        media += alunos[i].notas[j];
                    }
                    media /= 3;
                    if (menorMedia < media) {
                        menorMedia = media;
                        auxAluno = alunos[i];
                    }
                }
                printf("\nAluno com menor media: %s", auxAluno.nome);
                break;
            case 'd':
                for (i = 0; i < 5; i++) {
                    for (j = 0; j < 3; j++) {
                        media += alunos[i].notas[j];
                    }
                    media /= 3;
                    if (media >= 6) {
                        printf("Aluno: %s - Aprovado", alunos[i].nome);
                    } else {
                        printf("Aluno: %s - Reprovado", alunos[i].nome);
                    }
                }
                break;
            default:
                break;
        }
    }

    return 0;
}
