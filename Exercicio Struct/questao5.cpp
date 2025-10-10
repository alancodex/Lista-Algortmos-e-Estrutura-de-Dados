#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

struct Funcionario {
    char Nome[51];
    char Cargo[31];
    float Salario;
};

int main() {
    int N;
    cout << "Quantos funcionarios deseja cadastrar? ";
    cin >> N;

    vector<Funcionario> listaFuncionarios(N);

    for (int i = 0; i < N; ++i) {
        cout << "\nCadastro do Funcionario " << i + 1 << ":" << endl;

        cin.ignore();
        cout << "Nome: ";
        cin.getline(listaFuncionarios[i].Nome, 51);

        cout << "Cargo: ";
        cin.getline(listaFuncionarios[i].Cargo, 31);

        cout << "Salario: R$";
        cin >> listaFuncionarios[i].Salario;
    }

    cout << "\n--- Lista de Funcionarios Cadastrados ---" << endl;
    cout << left << setw(30) << "Nome"
         << setw(20) << "Cargo"
         << right << setw(10) << "Salario" << endl;
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    for (const auto& func : listaFuncionarios) {
        cout << left << setw(30) << func.Nome
             << setw(20) << func.Cargo
             << right << fixed << setprecision(2) << setw(10) << func.Salario << endl;
    }

    return 0;
}