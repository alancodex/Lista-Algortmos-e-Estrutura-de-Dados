#include <iostream>
#include <cstdlib>

using namespace std;

struct No {
    int dado;
    No* proximo;
};

void inserirInicio(No*& cabeca, int valor) {
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->proximo = cabeca;
    cabeca = novoNo;
}

void reverterLista(No*& cabeca) {
    No* anterior = NULL;
    No* atual = cabeca;
    No* proximo = NULL;

    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }

    cabeca = anterior;
    cout << "A lista foi revertida com sucesso." << endl;
}

void exibirLista(const No* cabeca) {
    if (cabeca == NULL) {
        cout << "Lista vazia." << endl;
        return;
    }
    cout << "Elementos da Lista: ";
    const No* atual = cabeca;
    while (atual != NULL) {
        cout << atual->dado << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL" << endl;
}

void liberarLista(No*& cabeca) {
    No* atual = cabeca;
    No* proximo;
    while (atual != NULL) {
        proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
    cabeca = NULL;
}

int main() {
    No* lista = NULL;
    int opcao, valor;

    inserirInicio(lista, 30);
    inserirInicio(lista, 20);
    inserirInicio(lista, 10);
    cout << "Lista inicial criada: ";
    exibirLista(lista);

    do {
        cout << "\n--- Lista Encadeada Simples ---" << endl;
        cout << "1. Inserir no Inicio" << endl;
        cout << "2. Reverter Lista" << endl;
        cout << "3. Exibir Lista" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a inserir: ";
                cin >> valor;
                inserirInicio(lista, valor);
                break;
            case 2:
                reverterLista(lista);
                break;
            case 3:
                exibirLista(lista);
                break;
            case 0:
                cout << "Encerrando e liberando memoria." << endl;
                liberarLista(lista);
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}