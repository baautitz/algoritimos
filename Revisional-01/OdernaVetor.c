/**
 * Faça a leitura de um vetor tamanho 10 de inteiros e ordene de forma crescente
 */

#include <stdio.h>

void main() {
    int i, j, aux, vet[10];

    for (i = 0; i < 10; i++) {
        printf("Insira o valor %d de %d: ", (i + 1), 10);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = i; j < 10; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    printf("Resultado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
}