/**
 * 1) Leia uma matriz 10 x 20 que se refere respostas de 10 questões de múltipla
 * escolha, referentes a 20 alunos. Leia também um vetor de 10 posições contendo
 * o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá
 * comparar as respostas de cada candidato com o gabarito e emitir um vetor
 * Resultado, contendo a pontuação correspondente.
 */
#include <stdio.h>
void main() {
    int tlA = 20, tlQ = 10;  // definir numero de alunos e questões

    char respostas[tlA][tlQ], gabarito[tlA];
    int i, j, notas[tlA];

    printf("Matriz respostas: \n");
    for (i = 0; i < tlA; i++) {
        printf(" - Aluno %d de %d: \n", (i + 1), tlA);
        for (j = 0; j < tlQ; j++) {
            printf("  - Defina a resposta da questão %d de %d: ", (j + 1), tlQ);
            scanf("%c", &respostas[i][j]);
            fflush(stdin);
        }
    }

    printf("\nVetor gabarito: \n");
    for (i = 0; i < tlQ; i++) {
        printf(" - Defina o gabarito da questão %d de %d: ", (i + 1), tlQ);
        scanf("%c", &gabarito[i]);
        fflush(stdin);
    }

    for (i = 0; i < tlA; i++) {
        notas[i] = 0;
        for (j = 0; j < tlQ; j++) {
            if (respostas[i][j] == gabarito[j]) {
                notas[i]++;
            }
        }
    }

    printf("\nGabarito: \n");
    for (i = 0; i < tlA; i++) {
        printf(" - Nota do Aluno %d: %d\n", (i + 1), notas[i]);
    }
}