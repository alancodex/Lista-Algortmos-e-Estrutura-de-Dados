#include <iostream>
#include <iomanip>

using namespace std;

struct Retangulo {
    float Base;
    float Altura;
};

float calcularArea(const Retangulo& r) {
    return r.Base * r.Altura;
}

float calcularPerimetro(const Retangulo& r) {
    return 2.0 * (r.Base + r.Altura);
}

int main() {
    Retangulo meuRetangulo;

    cout << "Digite o valor da Base do retangulo: ";
    cin >> meuRetangulo.Base;

    cout << "Digite o valor da Altura do retangulo: ";
    cin >> meuRetangulo.Altura;

    float area = calcularArea(meuRetangulo);
    float perimetro = calcularPerimetro(meuRetangulo);

    cout << "\n--- Resultados do Retangulo ---" << endl;
    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}