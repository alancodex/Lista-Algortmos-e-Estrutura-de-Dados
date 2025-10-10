#include <iostream>
#include <cmath>

using namespace std;

int soma_digitos_iterativa(int n) {
    if (n < 0) {
        n = abs(n);
    }
    
    int soma = 0;
    
    if (n == 0) {
        return 0;
    }

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }
    
    return soma;
}

int main() {
    int n1 = 1234;
    int n2 = 987;
    int n3 = 5;
    int n4 = 0;

    cout << "A soma dos digitos (Iterativa) de " << n1 << " e: " << soma_digitos_iterativa(n1) << endl;
    cout << "A soma dos digitos (Iterativa) de " << n2 << " e: " << soma_digitos_iterativa(n2) << endl;
    cout << "A soma dos digitos (Iterativa) de " << n3 << " e: " << soma_digitos_iterativa(n3) << endl;
    cout << "A soma dos digitos (Iterativa) de " << n4 << " e: " << soma_digitos_iterativa(n4) << endl;

    return 0;
}