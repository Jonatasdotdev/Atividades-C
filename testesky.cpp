#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	// cadastrar usuarios e mostrar um menu para adicionar objeto na memoria , remover ou sair.
	//limitar a memoria para 900, mostrar quanto foi armazenado.
	
	
char usua[50][50];
char u;
int i, arm, l;
int memoria[10], lix[9];
	
	printf("digite o nome do usuario\n");
	scanf("%s", &usua[u]);
		system("cls");
	printf("usuario %s cadastrado \n", usua[u]);


   

    while(i!=0){
        i = 0;

        printf("1-Adicionar item\n 2-Remover item\n 3- mostre os valores armazenados\n 0-Sair\n ");
		scanf("%d", &i);

        switch(i){
		case 1:
			printf("Digite o dado\n");
			scanf("%d", &memoria[arm]);
			arm=memoria[arm];
			printf("item Adicionado\n");
			break;
		case 2:
			printf("item Removido\n");
			for(arm=0;arm<9;arm++){
			 lix[l]=memoria[arm];
			 break;
			}
			case 3:
				 for(arm=0;arm<9;arm++){
	        	} printf("os valores armazenados sao %d", memoria[arm]);
	        	break;	
			case 0:
			system("exit");
			break;
			system("cls");			
			}
						
	    }
	   
	    
    }
	

