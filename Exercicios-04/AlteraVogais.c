/**
 * 4 – Faça um programa que leia uma string e troque todas vogais por # e
 * imprima a nova palavra.
 */
#include <stdio.h>
#include <string.h>
void main() {
    char str[20];

    printf("Digite uma string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                str[i] = '#';
                break;
        }
    }

    printf("Resultado: ");
    puts(str);
}