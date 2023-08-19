#include <stdio.h>
int main() {
    int numero, soma, alt, i;

    for (i = 1000; i <= 9999; i++) {
        alt = i;
        soma = 0;
        
        while (alt > 0) {
            soma += alt % 100;
            alt = alt / 100;
        }

        if ((soma * soma) == i)
            printf("%d é um número especial!\n", i);
    }

    return 0;
}