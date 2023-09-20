/**
 * 5- Faça um programa que leia uma string tamanho 20 e inverte a primeira letra
 * da string com a última. O programa deve escrever a string normal e alterada.
 */
#include <stdio.h>
#include <string.h>
void main() {
    char str[20], resultStr[20];

    printf("Digite uma string: ");
    gets(str);

    strcpy(resultStr, str);

    resultStr[strlen(str) - 1] = str[0];
    resultStr[0] = str[strlen(str) - 1];

    printf("String digitada: %s", str);
    printf("\nResultado: %s", resultStr);
}