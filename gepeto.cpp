#include <stdlib.h>
#include <iostream>
#include <cstdlib>

using namespace std;

struct fila {
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

void inicia_fila(fila& f) {
    f.total = 0;
    f.com = 0;
    f.fim = -1;
}

bool fila_cheia(fila f) {
    return f.total == 10;
}

bool fila_vazia(fila f) {
    return f.total == 0;
}

void adicionar(fila& f, string arquivo) {
    if (fila_cheia(f)) {
        cout << "Fila esta cheia." << endl;
    } else {
        f.fim = (f.fim + 1) % 10;
        f.item[f.fim] = arquivo;
        f.total++;
        cout << "Arquivo '" << arquivo << "' incluido na impressao." << endl;
    }
}

void retirar(fila& f) {
    if (fila_vazia(f)) {
        cout << "Fila esta vazia." << endl;
    } else {
        string arquivo = f.item[f.com];
        f.com = (f.com + 1) % 10;
        f.total--;
        cout << "Arquivo '" << arquivo << "' removido da impressao." << endl;
    }
}

void exibir(fila& f) {
    if (fila_vazia(f)) {
        cout << "Fila esta vazia." << endl;
    } else {
        int i = f.com;
        int quant = 1;
        while (quant <= f.total) {
            cout << f.item[i] << " - ";
            i = (i + 1) % 10;
            quant++;
        }
        cout << endl;
    }
}

void limpar_tudo(fila& f) {
    if (fila_vazia(f)) {
        cout << "Fila esta vazia." << endl;
    } else {
        inicia_fila(f);
        cout << "Fila limpa." << endl;
    }
}

int main() {
    fila f;
    char opcao;
    inicia_fila(f);
    do {
        opcao = menu();
        switch (opcao) {
            case '1': {
                string arquivo;
                cout << "Digite o nome do arquivo: ";
                cin >> arquivo;
                adicionar(f, arquivo);
                break;
            }
            case '2': {
                retirar(f);
                break;
            }
            case '3': {
                exibir(f);
                break;
            }
            case '4': {
                limpar_tudo(f);
                break;
            }
            case '0': {
                cout << "Fechando programa." << endl;
                break;
            }
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != '0');
    
    cout << "Pressione qualquer tecla para sair...";
    cin.ignore();
    cin.get();
    
    return 0;
}

