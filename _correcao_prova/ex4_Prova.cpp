#include <iostream>
#include <stack>
#include <string>
#include <cctype> 
using namespace std;

int operacao(char opcao) {
    if (opcao == '+' || opcao == '-') {
        return 1;
    } else if (opcao == '*' || opcao == '/') {
        return 2;
    } else {
        return 0;
    }
}

string infPpos(string infixa) {
    stack<char> pilha;
    string posfixa = "";

    for (size_t i = 0; i < infixa.size(); ++i) {
        char c = infixa[i];

        if (isspace(c)) continue; 

        if (isalnum(c)) {
            posfixa += c; 
        }
        else if (c == '(') {
            pilha.push(c);
        }
        else if (c == ')') {
            while (!pilha.empty() && pilha.top() != '(') {
                posfixa += pilha.top();
                pilha.pop();
            }
            if (!pilha.empty()) pilha.pop(); // remove '('
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            while (!pilha.empty() && pilha.top() != '(' &&
                   operacao(pilha.top()) >= operacao(c)) {
                posfixa += pilha.top();
                pilha.pop();
            }
            pilha.push(c);
        }
      
    }

    while (!pilha.empty()) {
        if (pilha.top() == '(') { pilha.pop(); continue; } 
        posfixa += pilha.top();
        pilha.pop();
    }

    return posfixa;
}

int main() {
    string expressao;
    cout << "Digite a expressao: ";
    getline(cin, expressao);

    cout << "Infixa: " << expressao << endl;
    cout << "Posfixa: " << infPpos(expressao) << endl;
    return 0;
}

