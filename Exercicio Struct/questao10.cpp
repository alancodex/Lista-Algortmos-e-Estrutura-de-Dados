#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct ContaBancaria {
    char Titular[51];
    int NumeroConta;
    float Saldo;
};

void depositar(ContaBancaria& conta, float valor) {
    if (valor > 0) {
        conta.Saldo += valor;
        cout << "\nDeposito de R$" << fixed << setprecision(2) << valor << " realizado com sucesso." << endl;
    } else {
        cout << "\nErro: O valor do deposito deve ser positivo." << endl;
    }
}

void sacar(ContaBancaria& conta, float valor) {
    if (valor > 0) {
        if (conta.Saldo >= valor) {
            conta.Saldo -= valor;
            cout << "\nSaque de R$" << fixed << setprecision(2) << valor << " realizado com sucesso." << endl;
        } else {
            cout << "\nErro: Saldo insuficiente para realizar o saque." << endl;
        }
    } else {
        cout << "\nErro: O valor do saque deve ser positivo." << endl;
    }
}

void exibirSaldo(const ContaBancaria& conta) {
    cout << "\n--- Saldo da Conta ---" << endl;
    cout << "Titular: " << conta.Titular << endl;
    cout << "Conta: " << conta.NumeroConta << endl;
    cout << "Saldo Atual: R$" << fixed << setprecision(2) << conta.Saldo << endl;
}

int main() {
    ContaBancaria minhaConta;
    strcpy(minhaConta.Titular, "Joao da Silva");
    minhaConta.NumeroConta = 123456;
    minhaConta.Saldo = 1000.00;

    int opcao;
    float valor;

    do {
        cout << "\n--- Sistema Bancario Simples ---" << endl;
        cout << "Conta: " << minhaConta.NumeroConta << " | Titular: " << minhaConta.Titular << endl;
        cout << "1. Exibir Saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                exibirSaldo(minhaConta);
                break;
            case 2:
                cout << "Digite o valor para deposito: R$";
                cin >> valor;
                depositar(minhaConta, valor);
                break;
            case 3:
                cout << "Digite o valor para saque: R$";
                cin >> valor;
                sacar(minhaConta, valor);
                break;
            case 0:
                cout << "Obrigado por utilizar o sistema bancario." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}