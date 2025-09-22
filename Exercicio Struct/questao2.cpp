#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int matricula;
    float nota;
};

float media(float numero) {
    return numero / 5;
}

int main()
{
    Aluno Aluno[5];
    float soma = 0;

    for(int i = 0; i < 5; i++){
        cout << "Insira o nome: " << endl;
        cin >> Aluno[i].nome;
        cout << "Insira a matricula: " << endl;
        cin >> Aluno[i].matricula;
        cout << "Insira a Nota: " << endl;
        cin >> Aluno[i].nota;
        
        soma = soma + Aluno[i].nota;
    }
    
    
    cout << media(soma) << endl;

    return 0;
}