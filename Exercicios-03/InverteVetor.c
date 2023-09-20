/**
 * 2- Escrever um programa para ler um vetor de 20 posições. Em seguida, trocar
 * o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o
 * antepenúltimo, e assim sucessivamente. Imprimir o vetor após a troca.
 */
#include <stdio.h>
#define TAMANHO 20
void main() {
    int i, aux, vet[TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        printf("Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor inicial: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vet[i]);
    }

    for (i = 0; i < (TAMANHO / 2); i++) {
        aux = vet[i];
        vet[i] = vet[(TAMANHO - 1) - i];
        vet[(TAMANHO - 1) - i] = aux;
    }

    printf("\nResultado: ");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vet[i]);
    }
}