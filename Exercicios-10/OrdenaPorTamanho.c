#include <stdio.h>
#include <string.h>

#define TF 50
void sortByLength(char vet[][TF], int tl) {
    char aux[TF];
    int i, j;
    for (i = 0; i < tl - 1; i++) {
        for (j = i + 1; j < tl; j++) {
            int minIndex = i;
            if (strlen(vet[i]) > strlen(vet[j])) {
                minIndex = j;
            }
            strcpy(aux, vet[i]);
            strcpy(vet[i], vet[minIndex]);
            strcpy(vet[minIndex], aux);
        }
    }
}

void main() {
    char listaPalavras[5][TF] = {"Vinicius", "Teste", "Computador", "Mouse", "Fernando"};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%s ", listaPalavras[i]);
    }
    printf("\n");

    sortByLength(listaPalavras, 5);

    for (i = 0; i < 5; i++) {
        printf("%s ", listaPalavras[i]);
    }
    printf("\n");
}
