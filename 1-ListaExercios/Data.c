#include <stdio.h>
void main() {
    int dia, mes;

    printf("Digite um dia: ");
    scanf("%d", &dia);
    printf("Digite um mês: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (!(dia >= 1 && dia <= 31)) {
                printf("Dia inválido para o mês escolhido.");
                break;
            }
            switch (mes) {
                case 1:
                    printf("%d de janeiro.", dia);
                    break;
                case 3:
                    printf("%d de março.", dia);
                    break;
                case 5:
                    printf("%d de maio.", dia);
                    break;
                case 7:
                    printf("%d de julho.", dia);
                    break;
                case 8:
                    printf("%d de agosto.", dia);
                    break;
                case 10:
                    printf("%d de outubro.", dia);
                    break;
                case 12:
                    printf("%d de dezembro.", dia);
                    break;
            }
            break;
        case 2:
            if (!(dia >= 1 && dia <= 28)) {
                printf("Dia inválido para o mês escolhido.");
                break;
            }
            printf("%d de fevereiro.", dia);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (!(dia >= 1 && dia <= 30)) {
                printf("Dia inválido para o mês escolhido.");
                break;
            }
            switch (mes) {
                case 4:
                    printf("%d de abril.", dia);
                    break;
                case 6:
                    printf("%d de junho.", dia);
                    break;
                case 9:
                    printf("%d de setembro.", dia);
                    break;
                case 11:
                    printf("%d de novembro.", dia);
                    break;
            }
            break;
        default:
            printf("Mês inválido.");
    }
}