#include <stdio.h>
void main() {
    float mat[100][100];
    int tamanhoMatriz;

    printf("Defina o tamanho do triangulo: ");
    scanf("%d", &tamanhoMatriz);

    for (int i = 0; i < tamanhoMatriz; i++) {
        mat[i][0] = 1;
        for (int j = 1; j < i; j++) {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
        mat[i][i] = 1;
    }

    for (int i = 0; i < tamanhoMatriz; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%.0f ", mat[i][j]);
        }
        printf("\n");
    }
}