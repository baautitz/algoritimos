/**
 * 7- Faça um programa que leia uma string tamanho 50. Depois da leitura, o
 * programa deverá separar todas as palavras e imprimir na tela com o tamanho de
 * cada uma.
 *
 * Ex.: "Esta Frase Eh Um Exemplo"
 *
 * Esta 4
 * Frase 5
 * Eh 2
 * Um 2
 * Exemplo 7
 */
#include <stdio.h>
#include <string.h>
void main() {
    int adicionandoPalavra, qtdePalavras, posUltimaPalavra;
    char frase[50], palavras[25][50];

    printf("Digite uma frase: ");
    gets(frase);
    strcat(frase, " ");

    qtdePalavras = posUltimaPalavra = 0;
    adicionandoPalavra = 0;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            adicionandoPalavra = 1;
            palavras[qtdePalavras][i - posUltimaPalavra] = frase[i];
        } else {
            if (adicionandoPalavra == 1) {
                palavras[qtdePalavras][i - posUltimaPalavra] = '\0';
                qtdePalavras++;
                adicionandoPalavra = 0;
            }
            posUltimaPalavra = i + 1;
        }
    }

    for (int i = 0; i < qtdePalavras; i++) {
        printf("\n%s - %d", palavras[i], strlen(palavras[i]));
    }
}