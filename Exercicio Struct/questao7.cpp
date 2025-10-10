#include <iostream>
#include <vector>
#include <cstring>
#include <limits>

using namespace std;

struct Contato {
    char Nome[51];
    char Telefone[16];
};

void adicionarContato(vector<Contato>& agenda) {
    Contato novoContato;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Digite o nome do contato: ";
    cin.getline(novoContato.Nome, 51);
    cout << "Digite o telefone: ";
    cin.getline(novoContato.Telefone, 16);
    agenda.push_back(novoContato);
    cout << "Contato adicionado com sucesso!" << endl;
}

void buscarContato(const vector<Contato>& agenda) {
    char nomeBusca[51];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Digite o nome para buscar: ";
    cin.getline(nomeBusca, 51);

    bool encontrado = false;
    for (const auto& contato : agenda) {
        if (strcmp(contato.Nome, nomeBusca) == 0) {
            cout << "\nContato Encontrado:" << endl;
            cout << "Nome: " << contato.Nome << endl;
            cout << "Telefone: " << contato.Telefone << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "\nContato nao encontrado." << endl;
    }
}

int main() {
    vector<Contato> agenda;
    int opcao;

    do {
        cout << "\n--- Agenda de Contatos ---" << endl;
        cout << "1. Adicionar Contato" << endl;
        cout << "2. Buscar Contato por Nome" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                adicionarContato(agenda);
                break;
            case 2:
                buscarContato(agenda);
                break;
            case 0:
                cout << "Encerrando a agenda." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}