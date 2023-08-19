/*

    2. Faca um programa que leia um vetor de 10 posições e verifique se existem
   valores iguais e os escreva na tela.

*/

#include <stdio.h>
void main() {
    int tamanho = 10;
    int vet[tamanho], duplicados[tamanho / 2], i, j, k, duplicadoConhecido,
        qtdeDuplicados = 0;

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d (deve ser inteiro e maior que 0): ",
               (i + 1), tamanho);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

    for (i = 0; i < (tamanho / 2); i++) {
        duplicados[i] = -1;
    }

    for (i = 0; i < (tamanho - 1); i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vet[i] != vet[j]) continue;

            duplicadoConhecido = 0;
            for (k = 0; k < (tamanho / 2); k++) {
                if (vet[i] == duplicados[k]) duplicadoConhecido = 1;
            }

            if (duplicadoConhecido == 0) {
                for (k = 0; k < (tamanho / 2); k++) {
                    if (duplicados[k] == -1 && duplicadoConhecido == 0) {
                        duplicados[k] = vet[i];
                        duplicadoConhecido = 1;
                        qtdeDuplicados++;
                    }
                }
            }
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