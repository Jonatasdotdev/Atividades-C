#include<stdio.h>


struct pessoa{
	char nome[50];
	int idade;
	float altura;
};

int main(){
	
	struct pessoa A;
	struct pessoa B;
	
	printf("Digite o nome da pessoa\n");
	scanf("%s", &A.nome);
	printf("Digite a idade\n");
		scanf("%d", &A.idade);
		printf("Digite a altura\n");
		scanf("%f", &A.altura);
		
		printf("Digite o nome da pessoa\n");
	scanf("%s", &B.nome);
	printf("Digite a idade\n");
		scanf("%d", &B.idade);
		printf("Digite a altura\n");
		scanf("%f", &B.altura);
		
		printf("segue dados da pessoa A %s,%d,%f\n", A.nome, A.idade, A.altura);
		printf("segue dados da pessoa B %s,%d,%f", B.nome, B.idade, B.altura);
}
