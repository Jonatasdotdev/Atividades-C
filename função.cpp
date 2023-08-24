#include<stdio.h>


int soma(int n1, int n2, int resultado){
	resultado=n1+n2;
	return(resultado);
	
}
int subtracao(int n1, int n2, int resultado){
	resultado=n1-n2;
	return(resultado);
	
	
}
int multiplicacao(int n1, int n2, int resultado){
	
	resultado=n1*n2;
	return(resultado);
}

int divisao(int n1, int n2, int resultado){
	resultado=n1/n2;
	return(resultado);
}
int main(){
	int n1,n2, resultado;
	printf("Insira um numero inteiro\n");
	scanf("%d", &n1);
	printf("Insira um numero inteiro\n");
	scanf("%d", &n2);
	printf("soma %d\n", soma(n1,n2,resultado));
		printf("subtracao %d\n", subtracao(n1,n2,resultado));
			printf("multiplicacao %d\n", multiplicacao(n1,n2,resultado));
				printf("divisao %d\n", divisao(n1,n2,resultado));
	
	return(0);
}
