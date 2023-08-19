/*

    1. Faça um programa que leia 10 números inteiros, armazene-os em um vetor,
    solicite um valor de referência inteiro e:

    a) imprima os números do vetor que são maiores que o valor referência
    b) retorne quantos números armazenados no vetor são menores que o valor de
    referência
    c) retorne quantas vezes o valor de referência aparece no vetor

*/
#include <stdio.h>
int main() {
    int tamanho = 10;
    int i, referencia, vet[tamanho], auxiliar = 0;
    char questao;

    printf("Defina um valor de referência: ");
    scanf("%d", &referencia);
    fflush(stdin);

    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d: ", (i + 1), tamanho);
        scanf("%d", &vet[i]);
        fflush(stdin);
    }

    printf("Escolha entre as opções A, B ou C: ");
    scanf(" %c", &questao);
    fflush(stdin);

    switch (questao) {
        case 'A':
        case 'a':
            // variável "auxiliar" utilizada para definir a quantidade de
            // valores maiores que o referência
            for (i = 0; i < tamanho; i++) {
                if (vet[i] > referencia) {
                    auxiliar++;
                    printf("Encontrado valor maior que referência (%d): %d\n",
                           referencia, vet[i]);
                }
            }

            if (auxiliar == 0)
                printf("Não há valores maiores que o referência.");

            break;

        case 'B':
        case 'b':
            // variável "auxiliar" utilizada para definir a quantidade de
            // valores maiores que o referência
            for (i = 0; i < tamanho; i++) {
                if (vet[i] > referencia) auxiliar++;
            }

            if (auxiliar == 0)
                printf("Não há valores maiores que o referência.");
            else
                printf("Há %d valor(es) maior(es) que o referência.", auxiliar);

            break;

        case 'c':
        case 'C':
            // variável "auxiliar" utilizada para definir a quantidade de
            // valores iguais ao referência
            for (i = 0; i < tamanho; i++) {
                if (vet[i] == referencia) auxiliar++;
            }

            if (auxiliar == 0)
                printf("Não há valores iguais ao referência.");
            else
                printf("Há %d valor(es) igual(is) ao referência.",
                       auxiliar);

            break;

        default:
            printf("Opção desconhecida.");
            break;
    }

    return 0;
}