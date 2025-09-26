#include <iostream>
using namespace std;

// Função recursiva para calcular potência
double potencia(double base, int expoente) {
    if (expoente == 0) return 1;              // caso base
    else return base * potencia(base, expoente - 1); // chamada recursiva
}

int main() {
    double C, i; 
    int t;

    cout << "Digite o capital inicial: ";
    cin >> C;

    cout << "Digite a taxa de juros (em decimal, ex: 0.05 para 5%): ";
    cin >> i;

    cout << "Digite o tempo em meses: ";
    cin >> t;

    // Calcula montante
    double M = C * potencia(1 + i, t);

    cout << "Montante final: " << M << endl;

    return 0;
}

