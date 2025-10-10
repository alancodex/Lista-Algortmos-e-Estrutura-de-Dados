#include <iostream>
#include <limits>

using namespace std;

int maior_elemento_iterativo(int vet[], int n) {
    if (n <= 0) {
        return numeric_limits<int>::min();
    }

    int maior = vet[0];
    for (int i = 1; i < n; ++i) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int vetor1[] = {5, 12, 9, 30, 7};
    int n1 = 5;

    int vetor2[] = {100, 2, 50, 4};
    int n2 = 4;

    cout << "O maior elemento (Iterativo) no vetor 1 e: " << maior_elemento_iterativo(vetor1, n1) << endl;
    cout << "O maior elemento (Iterativo) no vetor 2 e: " << maior_elemento_iterativo(vetor2, n2) << endl;

    return 0;
}