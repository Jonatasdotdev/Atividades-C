#include<stdio.h>


int main(){
	
	int alun[10][20];
	int notas[10];
	int n;
	int i;
	int soma=0;
	float media;


	for(i=0; i<4;i++){
		printf("Escreva o nome de 10 alunos\n");
	scanf("%s", &alun[i]);
	
	
}

for(n=0; n<4;n++){
	
	printf("Escreva a nota de 10 alunos\n");
	scanf("%d", &notas[n]);
	
	soma=soma+notas[n];
	
}
media = soma / 4;
printf("A media e %.1f", media);



	}

	










