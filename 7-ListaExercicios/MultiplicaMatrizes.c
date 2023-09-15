/**
 * 2) Multiplicação de Matrizes: Crie um programa que realiza a multiplicação de duas matrizes (4,5) x (5,6) e exibe o
 * resultado. A multiplicação de duas matrizes é um procedimento que envolve calcular os produtos escalares entre os
 * elementos das linhas de uma matriz pelo elementos das colunas da outra matriz. Para realizar a multiplicação de duas
 * matrizes A e B, onde A tem dimensão (m x n) e B tem dimensão (n x p), o resultado C terá dimensão (m x p).
 */

#include <stdio.h>

void printaMatriz(int lin, int col, int mat[lin][col]) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            printf("%-4d ", mat[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int i, j, k, mat1[4][5], mat2[5][6], matRes[4][6];

    printf("Matriz 1: \n");
    for (i = 0; i < 4; i++) {
        printf(" - Linha %d: \n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  - Defina o valor %d de %d: ", (j + 1), 5);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nMatriz 2: \n");
    for (i = 0; i < 5; i++) {
        printf(" - Linha %d: \n", i + 1);
        for (j = 0; j < 6; j++) {
            printf("  - Defina o valor %d de %d: ", (j + 1), 6);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            matRes[i][j] = 0;
            for (k = 0; k < 5; k++) {
                matRes[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Matriz 1: \n");
    printaMatriz(4, 5, mat1);

    printf("\nMatriz 2: \n");
    printaMatriz(5, 6, mat2);

    printf("\nMatriz Resultante: \n");
    printaMatriz(4, 6, matRes);
}