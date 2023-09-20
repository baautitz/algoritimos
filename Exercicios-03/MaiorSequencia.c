/**
 * 5- Determine o tamanho T da maior sequência de números iguais em um vetor A
 * de tamanho 10.
 *
 * Exemplo: Supor que sejam digitados os seguintes valores para
 * A: 1 2 6 6 7 7 7 7 1 1, então T = 4
 */
#include <stdio.h>
#define TAMANHO 10
void main() {
    int i, ultimaSequencia = 0, maiorSequencia = 0, vet[TAMANHO];

    for (i = 0; i < TAMANHO; i++) {
        printf("Defina o valor %d de %d: ", (i + 1), TAMANHO);
        scanf("%d", &vet[i]);
    }

    for (i = 1; i < TAMANHO; i++) {
        if (vet[i - 1] == vet[i]) {
            if (ultimaSequencia == 0) {
                ultimaSequencia = 1;
            }

            ultimaSequencia++;
        } else {
            if (ultimaSequencia != 0 && (ultimaSequencia > maiorSequencia)) {
                maiorSequencia = ultimaSequencia;
            }

            ultimaSequencia = 0;
        }
    }

    printf("\nMaior sequencia: %d", maiorSequencia);
}