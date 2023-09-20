/**
 * 3- Escreva um programa que leia dois vetores de 10 posições e faça a
 * multiplicação dos elementos de mesmo índice, colocando o resultado em um
 * terceiro vetor. Mostre o vetor resultante.
 */
#include <stdio.h>
#define TAMANHO 10
void main() {
    int i, vet1[TAMANHO], vet2[TAMANHO], resultVet[TAMANHO];

    printf("Vetor 1: \n");
    for (i = 0; i < TAMANHO; i++) {
        printf(" - Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet1[i]);
    }

    printf("Vetor 2: \n");
    for (i = 0; i < TAMANHO; i++) {
        printf(" - Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet2[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        resultVet[i] = vet1[i] * vet2[i];
    }

    printf("\nResultado: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", resultVet[i]);
    }
}