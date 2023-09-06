#include <stdio.h>
void main() {
    float mat[100][100];
    int tamanhoMatriz;

    printf("Defina o tamanho do triangulo: ");
    scanf("%d", &tamanhoMatriz);

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            mat[i][j] = 0;
        }
    }

    mat[0][0] = mat[1][0] = mat[1][1] = 1;
    for (int i = 2; i < tamanhoMatriz; i++) {
        mat[i][0] = 1;
        for (int j = 1; j < i; j++) {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
        mat[i][i] = 1;
    }

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j < tamanhoMatriz; j++) {
            if (mat[i][j] == 0)
                printf(" ");
            else
                printf("%.0f ", mat[i][j]);
        }
        printf("\n");
    }
}