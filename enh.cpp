#include <stdio.h>
#include <math.h>


struct lista{
	char[5];
	int total;
};

char menu(void){
	char op;
	system("cls");
	printf("1- incluir elemento na lista\n");
	printf("2- excluir elemento na lista\n");
	printf("3- exibir elemento na lista\n");
	printf("4- alterar elemento na lista\n");
	printf("5- pesquisar elemento na lista\n");
	printf("6- excluir toda a lista\n");
	printf("0- sair\n");
	printf("Opcao: ");
	scanf("%c", &op);
	return op;
};

