#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>

using namespace std;

//struct  funcionário
struct funcionario{
	string nome;
	float salario;
	int idade;
};

// struct lista 
struct lista {
	
	funcionario info[5];
	int total;
};

//funcao para iniciar a lista
void lista_start(lista & l){
	l.total=0;
}
//funcao que verifica se a lista ta cheia
bool cheia(lista l , int tamanhomax){
	if (l.total==tamanhomax)
	return true;
	else
	return false;
}
//funcao verifica lista vazia
bool vazia (lista l, int tamanhomax){
		if (l.total == 0)
		return true;
	else
		return false;
}

//função exibir menu
char menu(void){

char opcao;
system("cls");
cout << "1 - Adicionar novo funcionario"<< endl;
cout << "2 -Exibir os dados dos funcionarios cadastrados"<< endl;
cout <<" 3 - Exibir a media salarial dos funcionarios cadastrados"<< endl;
cout <<"4- exibir o funcioario com maior salario"<< endl;
cout <<"0- Sair"<< endl;
cin>> opcao;
return opcao;
}
//funcao incluir funcionario
void adicionar(lista & l, funcionario f, int tamanhomax){
	if (cheia, (tamanhomax)==true)
	cout << "lista cheia"<< endl;
		
}

int main(){
	lista l;
	char opcao;
	lista_start(l);
	funcionario func;
	
	do{
		opcao = menu();
		if (opcao == '1'){
			cout<<"Digite o nome do funcionario"<< endl;
			cin >> funcionario.nome;
			cout << "Digite o salario";
			cin >> funcionario.salario;
			cout <<" Digite a idade";
			cin>> funcionario.idade;
			adicionar(lista & l, funcionario f, int tamanhomax);
		}
	
	}
	
	
}
