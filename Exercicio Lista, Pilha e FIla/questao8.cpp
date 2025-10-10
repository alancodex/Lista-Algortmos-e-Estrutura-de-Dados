#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string decimalParaBinario(int decimal) {
    if (decimal == 0) {
        return "0";
    }

    stack<int> binario;
    
    int n = decimal;
    while (n > 0) {
        int resto = n % 2;
        binario.push(resto);
        n = n / 2;
    }

    string resultado = "";
    while (!binario.empty()) {
        resultado += to_string(binario.top());
        binario.pop();
    }

    return resultado;
}

int main() {
    int d1 = 10;
    int d2 = 25;
    int d3 = 1;
    int d4 = 0;
    int d5 = 31;

    cout << "Decimal " << d1 << " em Binario: " << decimalParaBinario(d1) << endl;
    cout << "Decimal " << d2 << " em Binario: " << decimalParaBinario(d2) << endl;
    cout << "Decimal " << d3 << " em Binario: " << decimalParaBinario(d3) << endl;
    cout << "Decimal " << d4 << " em Binario: " << decimalParaBinario(d4) << endl;
    cout << "Decimal " << d5 << " em Binario: " << decimalParaBinario(d5) << endl;

    return 0;
}