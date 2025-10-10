#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Carro {
    char Modelo[31];
    int Ano;
    float Preco;
};

int main() {
    Carro* meuCarro = (Carro*)malloc(sizeof(Carro));

    if (meuCarro == NULL) {
        return 1;
    }

    strcpy(meuCarro->Modelo, "Fusca");
    meuCarro->Ano = 1970;
    meuCarro->Preco = 5000.50;

    cout << "Informacoes do Carro:" << endl;
    cout << "Modelo: " << meuCarro->Modelo << endl;
    cout << "Ano: " << meuCarro->Ano << endl;
    cout << "Preco: R$" << meuCarro->Preco << endl;

    free(meuCarro);

    return 0;
}