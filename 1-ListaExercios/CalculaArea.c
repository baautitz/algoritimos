#include <stdio.h>
void main() {
    int numLados, lado1, lado2;
    float area;

    printf("Digite o número de lados (3, 4 ou 6): ");
    scanf("%d", &numLados);

    if (numLados != 3 && numLados != 4 && numLados != 6) {
        printf("Não sei calcular a área.");
        return;
    }

    printf("Digite o tamanho do lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o tamanho do lado 2: ");
    scanf("%d", &lado2);

    switch (numLados) {
        case 3:
            area = lado1 * lado2 * 1.73 / 4;
            break;
        case 4:
            area = lado1 * lado2;
            break;
        case 6:
            area = 6 * lado1 * lado2 * 1.73 / 4;
            break;
    }

    printf("A área de um polígono de %d lados calculado: %.2f", numLados, area);
}