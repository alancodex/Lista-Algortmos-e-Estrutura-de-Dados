#include <iostream>
#include <algorithm>

using namespace std;

int maior_elemento(int vet[], int n) {
    if (n == 1) {
        return vet[0];
    }

    int maior_resto = maior_elemento(vet, n - 1);

    return max(vet[n - 1], maior_resto);
}

int main() {
    int vetor1[] = {5, 12, 9, 30, 7};
    int n1 = 5;

    int vetor2[] = {100, 2, 50, 4};
    int n2 = 4;

    cout << "O maior elemento no vetor 1 e: " << maior_elemento(vetor1, n1) << endl;
    cout << "O maior elemento no vetor 2 e: " << maior_elemento(vetor2, n2) << endl;

    return 0;
}