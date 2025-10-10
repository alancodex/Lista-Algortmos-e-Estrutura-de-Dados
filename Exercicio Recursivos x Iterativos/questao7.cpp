#include <iostream>

using namespace std;

void contagem_regressiva_iterativa(int n) {
    while (n >= 0) {
        cout << n;
        if (n > 0) {
            cout << ", ";
        }
        n--;
    }
    cout << "." << endl;
}

int main() {
    int n1 = 5;
    int n2 = 10;
    int n3 = 0;

    cout << "Contagem regressiva (Iterativa) a partir de " << n1 << ": ";
    contagem_regressiva_iterativa(n1);

    cout << "Contagem regressiva (Iterativa) a partir de " << n2 << ": ";
    contagem_regressiva_iterativa(n2);

    cout << "Contagem regressiva (Iterativa) a partir de " << n3 << ": ";
    contagem_regressiva_iterativa(n3);

    return 0;
}