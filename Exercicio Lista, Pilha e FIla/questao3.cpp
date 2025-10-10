#include <iostream>
#include <cstdlib>

using namespace std;

struct No {
    int dado;
    No* proximo;
};

void inserirOrdenado(No*& cabeca, int valor) {
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->proximo = NULL;

    if (cabeca == NULL || valor < cabeca->dado) {
        novoNo->proximo = cabeca;
        cabeca = novoNo;
        return;
    }

    No* atual = cabeca;
    while (atual->proximo != NULL && atual->proximo->dado < valor) {
        atual = atual->proximo;
    }

    novoNo->proximo = atual->proximo;
    atual->proximo = novoNo;
}

void removerElemento(No*& cabeca, int valor) {
    if (cabeca == NULL) {
        cout << "Lista vazia. Nao e possivel remover." << endl;
        return;
    }

    if (cabeca->dado == valor) {
        No* temp = cabeca;
        cabeca = cabeca->proximo;
        delete temp;
        cout << "Elemento " << valor << " removido do inicio." << endl;
        return;
    }

    No* atual = cabeca;
    while (atual->proximo != NULL && atual->proximo->dado != valor) {
        atual = atual->proximo;
    }

    if (atual->proximo == NULL) {
        cout << "Elemento " << valor << " nao encontrado na lista." << endl;
        return;
    }

    No* temp = atual->proximo;
    atual->proximo = temp->proximo;
    delete temp;
    cout << "Elemento " << valor << " removido." << endl;
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

    do {
        cout << "\n--- Lista Encadeada Ordenada ---" << endl;
        cout << "1. Inserir Elemento (Ordenado)" << endl;
        cout << "2. Remover Elemento Especifico" << endl;
        cout << "3. Exibir Lista" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a inserir: ";
                cin >> valor;
                inserirOrdenado(lista, valor);
                break;
            case 2:
                cout << "Digite o valor a remover: ";
                cin >> valor;
                removerElemento(lista, valor);
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