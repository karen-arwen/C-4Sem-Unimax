#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> pilha;
    string entrada;

    cout << "Digite palavras (ou 'UNDO' para desfazer, 'SAIR' para encerrar):" << endl;

    while (true) {
        cin >> entrada;

        if (entrada == "SAIR") {
            break;
        }
        else if (entrada == "UNDO") {
            if (!pilha.empty()) {
                cout << "Desfazendo: " << pilha.top() << endl;
                pilha.pop();
            } else {
                cout << "Nada para desfazer!" << endl;
            }
        }
        else {
            pilha.push(entrada);
        }

        // Mostra conteúdo atual
        cout << "Texto atual: ";
        stack<string> copia = pilha;  // cópia para exibir sem perder os dados
        string invertido = "";

        while (!copia.empty()) {
            invertido = copia.top() + " " + invertido;
            copia.pop();
        }
        cout << invertido << endl;
    }

    return 0;
}

