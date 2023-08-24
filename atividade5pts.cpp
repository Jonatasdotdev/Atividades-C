//matricula 202212133402 Jônatas Ariel

#include <iostream>
#include <string>
using namespace std;

struct Produto {
    string nome;
    float valorVenda;
    int estoque;
    float vendas;
    Produto* prox;
};

char lista_vazia(Produto* l) {
    if (l == NULL)
        return 'S';
    else
        return 'N';
}

Produto* inserir_em_ordem(Produto* l, string nome, float valorVenda) {
    Produto* n = new Produto;
    n->nome = nome;
    n->valorVenda = valorVenda;
    n->estoque = 0;
    n->vendas = 0;
    n->prox = NULL;

    if (lista_vazia(l) == 'S') {
        return n;
    } else if (l->nome > nome) {
        n->prox = l;
        return n;
    } else {
        Produto* p = l;
        while (p->prox != NULL && p->prox->nome < nome) {
            p = p->prox;
        }
        n->prox = p->prox;
        p->prox = n;
        return l;
    }
}

Produto* buscar(Produto* l, string nome) {
    Produto* p = l;
    while (p != NULL) {
        if (p->nome == nome) {
            return p;
        }
        p = p->prox;
    }
    return NULL;
}
//quando comprar tem que aumentar o estoque nao diminuir
void cadastrarProduto(Produto*& lista) {
    string nome;
    float valorVenda;
    int quantidade;

    cout << "=== Cadastro de Produto ===" << endl;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Digite o valor de venda do produto: ";
    cin >> valorVenda;
    cout << "Digite a quantidade em estoque do produto: ";
    cin >> quantidade;

    Produto* produto = buscar(lista, nome);
    if (produto != NULL) {
        produto->estoque += quantidade;
        cout << "Quantidade atualizada com sucesso" << endl;
    } else {
        lista = inserir_em_ordem(lista, nome, valorVenda);
        produto = buscar(lista, nome);
        produto->estoque = quantidade;
        cout << "Produto cadastrado com sucesso" << endl;
    }
}

void comprarProduto(Produto* lista) {
    if (lista == NULL) {
        cout << "Nao ha produtos cadastrados." << endl;
        return;
    }

    string nomeProduto;
    int quantidade;

    cout << "=== Compra de Produto ===" << endl;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, nomeProduto);
    cout << "Digite a quantidade a ser comprada: ";
    cin >> quantidade;

    Produto* produto = buscar(lista, nomeProduto);
    if (produto != NULL) {
        produto->estoque += quantidade;
        cout << "Compra realizada com sucesso!" << endl;
    } else {
        cout << "Produto nao encontrado." << endl;
    }
}

void venderProduto(Produto* lista) {
    if (lista == NULL) {
        cout << "Nao ha produtos cadastrados." << endl;
        return;
    }

    string nomeProduto;
    int quantidade;

    cout << "=== Venda de Produto ===" << endl;
    cout << "Digite o nome do produto: ";
    cin.ignore();
    getline(cin, nomeProduto);
    cout << "Digite a quantidade a ser vendida: ";
    cin >> quantidade;

    Produto* produto = buscar(lista, nomeProduto);
    if (produto != NULL) {
        if (produto->estoque >= quantidade) {
            float valorTotal = quantidade * produto->valorVenda;
            produto->estoque -= quantidade;
            produto->vendas += valorTotal;
            cout << "Venda realizada com sucesso" << endl;
            cout << "Valor total da venda: R$ " << valorTotal << endl;
        } else {
            cout << "Estoque insuficiente." << endl;
        }
    } else {
        cout << "Produto nao encontrado." << endl;
    }
}

void exibirRelatorio(Produto* lista) {
    if (lista == NULL) {
        cout << "Nao ha produtos cadastrados." << endl;
        return;
    }

    cout << "=== Relatorio de Produtos ===" << endl;
    Produto* p = lista;
    while (p != NULL) {
        cout << "Nome: " << p->nome << endl;
        cout << "Valor de Venda: R$ " << p->valorVenda << endl;
        cout << "Estoque: " << p->estoque << endl;
        cout << "Vendas: R$ " << p->vendas << endl;
        cout << endl;
        p = p->prox;
    }
}

char menu() {
    char op;

    cout << endl;
    cout << "=== MENU ===" << endl;
    cout << "1 - Cadastrar Produto" << endl;
    cout << "2 - Comprar Produto" << endl;
    cout << "3 - Vender Produto" << endl;
    cout << "4 - Exibir Relatório de Produtos" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> op;
    return op;
}

int main() {
    Produto* lista = NULL;
    char op;

    op = menu();

    while (op != '0') {
        switch (op) {
            case '1':
                cadastrarProduto(lista);
                break;
            case '2':
                comprarProduto(lista);
                break;
            case '3':
                venderProduto(lista);
                break;
            case '4':
                exibirRelatorio(lista);
                break;
            default:
                cout << "Opcao invalida." << endl;
        }

        op = menu();
    }

    // Limpar
    Produto* p = lista;
    while (p != NULL) {
        Produto* prox = p->prox;
        delete p;
        p = prox;
    }

    return 0;
}

