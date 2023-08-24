/**
 * 4- Dado um vetor de 10 inteiros, escreva um programa que imprima a soma de
 * todos os múltiplos de 3 que estão contidos no vetor.
 */
#include <stdio.h>
#define TAMANHO 10
void main() {
    int i, somaMultiplos = 0, vet[TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        printf("Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if ((vet[i] % 3) != 0) continue;

        printf("Encontrado múltiplo de 3: %d\n", vet[i]);
        somaMultiplos += vet[i];
    }

    printf("\nResultado da soma: %d", somaMultiplos);
}