#include<stdio.h>
#include<stdlib.h>


int main(){

	
	int alun[10][20];
	int notas[10];
	int n;
	int i;
	int soma=0, maior=0;
	float media;
	

//primeiro for soma as notas (cuidado com a chave)
	for(i=0; i<4;i++){
		printf("Escreva o nome e a nota de 10 alunos\n");
	scanf("%s", &alun[i]);
	scanf("%d", &notas[n]);
	soma=soma+notas[n];
}


	



//tira a media
     media = soma / 4;	
printf("\nA media e %.1f", media);

//mostrar o maior valor

for(n=1;n<4;n++){
	if(notas[n]>maior){
		maior=notas[n];
	}
}
printf("\nA maior nota foi %d", maior);
}







	

	










