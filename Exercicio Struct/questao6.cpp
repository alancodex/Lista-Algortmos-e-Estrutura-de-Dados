#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

struct Livro {
    char Titulo[51];
    char Autor[51];
    int AnoPublicacao;
};

void exibirLivrosAposAno(const vector<Livro>& livros, int anoMinimo) {
    cout << "\n--- Livros Publicados Apos " << anoMinimo << " ---" << endl;
    cout << left << setw(50) << "Titulo"
         << setw(30) << "Autor"
         << right << setw(10) << "Ano" << endl;
    cout << setfill('-') << setw(90) << "-" << endl;
    cout << setfill(' ');

    bool encontrado = false;
    for (const auto& livro : livros) {
        if (livro.AnoPublicacao > anoMinimo) {
            cout << left << setw(50) << livro.Titulo
                 << setw(30) << livro.Autor
                 << right << setw(10) << livro.AnoPublicacao << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "\nNenhum livro encontrado publicado apos o ano " << anoMinimo << "." << endl;
    }
}

int main() {
    int N;
    cout << "Quantos livros deseja cadastrar? ";
    cin >> N;

    vector<Livro> catalogo(N);

    for (int i = 0; i < N; ++i) {
        cout << "\nCadastro do Livro " << i + 1 << ":" << endl;

        cin.ignore();
        cout << "Titulo: ";
        cin.getline(catalogo[i].Titulo, 51);

        cout << "Autor: ";
        cin.getline(catalogo[i].Autor, 51);

        cout << "Ano de publicacao: ";
        cin >> catalogo[i].AnoPublicacao;
    }

    int anoFiltro;
    cout << "\nDigite o ano minimo de publicacao para filtrar: ";
    cin >> anoFiltro;

    exibirLivrosAposAno(catalogo, anoFiltro);

    return 0;
}