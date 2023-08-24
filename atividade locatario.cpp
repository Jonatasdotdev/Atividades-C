#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	#define limite 901
	char nomes[30];
	int armaz[10];
	int i,m,item;
	char n;
	
	//cadastra o usuario
	printf("Digite o nome do locatario\n");
	scanf("%s", &nomes[n]);
		system("cls");
	printf("Usuario  %s cadastrado\n", &nomes[n]);
	printf("Escolha uma opcao\n");
	fflush(stdin);

	//mostra o menu 
	m=1;	
	while(m!=0){
	m=0;	
	printf("1-Adicionar item\n 2-Remover item\n 3- mostre os valores armazenados\n 0-Sair\n ");
		scanf("%d", &m);
	
	//adiciona item
	switch(m){
		
	case 1: 
printf("Digite o item(Apenas numeros)\n");
scanf("%d", &item);
   if(item>=limite){
   	 armaz[i]=limite;
	printf("armazenamento cheio, item foi armazenado ate o limite\n");

 } else armaz[i]=item; 
	printf("item %i armazenado\n", armaz[i]);
 case 2:
 	printf("Usuario %s excluiu item %d", nomes[n] , armaz[i]);
}
}
}


  

  	
 	
 
 	
 
 
 
 
 
 

 

 
 	
	
 	







	
	
	
	

