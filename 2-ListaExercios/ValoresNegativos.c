/*

    3. Leia um vetor de 10 posições e atribua valor 0 para todos os elementos
   que possuírem valores negativos.


*/

#include <stdio.h>
int main() {
    int tamanho = 10;
    int i, vet[tamanho];

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d: ", (i + 1), tamanho);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

    for (i = 0; i < tamanho; i++) {
        if (vet[i] < 0) vet[i] = 0;
    }

    for (i = 0; i < tamanho; i++) {
        printf("%d ", vet[i]);
    }

    return 0;
}