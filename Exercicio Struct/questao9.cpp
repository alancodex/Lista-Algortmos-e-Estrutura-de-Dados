#include <iostream>
#include <vector>
#include <cstring>
#include <iomanip>

using namespace std;

struct Paciente {
    char Nome[51];
    int Idade;
    char Diagnostico[101];
};

void exibirPacientesAcima60(const vector<Paciente>& pacientes) {
    cout << "\n--- Pacientes Acima de 60 Anos ---" << endl;
    cout << left << setw(30) << "Nome"
         << right << setw(10) << "Idade"
         << left << "  Diagnostico" << endl;
    cout << setfill('-') << setw(80) << "-" << endl;
    cout << setfill(' ');

    bool encontrado = false;
    for (const auto& paciente : pacientes) {
        if (paciente.Idade > 60) {
            cout << left << setw(30) << paciente.Nome
                 << right << setw(10) << paciente.Idade
                 << left << "  " << paciente.Diagnostico << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "\nNenhum paciente encontrado com mais de 60 anos." << endl;
    }
}

int main() {
    int N;
    cout << "Quantos pacientes deseja cadastrar? ";
    cin >> N;

    vector<Paciente> listaPacientes(N);

    for (int i = 0; i < N; ++i) {
        cout << "\nCadastro do Paciente " << i + 1 << ":" << endl;

        cin.ignore();
        cout << "Nome: ";
        cin.getline(listaPacientes[i].Nome, 51);

        cout << "Idade: ";
        cin >> listaPacientes[i].Idade;
        cin.ignore();

        cout << "Diagnostico: ";
        cin.getline(listaPacientes[i].Diagnostico, 101);
    }

    exibirPacientesAcima60(listaPacientes);

    return 0;
}