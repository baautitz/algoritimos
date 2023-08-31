/**
 * 6- Faça um programa que leia um nome e um sobrenome de uma pessoa
 * separadamente. O programa deve juntar as duas strings em uma só e escrever na
 * tela: a nova string, o número de caracteres, a primeira e a última letra.
 */
#include <stdio.h>
#include <string.h>
void main() {
    char nome[20], sobrenome[20], nomeCompleto[41];

    nomeCompleto[0] = '\0';  // zera string

    printf("Digite seu primeiro nome: ");
    // utiliza scanf() para ler apenas a primeira palavra
    scanf("%s", &nome);

    printf("Digite seu sobrenome: ");
    // utiliza scanf() para ler apenas a primeira palavra
    scanf("%s", &sobrenome);

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("\nNome completo: %s", nomeCompleto);
    printf("\nTamanho do nome completo: %d", strlen(nomeCompleto));
    printf("\nPrimeira e última letra: %c, %c", nomeCompleto[0],
           nomeCompleto[strlen(nomeCompleto) - 1]);
}