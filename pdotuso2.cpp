#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

void cadastrarProduto(struct Produto **listaProdutos, int *numProdutos) {
    struct Produto *novoProduto;
    novoProduto = (struct Produto*) malloc(sizeof(struct Produto));
    if (novoProduto == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }
    printf("Digite o nome do produto: ");
    scanf("%s", novoProduto->nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &novoProduto->preco);
    printf("Digite a quantidade em estoque do produto: ");
    scanf("%d", &novoProduto->quantidade);
    (*listaProdutos) = (struct Produto*) realloc((*listaProdutos), ((*numProdutos) + 1) * sizeof(struct Produto));
    (*listaProdutos)[*numProdutos] = *novoProduto;
    (*numProdutos)++;
    free(novoProduto);
}

void exibirProdutos(struct Produto *listaProdutos, int numProdutos) {
    printf("Lista de Produtos:\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Nome: %s\n", listaProdutos[i].nome);
        printf("Preço: %.2f\n", listaProdutos[i].preco);
        printf("Quantidade em estoque: %d\n", listaProdutos[i].quantidade);
        printf("--------------------\n");
    }
}

void buscarProduto(struct Produto *listaProdutos, int numProdutos, char *nomeProduto) {
    int encontrado = 0;
    for (int i = 0; i < numProdutos; i++) {
        if (strcmp(listaProdutos[i].nome, nomeProduto) == 0) {
            printf("Produto encontrado!\n");
            printf("Nome: %s\n", listaProdutos[i].nome);
            printf("Preço: %.2f\n", listaProdutos[i].preco);
            printf("Quantidade em estoque: %d\n", listaProdutos[i].quantidade);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Produto não encontrado!\n");
    }
}

int main() {
    struct Produto *listaProdutos;
    int numProdutos = 0;
    int opcao;
    char nomeProduto[50];
    listaProdutos = (struct Produto*) malloc(0);
    if (listaProdutos == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    do {
        printf("Digite a opção desejada:\n");
        printf("1 - Cadastrar novo produto\n");
        printf("2 - Exibir lista de produtos\n");
        printf("3 - Buscar produto por nome\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                cadastrarProduto(&listaProdutos, &numProdutos);
                break;
            case 2:
                exibirProdutos(listaProdutos, numProdutos);
                break;
            case 3:
                printf("Digite o nome


