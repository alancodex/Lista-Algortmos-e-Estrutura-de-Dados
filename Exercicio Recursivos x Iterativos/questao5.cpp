#include <iostream>

using namespace std;

void contagem_regressiva(int n) {
    if (n < 0) {
        return;
    }

    cout << n;

    if (n > 0) {
        cout << ", ";
        contagem_regressiva(n - 1);
    } else {
        cout << "." << endl;
    }
}

int main() {
    int n1 = 5;
    int n2 = 10;
    int n3 = 0;

    cout << "Contagem regressiva a partir de " << n1 << ": ";
    contagem_regressiva(n1);

    cout << "Contagem regressiva a partir de " << n2 << ": ";
    contagem_regressiva(n2);

    cout << "Contagem regressiva a partir de " << n3 << ": ";
    contagem_regressiva(n3);

    return 0;
}