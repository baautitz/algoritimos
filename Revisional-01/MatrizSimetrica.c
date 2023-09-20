/**
 * Verifique se é uma matriz simétrica
 */

#include <stdio.h>
void main() {
    int i, j, igual, mat[3][3];

    for (i = 0; i < 3; i++) {
        printf("Linha %d: \n", (i + 1));
        for (j = 0; j < 3; j++) {
            printf(" - Digite o valor %d de %d: ", (j + 1), 3);
            scanf("%d", &mat[i][j]);
        }
    }

    igual = 1;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (mat[i][j] != mat[j][i]) {
                igual = 0;
                break;
            }
        }
    }

    igual ? printf("\nÉ simétrica!") : printf("\nNão é simétrica");
}