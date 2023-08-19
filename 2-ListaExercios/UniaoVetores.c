/*

    4. Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
    união entre os 2 vetores anteriores, ou seja, que contem os números dos dois vetores.
    Não deve conter números repetidos.

*/

#include <stdio.h>
int main() {
    int tamanho = 5;
    int i, j, duplicado, qtdeAdicionado = 0, vet1[tamanho], vet2[tamanho], vetUniao[tamanho * 2];

    for (i = 0; i < tamanho * 2; i++) {
        vetUniao[i] = -1;
    }

    printf("Vetor número 1: \n");
    for (i = 0; i < tamanho; i++) {
        printf("1) Digite o valor %d de %d (deve ser um numero natural): ",
               (i + 1), tamanho);
        scanf("%d", &vet1[i]);

        if (!(vet1[i] > 0)) i -=1;
        fflush(stdin);
    }

    printf("\nVetor número 2: \n");
    for (i = 0; i < tamanho; i++) {
        printf("2) Digite o valor %d de %d (deve ser um numero natural): ",
               (i + 1), tamanho);
        scanf("%d", &vet2[i]);

        if (!(vet2[i] > 0)) i -=1;
        fflush(stdin);
    }

    // adiciona o vetor 1 na uniao ignorando os duplicados
    for (i = 0; i < tamanho; i++) {
        duplicado = 0;
        for (j = 0; j < qtdeAdicionado; j++) {
            if (vet1[i] != vetUniao[j]) continue;

            duplicado = 1;
            break;
        }

        if (duplicado == 0) {
            vetUniao[qtdeAdicionado] = vet1[i];
            qtdeAdicionado++;
        }
    }

    // adiciona o vetor 2 na uniao ignorando os duplicados
    for (i = 0; i < tamanho; i++) {
        duplicado = 0;
        for (j = 0; j < qtdeAdicionado; j++) {
            if (vet2[i] != vetUniao[j]) continue;

            duplicado = 1;
            break;
        }

        if (duplicado == 0) {
            vetUniao[qtdeAdicionado] = vet2[i];
            qtdeAdicionado++;
        }
    }

    printf("Vetor 1: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet1[i]);
    }

    printf("\nVetor 2: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet2[i]);
    }

    printf("\nVetor União: ");
    for (i = 0; i < tamanho * 2; i++) {
        if (vetUniao[i] != -1) printf("%d ", vetUniao[i]);
    }

    return 0;
}