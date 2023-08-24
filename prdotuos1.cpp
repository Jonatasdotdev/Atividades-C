#include<stdio.h>


struct produtos{
	char nome[10];
	float preco;
	int estoque;
};

int main(){
	
	struct produtos produto;
	
	printf("Cadastro de produto=======================\n");
	printf("Digite o nome do produto\n");
	scanf("%s", &produto.nome);
	printf("Digite o preço do produto\n");
	scanf("%f" , &produto.preco);
	printf("informe a quantidade em estoque\n");
	scanf("%d", produto.estoque);
	printf("Produtos cadastrados\n %s, preco: %f, quantidade em estoque: %d ", produto.nome, produto.preco, produto.estoque);
}

