#include<stdio.h>
//Faça um programa que solicite valores ao usuário e faça a soma dos mesmos até que o número digitado seja 0.

int main(){
	
	int num1=0 , num2=0 , resultado;
	
	
	printf("digite um numero\n");
	scanf("%d" , &num1);
	printf("digite outro numero para a soma\n");
	scanf("%d", &num2);
	resultado = num1+num2;
	printf("%d\n" , resultado);
	while (resultado!=0){
			printf("digite um numero\n");
	scanf("%d" , &num1);
	printf("digite outro numero para a soma\n");
	scanf("%d", &num2);
		resultado = num1+num2;
		
	}
	
}
