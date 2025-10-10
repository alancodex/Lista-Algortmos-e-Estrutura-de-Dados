#include <iostream>
#include <string>

using namespace std;

bool verificar_parenteses(const string& expressao) {
    int contador = 0;

    for (char c : expressao) {
        if (c == '(') {
            contador++;
        } else if (c == ')') {
            contador--;
        }

        if (contador < 0) {
            return false;
        }
    }

    return contador == 0;
}

int main() {
    string e1 = "(())()";
    string e2 = "(()";
    string e3 = ")(()";
    string e4 = "()(())";
    string e5 = "";

    cout << "Expressao \"" << e1 << "\" e valida? " << (verificar_parenteses(e1) ? "Sim" : "Nao") << endl;
    cout << "Expressao \"" << e2 << "\" e valida? " << (verificar_parenteses(e2) ? "Sim" : "Nao") << endl;
    cout << "Expressao \"" << e3 << "\" e valida? " << (verificar_parenteses(e3) ? "Sim" : "Nao") << endl;
    cout << "Expressao \"" << e4 << "\" e valida? " << (verificar_parenteses(e4) ? "Sim" : "Nao") << endl;
    cout << "Expressao \"" << e5 << "\" e valida? " << (verificar_parenteses(e5) ? "Sim" : "Nao") << endl;

    return 0;
}