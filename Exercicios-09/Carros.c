#include <stdio.h>
#include <string.h>

struct carro {
    char marca[15], cor[10];
    int ano;
    float preco;
};

int main() {
    struct carro vetcarros[20];

    int i, ano, existe;
    char marca[15], cor[10];
    float preco;

    char opcao;

    for (i = 0; i < 20; i++) {
        printf("Digite os dados do carro %d:\n", i + 1);
        printf("Marca: ");
        gets(vetcarros[i].marca);
        printf("Ano: ");
        scanf("%d", &vetcarros[i].ano);
        printf("Cor: ");
        gets(vetcarros[i].cor);
        printf("Preço: ");
        scanf("%f", &vetcarros[i].preco);
    }

    while (1) {
        printf("\nLoja de Carros:\n");
        printf(" - Digite A para imprimir os carros que tenham preço igual ou menor ao preço recebido.\n");
        printf(" - Digite B para ler a marca de um carro e imprimir as informações de todos os carros dessa marca.\n");
        printf(" - Digite C para ler uma marca, ano e cor e informar se existe ou não um carro com essas características.\n");
        printf("\nDigite a função desejada: ");
        scanf("%c", &opcao);
        switch (opcao) {
            case 'a':
                printf("\nDefina o preço máximo: ");
                scanf("%f", &preco);
                printf("\nCarros com preço igual ou menor que %.2f:\n", preco);
                for (i = 0; i < 20; i++) {
                    if (vetcarros[i].preco <= preco) {
                        printf("Marca: %s, Cor: %s, Ano: %d\n", vetcarros[i].marca, vetcarros[i].cor, vetcarros[i].ano);
                    }
                }
                break;
            case 'b':
                printf("\nDefina a marca do carro: ");
                gets(marca);
                printf("Carros da marca %s:\n", marca);
                for (i = 0; i < 20; i++) {
                    if (strcmp(vetcarros[i].marca, marca) == 0) {
                        printf("Preço: %.2f, Ano: %d, Cor: %s\n", vetcarros[i].preco, vetcarros[i].ano, vetcarros[i].cor);
                    }
                }
                break;
            case 'c':
                printf("\nDefina o ano do carro: ");
                scanf("%d", &ano);

                printf("\nDefina a marca do carro: ");
                gets(marca);

                printf("\nDefina a cor do carro: ");
                gets(cor);

                existe = 0;
                for (i = 0; i < 20; i++) {
                    if (strcmp(vetcarros[i].marca, marca) == 0 && strcmp(vetcarros[i].cor, cor) == 0 && vetcarros[i].ano == ano) {
                        existe = 1;
                        break;
                    }
                }
                if (existe == 1) {
                    printf("%f", vetcarros[i].preco);
                } else
                    printf("Não existe.");
                break;
            default:
                exit(0);
                break;
        }
    }

    return 0;
}