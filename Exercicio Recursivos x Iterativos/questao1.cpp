#include <iostream>

using namespace std;

int contar_digitos(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + contar_digitos(n / 10);
}

int main() {
    int n1 = 12345;
    int n2 = 7;
    int n3 = 987654321;
    int n4 = 0;

    cout << "Numero de digitos de " << n1 << ": " << contar_digitos(n1) << endl;
    cout << "Numero de digitos de " << n2 << ": " << contar_digitos(n2) << endl;
    cout << "Numero de digitos de " << n3 << ": " << contar_digitos(n3) << endl;

    if (n4 == 0) {
        cout << "Numero de digitos de " << n4 << ": 1" << endl;
    } else {
        cout << "Numero de digitos de " << n4 << ": " << contar_digitos(n4) << endl;
    }

    return 0;
}