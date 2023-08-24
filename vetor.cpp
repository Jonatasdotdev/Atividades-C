#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	// cadastrar usuarios e mostrar um menu para adicionar objeto na memoria , remover ou sair.
	
char usua[50][50];
char u;
int i, arm;
	
	
	
	
	
	printf("digite o nome do usuario\n");
	scanf("%s", &usua[u]);
	printf("usuario %s cadastrado", usua[u]);
	system("cls");
	
	do
	printf("1-Adicionar objeto\n2-Remover Objeto\n0-Sair");
		
		
	while(i!=0);
	printf("1-Adicionar objeto\n2-Remover Objeto\n0-Sair");
		scanf("%d", &i);
	
	
	switch(i){
		case 1:
			printf("Objeto Adicionado");
			break;
			
		case 2:
			printf("Objeto Removido");
				break;
		case 0:
			system("exit");
			break;
	}

if(i==1){
	printf("objeto adicionado");
	if(i==2){
			printf("objeto removido");
	}
}	else system("exit");
	
}

