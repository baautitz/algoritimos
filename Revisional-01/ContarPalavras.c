/**
 * Faça a leitura de uma frase e returne quantas palavras possui
 */

#pragma GCC diagnostic ignored "-Wattribute-warning"

#include <stdio.h>
#include <string.h>

void main() {
    char str[255];
    int palavras = 0, i;

    printf("Digite uma frase: ");
    gets(str);
    strcat(str, " ");

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            palavras++;
        }
    }

    printf("\nA frase possui %d palavaras.", palavras);
}