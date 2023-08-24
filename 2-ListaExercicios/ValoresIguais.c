/*

    2. Faca um programa que leia um vetor de 10 posições e verifique se existem
    valores iguais e os escreva na tela.

*/

#include <stdio.h>
void main() {
    int tamanho = 10;
    int vet[tamanho], duplicados[tamanho / 2], i, j, k, duplicadoConhecido,
        qtdeDuplicados = 0;

    for (i = 0; i < (tamanho / 2); i++) {
        duplicados[i] = -1;
    }

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d (deve ser um numero natural): ",
               (i + 1), tamanho);
        scanf("%d", &vet[i]);

        if (!(vet[i] > 0)) i -=1;
        fflush(stdin);
    }

    for (i = 0; i < (tamanho - 1); i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vet[i] != vet[j]) continue;

            duplicadoConhecido = 0;
            for (k = 0; k < (tamanho / 2); k++) {
                if (vet[i] == duplicados[k]) {
                    duplicadoConhecido = 1;
                    break;
                }
            }

            if (duplicadoConhecido == 1) continue;

            duplicados[qtdeDuplicados] = vet[i]; // adiciona valor duplicado ao vetor de duplicados, caso não ainda seja conhecido
            qtdeDuplicados++;
        }
    }

    if (qtdeDuplicados == 0)
        printf("Não há valores duplicados.");
    else {
        printf("Valores duplicados: ");
        for (i = 0; i < (tamanho / 2); i++) {
            if (duplicados[i] != -1) printf("%d ", duplicados[i]);
        }
    }
}