/**
 * 4) Identificação de Matriz Simétrica: Escreva um programa que verifica se uma matriz 5 x 5 é simétrica ou não.
 * Uma matriz simétrica é uma matriz quadrada (ou seja, o número de linhas é igual ao número de colunas) que é igual à
 * sua própria transposta. Em outras palavras, uma matriz A é simétrica se, e somente se, a matriz transposta de A é
 * igual a A.
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
    int i, j, simetrica, coluna, linha, mat[100][100], matTransposta[100][100];

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
            matTransposta[i][j] = mat[j][i];
        }
    }

    simetrica = 1;
    for (i = 0; i < coluna; i++) {
        for (j = 0; j < linha; j++) {
            if (matTransposta[i][j] != mat[i][j]) {
                simetrica = 0;
            }
        }
    }

    printf("\nMatriz: \n");
    printaMatriz(linha, coluna, mat);

    if (simetrica) {
        printf("\nA matriz é simétrica!");
    } else {
        printf("\nA matriz NÃO é simétrica!");
    }
}
