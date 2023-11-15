#include <stdio.h>
void insertionSort(int *lista, int tl) {
    int aux = 0;
    for (int i = 1; i < tl; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (lista[i] < lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
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
    insertionSort(numeros, 7);
    printaLista(numeros, 7);
}