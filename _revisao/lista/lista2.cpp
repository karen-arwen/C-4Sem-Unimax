#include <iostream>
using namespace std;

// Função recursiva para calcular fatorial
long long fatorial(int n) {
    if (n == 0 || n == 1)  // caso base
        return 1;
    else
        return n * fatorial(n - 1); // chamada recursiva
}

int main() {
    int n;

    cout << "Digite o numero de funcionarios: ";
    cin >> n;

    cout << "O numero de permutacoes possiveis (P(n)) = " << fatorial(n) << endl;

    return 0;
}

