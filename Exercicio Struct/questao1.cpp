#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main()
{
    
    Pessoa aluno1;
    
    cout << "Insira seu nome: " << endl;
    cin >> aluno1.nome;
    cout << "Insira sua idade: " << endl;
    cin >> aluno1.idade;
    cout << "Insira sua altura: " << endl;
    cin >> aluno1.altura; 
    
    cout << " Nome: " << aluno1.nome << " Idade: " << aluno1.idade << " Altura: " << aluno1.altura;
    
    return 0;
}