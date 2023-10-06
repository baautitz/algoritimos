/**
 * Seja uma estrutura para descrever os livros de uma loja, contendo os seguintes campos:
 *
 * título: string de tamanho 15
 * autor: string de tamanho 20
 * estilo: string de tamanho 10
 * código: inteiro
 * preço: real
 *
 * a) Escrever a definição da estrutura livro
 *
 * Seja o seguinte trecho de programa:
 * // declaração de variáveis  de livros
 * struct livro vetlivro[50];
 * // definição da menu:
 *
 * printf("Digite I para incluir um livro. \n");
 * printf("Digite L para listar o nome de todos os livros. \n");
 * printf("Digite A para procurar livro por autor. \n");
 * printf("Digite T para procurar livro por título. \n");
 * printf("Digite E para procurar livro por estilo. \n");
 * printf("Digite M para calcular a média de preço de todos os livros. \n");
 * printf("Digite S para sair \n");
 *
 * b) Complementar o programa para atender o menu acima.
 */
#include <stdio.h>
#include <string.h>

struct Livro {
    char nome[15], autor[20], estilo[10];
    int codigo;
    float preco;
};

void pausa() {  // adicionei essa função pq o system("pause") não funcinou direito
    printf("Pressione ENTER tecla para continuar...");
    fflush(stdin);
    getchar();
}

void clear() {  // adicionei essa função pq o system("cls") não funcinou direito
    printf("\e[1;1H\e[2J");
}

