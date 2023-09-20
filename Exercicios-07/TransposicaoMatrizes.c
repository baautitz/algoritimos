/**
 * 3) Transposição de Matriz:
 *
 * Implemente um programa para calcular a transposta de uma matriz.
 *
 * A matriz transposta de uma matriz dada é obtida trocando as linhas pelas colunas e as colunas pelas linhas da matriz
 * original. Em outras palavras, os elementos que estavam nas linhas da matriz original serão movidos para as colunas da
 * matriz transposta e vice-versa.
 *
 * A notação comum para representar a matriz transposta de uma matriz A é A^T.
 *
 * Por exemplo, se você tiver a seguinte matriz A:
 *
 * A = | 1  2  3 |
 *     | 4  5  6 |
 *
 * A matriz transposta A^T será:
 *
 * A^T = | 1  4 |
 *       | 2  5 |
 *       | 3  6 |
 *
 * Observe como as linhas da matriz original se tornaram as colunas da matriz transposta e vice-versa.
 *
 * A matriz transposta é uma operação importante em álgebra linear e é usada em várias aplicações, como resolução de
 * sistemas de equações lineares, cálculo de determinantes, diagonalização de matrizes e muito mais. Em programação,
 * calcular a matriz transposta é um procedimento comum ao lidar com matrizes, e muitas linguagens de programação,
 * incluindo C, fornecem funções ou métodos para realizar essa operação.
 */

#include <stdio.h>

void printaMatriz(int lin, int col, int mat[][100]) {
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            printf("%-4d ", mat[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int i, j, coluna, linha, mat[100][100], matRes[100][100];

    printf("Defina o numero de linhas e colunas: ");
    scanf("%d %d", &linha, &coluna);

    printf("Matriz: \n");
    for (i = 0; i < linha; i++) {
        printf(" - Linha %d: \n", i + 1);
        for (j = 0; j < coluna; j++) {
            printf("  - Defina o valor %d de %d: ", (j + 1), coluna);
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < coluna; i++) {
        for (j = 0; j < linha; j++) {
            matRes[i][j] = mat[j][i];
        }
    }

    printf("\nMatriz: \n");
    printaMatriz(linha, coluna, mat);

    printf("\nMatriz Resultante: \n");
    printaMatriz(coluna, linha, matRes);
}
