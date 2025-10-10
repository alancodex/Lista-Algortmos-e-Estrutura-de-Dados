#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

string inverterStringPilha(const string& str) {
    stack<char> pilha;
    string invertida = "";

    for (char c : str) {
        pilha.push(c);
    }

    while (!pilha.empty()) {
        invertida += pilha.top();
        pilha.pop();
    }

    return invertida;
}

int main() {
    string original1 = "Exemplo de String";
    string original2 = "reverter";
    string original3 = "ABACAXI";

    string invertida1 = inverterStringPilha(original1);
    string invertida2 = inverterStringPilha(original2);
    string invertida3 = inverterStringPilha(original3);

    cout << "String Original 1: " << original1 << endl;
    cout << "String Invertida 1: " << invertida1 << endl;

    cout << "String Original 2: " << original2 << endl;
    cout << "String Invertida 2: " << invertida2 << endl;

    cout << "String Original 3: " << original3 << endl;
    cout << "String Invertida 3: " << invertida3 << endl;

    return 0;
}