#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Produto {
    char nome[31];
    int codigo;
    float preco;
};

void exibeProduto(Produto p) {
    cout << "\n--- Dados do Produto ---" << endl;
    cout << "Nome:   " << p.nome << endl;
    cout << "Código: " << p.codigo << endl;
    cout << "Preço:  R$ " << fixed << setprecision(2) << p.preco << endl;

int main() {
    Produto meuProduto;

    cout << "--- Cadastro de Produto ---" << endl;
    cout << "Digite o nome do produto (até 30 caracteres): ";
    cin.getline(meuProduto.nome, 31);

    cout << "Digite o código do produto: ";
    cin >> meuProduto.codigo;

    cout << "Digite o preço do produto: ";
    cin >> meuProduto.preco;

    exibeProduto(meuProduto);

    return 0;
}