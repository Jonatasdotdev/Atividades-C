#include<stdlib.h>
#include<iostream>
#include<cstdlib>

using namespace std;
struct fila{
	string item[10];
	int total;
	int com, fim;
};

char menu() {
    char op;
     
    system("cls");
    cout << "1 - Incluir arquivo na fila de impressao" << endl;
    cout << "2 - Excluir arquivo da fila de impressao" << endl;
    cout << "3 - Exibir fila de impressao" << endl;
    cout << "4 - Limpar fila de impressao" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> op;
     
    return op;
}

void inicia_fila(fila&f){
	f.total = 0;
	f.com= 0;
	f.fim= -1;
	
}

bool fila_cheia(fila f){
	return f.total == 10;
}

bool fila_vazia(fila f){
	return f.total == 0;
}

void adicionar(fila&f, string arquivo){
	if (fila_cheia(f)){
		cout<< " Fila esta cheia"<< endl;
	}else{
		string arquivo = f.item[f.fim];
		f.fim = (f.fim+1)%10;
		f.total++;
		cout<<"item"<<"arquivo"<<"Incluido na impressao"<< endl;
	}
	system("pause");
}

void retirar(fila&f){
	if (fila_vazia(f)){
		cout<< " Fila esta vazia"<< endl;
	}else{
		string arquivo = f.item[f.com]; 
		f.com = (f.com+1)%10;
		f.total--;
		cout<<"Item"<<"arquivo"<<"removido da impressao"<< endl;
	}
	system("pause");
}
void exibir(fila&f){
	if (fila_vazia(f)){
		cout<< " Fila esta vazia"<< endl;
	}else{
		int i = f.com;
		int quant = 1;
		while (quant <= f.total){
			cout<<f.item[i]<<"--"<<endl;
			i=(i+1)%10;
			quant++;
		}
		cout<<endl;
	}
	system("pause");
	}
	
	void limpar_tudo(fila&f){
	if (fila_vazia(f)){
		cout<< " Fila esta vazia"<< endl;
	}else{
		inicia_fila(f);
		cout<<"Fila limpa"<<endl;
	}
	system("pause");
}


int main(){
	fila f;
	char opcao;
	inicia_fila(f);
	
	do{
		opcao=menu();
		switch (opcao){
			case '1':{
				string arquivo;
				cout<<"Digite o nome do arquivo"<<endl;
				cin>>arquivo;
				adicionar(f, arquivo);
				break;
			}
			case '2':{
				retirar(f);
				break;
			}
			case '3':{
				exibir(f);
				break;
			}
			case '4':{
				limpar_tudo(f);
				break;
			}
			case '0':{
				cout<<"Fechando programa"<<endl;
				break;
			}
			default:
                cout << "Opcao invalida. Tente novamente." << endl;
                system("pause");
                break;
		}
		
	}while (opcao!='0');
	return 0;
}
	
		










