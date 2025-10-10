#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

struct Fila {
    int elementos[MAX_SIZE];
    int frente;
    int tras;
    int tamanho;
};

void inicializar(Fila& f) {
    f.frente = 0;
    f.tras = -1;
    f.tamanho = 0;
}

bool isEmpty(const Fila& f) {
    return f.tamanho == 0;
}

bool isFull(const Fila& f) {
    return f.tamanho == MAX_SIZE;
}

void enqueue(Fila& f, int valor) {
    if (isFull(f)) {
        cout << "Erro: Fila cheia. Nao foi possivel inserir " << valor << "." << endl;
        return;
    }
    
    f.tras = (f.tras + 1) % MAX_SIZE;
    f.elementos[f.tras] = valor;
    f.tamanho++;
}

int dequeue(Fila& f) {
    if (isEmpty(f)) {
        cout << "Erro: Fila vazia. Retornando valor padrao -1." << endl;
        return -1;
    }
    
    int valor = f.elementos[f.frente];
    f.frente = (f.frente + 1) % MAX_SIZE;
    f.tamanho--;
    return valor;
}

int front(const Fila& f) {
    if (isEmpty(f)) {
        cout << "Erro: Fila vazia. Nao ha elemento na frente. Retornando -1." << endl;
        return -1;
    }
    return f.elementos[f.frente];
}

int main() {
    Fila minhaFila;
    inicializar(minhaFila);

    cout << "A fila esta vazia? " << (isEmpty(minhaFila) ? "Sim" : "Nao") << endl;

    enqueue(minhaFila, 10);
    enqueue(minhaFila, 20);
    enqueue(minhaFila, 30);

    cout << "Elemento da frente: " << front(minhaFila) << endl;

    cout << "Removendo: " << dequeue(minhaFila) << endl;
    cout << "Elemento da nova frente: " << front(minhaFila) << endl;

    enqueue(minhaFila, 40);
    enqueue(minhaFila, 50);
    enqueue(minhaFila, 60);

    cout << "Removendo: " << dequeue(minhaFila) << endl;
    cout << "Removendo: " << dequeue(minhaFila) << endl;
    cout << "Removendo: " << dequeue(minhaFila) << endl;
    cout << "Removendo: " << dequeue(minhaFila) << endl;
    
    cout << "Apos esvaziar, a fila esta vazia? " << (isEmpty(minhaFila) ? "Sim" : "Nao") << endl;
    
    dequeue(minhaFila);

    return 0;
}