/*

    5. Faça um programa que leia um vetor de 15 posições e o compacte, ou seja,
    elimine as posições com valor zero. Para isso, todos os elementos a frente do
    valor zero, devem ser movidos uma posição para trás no vetor

*/
#include <stdio.h>
int main() {
    int tamanho = 15;
    int i, j, alt, vet[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d: ", (i + 1), tamanho);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < (tamanho - 1); j++) {
            if (vet[j] == 0) {
                alt = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = alt;
            }
        }
    }

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}