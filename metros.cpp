#include<stdio.h>
#include<stdlib.h>
//Fazer um programa em C que pergunta um valor em metros e imprime o correspondente em dec�metros, cent�metros e mil�metros.


int main(){
	float metro;
	int centimetro, decimetro, milimetro;
	
	
	
	printf("Digite o valor em metros\n");
	scanf("%f", &metro);
	decimetro=metro*10;
centimetro=metro*100;
	milimetro=metro*1000;
	printf("O valor em decimetros e %d\n", decimetro);
		printf("O valor em centimetros e %d\n", centimetro);
			printf("O valor em decimetros e %d\n", milimetro);
	
	
}
