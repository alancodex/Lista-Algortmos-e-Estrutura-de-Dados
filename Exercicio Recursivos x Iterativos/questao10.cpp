#include <iostream>
#include <cmath>

using namespace std;

int produto_iterativo(int a, int b) {
    if (b == 0) {
        return 0;
    }

    int resultado = 0;
    int abs_b = abs(b);

    for (int i = 0; i < abs_b; ++i) {
        resultado += a;
    }

    if (b < 0) {
        return -resultado;
    } else {
        return resultado;
    }
}

int main() {
    int a1 = 5, b1 = 3;
    int a2 = 7, b2 = 2;
    int a3 = 10, b3 = 0;
    int a4 = 4, b4 = -5;
    int a5 = -6, b5 = 3;

    cout << "Produto (Iterativo) de " << a1 << " x " << b1 << ": " << produto_iterativo(a1, b1) << endl;
    cout << "Produto (Iterativo) de " << a2 << " x " << b2 << ": " << produto_iterativo(a2, b2) << endl;
    cout << "Produto (Iterativo) de " << a3 << " x " << b3 << ": " << produto_iterativo(a3, b3) << endl;
    cout << "Produto (Iterativo) de " << a4 << " x " << b4 << ": " << produto_iterativo(a4, b4) << endl;
    cout << "Produto (Iterativo) de " << a5 << " x " << b5 << ": " << produto_iterativo(a5, b5) << endl;

    return 0;
}