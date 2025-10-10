#include <iostream>
#include <cstdlib>

using namespace std;

const int MAX_SIZE = 100;

struct Pilha {
    int elementos[MAX_SIZE];
    int topo;
};

void inicializar(Pilha& p) {
    p.topo = -1;
}

bool isEmpty(const Pilha& p) {
    return p.topo == -1;
}

bool isFull(const Pilha& p) {
    return p.topo == MAX_SIZE - 1;
}

void push(Pilha& p, int valor) {
    if (isFull(p)) {
        cout << "Erro: Pilha cheia. Nao foi possivel inserir " << valor << "." << endl;
        return;
    }
    p.topo++;
    p.elementos[p.topo] = valor;
}

int pop(Pilha& p) {
    if (isEmpty(p)) {
        cout << "Erro: Pilha vazia. Retornando valor padrao -1." << endl;
        return -1;
    }
    int valor = p.elementos[p.topo];
    p.topo--;
    return valor;
}

int top(const Pilha& p) {
    if (isEmpty(p)) {
        cout << "Erro: Pilha vazia. Nao ha elemento no topo. Retornando -1." << endl;
        return -1;
    }
    return p.elementos[p.topo];
}

int main() {
    Pilha minhaPilha;
    inicializar(minhaPilha);

    cout << "A pilha esta vazia? " << (isEmpty(minhaPilha) ? "Sim" : "Nao") << endl;

    push(minhaPilha, 10);
    push(minhaPilha, 20);
    push(minhaPilha, 30);

    cout << "Elemento do topo: " << top(minhaPilha) << endl;

    cout << "Removendo: " << pop(minhaPilha) << endl;
    cout << "Elemento do novo topo: " << top(minhaPilha) << endl;

    cout << "A pilha esta vazia? " << (isEmpty(minhaPilha) ? "Sim" : "Nao") << endl;

    pop(minhaPilha);
    pop(minhaPilha);
    
    cout << "Apos esvaziar, a pilha esta vazia? " << (isEmpty(minhaPilha) ? "Sim" : "Nao") << endl;
    
    pop(minhaPilha);

    return 0;
}