void main() {
    struct Livro vetLivro[50];

    int qtdeLivros = 0, codLivro, encontrou;
    float precoLivro, totalPrecos, mediaPrecos;
    char option, nomeLivro[15], autorLivro[20], estiloLivro[10];

    while (1) {
        clear();
        printf("\nLoja de Livros:\n");
        printf(" - Digite I para incluir um livro. \n");
        printf(" - Digite L para listar o nome de todos os livros. \n");
        printf(" - Digite A para procurar livro por autor. \n");
        printf(" - Digite T para procurar livro por título. \n");
        printf(" - Digite E para procurar livro por estilo. \n");
        printf(" - Digite M para calcular a média de preço de todos os livros. \n");
        printf(" - Digite S para sair \n");
        printf("\nDigite a função desejada: ");
        scanf("%c", &option);
        switch (option) {
            case 'i':
            case 'I':
                if (qtdeLivros < 50) {
                    printf("\nInclusão de livro:\n");

                    printf(" - Digite o código do livro: ");
                    scanf("%d", &codLivro);

                    printf(" - Digite o nome do livro: ");
                    fflush(stdin);
                    fgets(nomeLivro, 15, stdin);

                    printf(" - Digite o nome do autor: ");
                    fflush(stdin);
                    fgets(autorLivro, 20, stdin);

                    printf(" - Digite o estilo do livro: ");
                    fflush(stdin);
                    fgets(estiloLivro, 10, stdin);

                    printf(" - Digite o preço do livro: ");
                    fflush(stdin);
                    scanf("%f", &precoLivro);

                    vetLivro[qtdeLivros].codigo = codLivro;
                    vetLivro[qtdeLivros].preco = precoLivro;

                    strcpy(vetLivro[qtdeLivros].nome, nomeLivro);
                    strcpy(vetLivro[qtdeLivros].autor, autorLivro);
                    strcpy(vetLivro[qtdeLivros].estilo, estiloLivro);

                    printf("\nLivro registrado com sucesso!\n");
                    printf("\nDados do livro: \n");
                    printf(" - Código: %d\n", vetLivro[qtdeLivros].codigo);
                    printf(" - Nome: %s", vetLivro[qtdeLivros].nome);
                    printf(" - Autor: %s", vetLivro[qtdeLivros].autor);
                    printf(" - Estilo: %s", vetLivro[qtdeLivros].estilo);
                    printf(" - Preço: %.2f\n\n", vetLivro[qtdeLivros].preco);

                    qtdeLivros++;

                    pausa();
                } else {
                    printf("\nLimite de livros atingido!\n\n");
                    pausa();
                }
                break;
            case 'l':
            case 'L':
                if (qtdeLivros > 0) {
                    printf("\nLista de livros: \n");
                    for (int i = 0; i < qtdeLivros; i++) {
                        printf(" - Código: %d\n", vetLivro[i].codigo);
                        printf(" - Nome: %s", vetLivro[i].nome);
                        printf(" - Autor: %s", vetLivro[i].autor);
                        printf(" - Estilo: %s", vetLivro[i].estilo);
                        printf(" - Preço: %.2f\n\n", vetLivro[i].preco);
                    }
                    pausa();
                } else {
                    printf("\nNão há nenhum livro registrado.\n\n");
                    pausa();
                }
                break;
            case 'a':
            case 'A':
                if (qtdeLivros > 0) {
                    printf("\nDigite o autor do livro: ");
                    fflush(stdin);
                    fgets(autorLivro, 15, stdin);

                    encontrou = 0;
                    for (int i = 0; i < qtdeLivros; i++) {
                        if (strcmp(autorLivro, vetLivro[i].autor) == 0) {
                            if (encontrou == 0) {
                                printf("\nLivros encontrados:\n");
                                encontrou = 1;
                            }

                            printf(" - Código: %d\n", vetLivro[i].codigo);
                            printf(" - Nome: %s", vetLivro[i].nome);
                            printf(" - Autor: %s", vetLivro[i].autor);
                            printf(" - Estilo: %s", vetLivro[i].estilo);
                            printf(" - Preço: %.2f\n\n", vetLivro[i].preco);
                        }
                    }

                    if (encontrou == 0) printf("\nNenhum livro encontrado.\n\n");
                    pausa();
                } else {
                    printf("\nNão há nenhum livro registrado.\n\n");
                    pausa();
                }
                break;
            case 't':
            case 'T':
                if (qtdeLivros > 0) {
                    printf("\nDigite o título do livro: ");
                    fflush(stdin);
                    fgets(nomeLivro, 15, stdin);

                    encontrou = 0;
                    for (int i = 0; i < qtdeLivros; i++) {
                        if (strcmp(nomeLivro, vetLivro[i].nome) == 0) {
                            if (encontrou == 0) {
                                printf("\nLivros encontrados:\n");
                                encontrou = 1;
                            }

                            printf(" - Código: %d\n", vetLivro[i].codigo);
                            printf(" - Nome: %s", vetLivro[i].nome);
                            printf(" - Autor: %s", vetLivro[i].autor);
                            printf(" - Estilo: %s", vetLivro[i].estilo);
                            printf(" - Preço: %.2f\n\n", vetLivro[i].preco);
                        }
                    }

                    if (encontrou == 0) printf("\nNenhum livro encontrado.\n\n");
                    pausa();
                } else {
                    printf("\nNão há nenhum livro registrado.\n\n");
                    pausa();
                }
                break;
            case 'e':
            case 'E':
                if (qtdeLivros > 0) {
                    printf("\nDigite o estilo do livro: ");
                    fflush(stdin);
                    fgets(estiloLivro, 15, stdin);

                    encontrou = 0;
                    for (int i = 0; i < qtdeLivros; i++) {
                        if (strcmp(estiloLivro, vetLivro[i].estilo) == 0) {
                            if (encontrou == 0) {
                                printf("\nLivros encontrados:\n");
                                encontrou = 1;
                            }

                            printf(" - Código: %d\n", vetLivro[i].codigo);
                            printf(" - Nome: %s", vetLivro[i].nome);
                            printf(" - Autor: %s", vetLivro[i].autor);
                            printf(" - Estilo: %s", vetLivro[i].estilo);
                            printf(" - Preço: %.2f\n\n", vetLivro[i].preco);
                        }
                    }

                    if (encontrou == 0) printf("\nNenhum livro encontrado.\n\n");
                    pausa();
                } else {
                    printf("\nNão há nenhum livro registrado.\n\n");
                    pausa();
                }
                break;
            case 'm':
            case 'M':
                if (qtdeLivros > 0) {
                    totalPrecos = 0;
                    mediaPrecos = 0;
                    for (int i = 0; i < qtdeLivros; i++) {
                        totalPrecos += vetLivro[i].preco;
                    }
                    mediaPrecos = totalPrecos / qtdeLivros;
                    printf("\nPreço médio dos livros: %.2f\n", mediaPrecos);
                    pausa();
                } else {
                    printf("\nNão há nenhum livro registrado.\n\n");
                    pausa();
                }
                break;
            case 's':
            case 'S':
                return;
                break;
            default:
                break;
        }
    }
}
