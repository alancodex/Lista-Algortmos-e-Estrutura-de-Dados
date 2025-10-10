#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

struct FilaCircular {
    int elementos[MAX_SIZE];
    int frente;
    int tras;
};

void inicializar(FilaCircular& f) {
    f.frente = -1;
    f.tras = -1;
}

bool isEmpty(const FilaCircular& f) {
    return f.frente == -1;
}

bool isFull(const FilaCircular& f) {
    return (f.tras + 1) % MAX_SIZE == f.frente;
}

void enqueue(FilaCircular& f, int valor) {
    if (isFull(f)) {
        cout << "Erro: Fila cheia. Nao foi possivel inserir " << valor << "." << endl;
        return;
    }

    if (isEmpty(f)) {
        f.frente = 0;
    }
    
    f.tras = (f.tras + 1) % MAX_SIZE;
    f.elementos[f.tras] = valor;
    cout << "Elemento " << valor << " inserido." << endl;
}

int dequeue(FilaCircular& f) {
    if (isEmpty(f)) {
        cout << "Erro: Fila vazia. Retornando valor padrao -1." << endl;
        return -1;
    }
    
    int valor = f.elementos[f.frente];
    
    if (f.frente == f.tras) {
        f.frente = -1;
        f.tras = -1;
    } else {
        f.frente = (f.frente + 1) % MAX_SIZE;
    }
    
    return valor;
}

int front(const FilaCircular& f) {
    if (isEmpty(f)) {
        cout << "Erro: Fila vazia. Nao ha elemento na frente. Retornando -1." << endl;
        return -1;
    }
    return f.elementos[f.frente];
}

void exibirFila(const FilaCircular& f) {
    if (isEmpty(f)) {
        cout << "Fila vazia." << endl;
        return;
    }
    
    cout << "Elementos da Fila: ";
    int i = f.frente;
    do {
        cout << f.elementos[i] << " ";
        if (i == f.tras) break;
        i = (i + 1) % MAX_SIZE;
    } while (i != (f.tras + 1) % MAX_SIZE);
    cout << endl;
}

int main() {
    FilaCircular minhaFila;
    inicializar(minhaFila);
    int opcao, valor;

    do {
        cout << "\n--- Fila Circular (Capacidade " << MAX_SIZE << ") ---" << endl;
        cout << "1. Enqueue (Inserir)" << endl;
        cout << "2. Dequeue (Remover)" << endl;
        cout << "3. Front (Ver Frente)" << endl;
        cout << "4. Exibir Fila" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor a inserir: ";
                cin >> valor;
                enqueue(minhaFila, valor);
                break;
            case 2:
                valor = dequeue(minhaFila);
                if (valor != -1) {
                    cout << "Elemento removido: " << valor << endl;
                }
                break;
            case 3:
                valor = front(minhaFila);
                if (valor != -1) {
                    cout << "Elemento na frente: " << valor << endl;
                }
                break;
            case 4:
                exibirFila(minhaFila);
                break;
            case 0:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}