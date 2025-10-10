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

void inserirFinal(No*& cabeca, int valor) {
    No* novoNo = new No;
    novoNo->dado = valor;
    novoNo->proximo = NULL;

    if (cabeca == NULL) {
        cabeca = novoNo;
        return;
    }

    No* atual = cabeca;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
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
        cout << "\n--- Lista Encadeada Simples ---" << endl;
        cout << "1. Inserir no Inicio" << endl;
        cout << "2. Inserir no Final" << endl;
        cout << "3. Remover Elemento Especifico" << endl;
        cout << "4. Exibir Lista" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a inserir no inicio: ";
                cin >> valor;
                inserirInicio(lista, valor);
                break;
            case 2:
                cout << "Digite o valor a inserir no final: ";
                cin >> valor;
                inserirFinal(lista, valor);
                break;
            case 3:
                cout << "Digite o valor a remover: ";
                cin >> valor;
                removerElemento(lista, valor);
                break;
            case 4:
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