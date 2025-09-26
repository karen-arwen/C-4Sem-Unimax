#include <iostream>
#include <cstdlib>  // para rand()
#include <ctime>    // para srand()
using namespace std;

// Fun��o para exibir vetor usando ponteiros
void exibirNotas(int *vetor, int n) {
    cout << "Notas: ";
    for (int i = 0; i < n; i++) {
        cout << *(vetor + i) << " "; // acesso via ponteiro
    }
    cout << endl;
}

// Fun��o para ordenar em ordem decrescente usando ponteiros (bubble sort)
void ordenarDecrescente(int *vetor, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(vetor + j) < *(vetor + j + 1)) {
                int temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

// Fun��o para calcular estat�sticas
void estatisticas(int *vetor, int n) {
    int maior = *vetor;   // j� ordenado, mas podemos generalizar
    int menor = *vetor;
    int soma = 0;

    for (int i = 0; i < n; i++) {
        if (*(vetor + i) > maior) maior = *(vetor + i);
        if (*(vetor + i) < menor) menor = *(vetor + i);
        soma += *(vetor + i);
    }

    double media = (double)soma / n;

    cout << "Maior nota: " << maior << endl;
    cout << "Menor nota: " << menor << endl;
    cout << "Media da turma: " << media << endl;
}

int main() {
    srand(time(0)); // inicializa gerador de n�meros aleat�rios
    const int n = 10; // n�mero de alunos
    int notas[n];

    // Gera notas aleat�rias (0 a 10)
    for (int i = 0; i < n; i++) {
        notas[i] = rand() % 11; // valores entre 0 e 10
    }

    cout << "Notas originais: ";
    exibirNotas(notas, n);

    // Ordena em ordem decrescente
    ordenarDecrescente(notas, n);

    cout << "Notas ordenadas (decrescente): ";
    exibirNotas(notas, n);

    // Calcula estat�sticas
    estatisticas(notas, n);

    return 0;
}

