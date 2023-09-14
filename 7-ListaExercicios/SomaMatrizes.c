#include <stdio.h>

int counter = 1;

void leMatriz(int tam, int mat[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        printf(" - Linha %d: \n", i + 1);
        for (int j = 0; j < tam; j++) {
            printf("  - Defina o valor %d de %d: ", (j + 1), tam);
            scanf("%d", &mat[i][j]);
        }
    }
}

void printaMatriz(int tam, int mat[tam][tam]) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%02d ", mat[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int tam = 4;
    int mat1[tam][tam], mat2[tam][tam], matRes[tam][tam];

    printf("Matriz 1: \n");
    leMatriz(tam, mat1);

    printf("Matriz 2: \n");
    leMatriz(tam, mat2);

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matRes[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Matriz 1: \n");
    printaMatriz(tam, mat1);

    printf("\nMatriz 2: \n");
    printaMatriz(tam, mat2);

    printf("\nMatriz Resultado: \n");
    printaMatriz(tam, matRes);
}