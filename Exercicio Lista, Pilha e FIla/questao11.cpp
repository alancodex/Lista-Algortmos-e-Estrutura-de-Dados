#include <iostream>
#include <string>

using namespace std;

struct Cliente {
    int id;
    string nome;
};

struct No {
    Cliente cliente;
    No* proximo;
};

struct FilaBanco {
    No* frente;
    No* tras;
    int proximo_id;
};

void inicializar(FilaBanco& f) {
    f.frente = NULL;
    f.tras = NULL;
    f.proximo_id = 1;
}

bool isEmpty(const FilaBanco& f) {
    return f.frente == NULL;
}

void enqueue(FilaBanco& f, const string& nomeCliente) {
    Cliente novoCliente;
    novoCliente.id = f.proximo_id++;
    novoCliente.nome = nomeCliente;

    No* novoNo = new No;
    novoNo->cliente = novoCliente;
    novoNo->proximo = NULL;

    if (isEmpty(f)) {
        f.frente = novoNo;
        f.tras = novoNo;
    } else {
        f.tras->proximo = novoNo;
        f.tras = novoNo;
    }
    cout << "Cliente #" << novoCliente.id << " (" << novoCliente.nome << ") entrou na fila." << endl;
}

void dequeue(FilaBanco& f) {
    if (isEmpty(f)) {
        cout << "A fila de atendimento esta vazia." << endl;
        return;
    }

    No* temp = f.frente;
    Cliente atendido = temp->cliente;

    f.frente = f.frente->proximo;

    if (f.frente == NULL) {
        f.tras = NULL;
    }

    delete temp;
    cout << "Atendendo cliente #" << atendido.id << " (" << atendido.nome << "). Ele saiu da fila." << endl;
}

void front(const FilaBanco& f) {
    if (isEmpty(f)) {
        cout << "A fila esta vazia. Nao ha proximo cliente." << endl;
        return;
    }
    cout << "Proximo cliente a ser atendido: #" << f.frente->cliente.id << " (" << f.frente->cliente.nome << ")." << endl;
}

int main() {
    FilaBanco fila;
    inicializar(fila);
    int opcao;
    string nome;

    do {
        cout << "\n--- Simulacao de Atendimento Bancario ---" << endl;
        cout << "1. Novo Cliente (Enqueue)" << endl;
        cout << "2. Atender Proximo Cliente (Dequeue)" << endl;
        cout << "3. Ver Proximo Cliente (Front)" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cin.ignore();
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);
                enqueue(fila, nome);
                break;
            case 2:
                dequeue(fila);
                break;
            case 3:
                front(fila);
                break;
            case 0:
                cout << "Encerrando a simulacao." << endl;
                while (!isEmpty(fila)) {
                    No* temp = fila.frente;
                    fila.frente = fila.frente->proximo;
                    delete temp;
                }
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}