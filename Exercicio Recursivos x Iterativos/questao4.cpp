#include <iostream>

using namespace std;

int produto(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b > 0) {
        return a + produto(a, b - 1);
    } else {
        return -produto(a, -b);
    }
}

int main() {
    int a1 = 5, b1 = 3;
    int a2 = 7, b2 = 2;
    int a3 = 10, b3 = 0;
    int a4 = 4, b4 = -5;

    cout << "Produto de " << a1 << " x " << b1 << ": " << produto(a1, b1) << endl;
    cout << "Produto de " << a2 << " x " << b2 << ": " << produto(a2, b2) << endl;
    cout << "Produto de " << a3 << " x " << b3 << ": " << produto(a3, b3) << endl;
    cout << "Produto de " << a4 << " x " << b4 << ": " << produto(a4, b4) << endl;

    return 0;
}