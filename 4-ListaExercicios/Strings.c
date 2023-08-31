#include <stdio.h>
#include <string.h>

void main() {
    char str[20];

    printf("Digite seu nome: ");
    fgets(str, 20, stdin);

    for (int i = 0; i < strlen(str) - 1; i++) {
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case '\n':
                break;
            default:
                printf("%c", str[i]);
        }
    }
    printf("\n");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i - 1]);
    }
}