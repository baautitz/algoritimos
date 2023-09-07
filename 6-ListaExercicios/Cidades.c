/**
 * 2) Faça um programa que receba:
 *
 * - Uma matriz com o nome de cinco cidades diferentes;
 * - Uma matriz 5x5 com a distância entre as cidades, sendo que na diagonal
 * principal deve ser colocada automaticamente distância zero, ou seja, não deve
 * ser permitida a digitação.
 * - O consumo de combustível de um veículo, ou seja, quantos quilômetros este
 * veículo percorre com um litro de combustível

 * O programa deverá calcular e mostrar:
 * - Os percursos que não ultrapassam 250 quilômetros (os percursos são
 * compostos pelos nomes das cidades de origem e pelos nomes das cidades de
 * destino)
 * - O usuário irá digitar o percurso (1, 2), e o programa apresenta o nome das
 * cidades escolhidas, a quantidade de combustível necessária para o veículo
 * percorrer e a distância entre elas.
 */
#include <stdio.h>
#include <string.h>
void main() {
    int tlC = 5;  // definir numero de cidades

    char cidades[tlC][255];
    float distancias[tlC][tlC], consumo;
    int de, para;

    printf("Matriz cidades: \n");
    for (int i = 0; i < tlC; i++) {
        printf(" - Defina o nome da cidade %d: ", i);

        fgets(cidades[i], 255, stdin);
        fflush(stdin);

        cidades[i][strlen(cidades[i]) - 1] = '\0';
    }

    printf("\nMatriz distancias: \n");
    for (int i = 0; i < tlC - 1; i++) {
        printf(" - Distancias da cidade '%s' (%d): \n", cidades[i], i);
        for (int j = i; j < tlC; j++) {
            if (i == j) {
                distancias[i][i] = 0;
            } else {
                printf("  - Distância (km) para '%s' (%d): ", cidades[j], j);

                scanf("%f", &distancias[i][j]);
                fflush(stdin);

                distancias[j][i] = distancias[i][j];
            }
        }
        printf("\n");
    }

    printf("\nDefina o consumo de combustivel/km em litros: ");
    scanf("%f", &consumo);

    printf("Entre com os numeros das cidades: ");
    scanf("%d %d", &de, &para);

    printf("\nRelatorio entre as cidades '%s' (%d) e '%s' (%d):", cidades[de], de, cidades[para], para);
    printf("\n - Distância entre as cidades: %.2f km", distancias[de][para]);
    printf("\n - Combustivel necessario para a viagem: %.2f litros\n\n", (distancias[de][para] * consumo));
}