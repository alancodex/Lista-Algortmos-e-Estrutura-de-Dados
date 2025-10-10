#include <iostream>

using namespace std;

int soma_digitos(int n) {
    if (n == 0) {
        return 0;
    }
    int digito = n % 10;
    int resto = n / 10;
    return digito + soma_digitos(resto);
}

int main() {
    int n1 = 1234;
    int n2 = 987;
    int n3 = 5;
    int n4 = 0;

    cout << "A soma dos digitos de " << n1 << " e: " << soma_digitos(n1) << endl;
    cout << "A soma dos digitos de " << n2 << " e: " << soma_digitos(n2) << endl;
    cout << "A soma dos digitos de " << n3 << " e: " << soma_digitos(n3) << endl;
    cout << "A soma dos digitos de " << n4 << " e: " << soma_digitos(n4) << endl;

    return 0;
}