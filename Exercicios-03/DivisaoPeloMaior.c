/**
 * 1- Faça um programa que leia um vetor de 10 posições de números inteiros e
 * divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor
 * resultante após os cálculos.
 */
#include <stdio.h>
#define TAMANHO 10
void main() {
    int vet[TAMANHO], resultVet[TAMANHO];
    int maiorNumero = 0, i;

    for (i = 0; i < TAMANHO; i++) {
        printf("Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (vet[i] > maiorNumero) maiorNumero = vet[i];
    }

    printf("\nMaior número encontrado: %d", maiorNumero);

    for (i = 0; i < TAMANHO; i++) {
        resultVet[i] = vet[i] / maiorNumero;
    }

    printf("\n\nResultado: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", resultVet[i]);
    }
}