#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void imprimirFila(queue<int> q) {
    if (q.empty()) {
        cout << "Fila vazia." << endl;
        return;
    }
    
    cout << "Fila (Frente -> Tras): ";
    while (!q.empty()) {
        cout << q.front() << (q.size() > 1 ? " | " : "");
        q.pop();
    }
    cout << endl;
}

void inverterFila(queue<int>& fila) {
    stack<int> pilhaAuxiliar;

    while (!fila.empty()) {
        pilhaAuxiliar.push(fila.front());
        fila.pop();
    }

    while (!pilhaAuxiliar.empty()) {
        fila.push(pilhaAuxiliar.top());
        pilhaAuxiliar.pop();
    }

    cout << "A fila foi invertida com sucesso usando a pilha auxiliar." << endl;
}

int main() {
    queue<int> minhaFila;

    minhaFila.push(10);
    minhaFila.push(20);
    minhaFila.push(30);
    minhaFila.push(40);

    cout << "--- Fila Original ---" << endl;
    imprimirFila(minhaFila);

    inverterFila(minhaFila);

    cout << "\n--- Fila Invertida ---" << endl;
    imprimirFila(minhaFila);

    return 0;
}