#include <stdio.h>
void bubbleSort(int *lista, int tl) {
    int aux = 0;
    for (int i = 0; i < tl - 1; i++) {
        for (int j = 0; j < tl - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }
}
void printaLista(int *lista, int tl) {
    for (int i = 0; i < tl; i++) {
        printf("%d ", *lista);
        lista++;
    }
    printf("\n");
}
void main() {
    int numeros[] = {3, 4, 9, 2, 5, 1, 8};
    printaLista(numeros, 7);
    bubbleSort(numeros, 7);
    printaLista(numeros, 7);
}
