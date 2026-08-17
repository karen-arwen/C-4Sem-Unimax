/*2. Simule uma fila de atendimento com nomes. o Usuário pode digitar quantos nomes quiser (até digitar "fim")
Depois, o programa deve simular o atendimento, mostrando o nome da pessoa atendida e recovendo o da fila*/
#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    queue<string> fila;
    string nome;
    
    while (true){
        cout << "Digite um nome ('fim' para sair): ";
        cin >> nome;
        if (nome == "fim") break; // condição de parada
        fila.push(nome);          // insere na fila
    }
    cout << endl;
    
    // Mostra front/back apenas se houver elementos
    if (!fila.empty()){
        cout << "Elemento do front: " << fila.front() << endl;
        cout << "Elemento do back: "  << fila.back()  << endl;
    } else {
        cout << "Fila vazia apos a entrada." << endl;
    }

    cout << "Tamanho da fila: " << fila.size() << endl;
    cout << endl;
    cout << "Fila vazia? (1 vazia, 0 com elementos) : " << fila.empty() << endl;
    cout << endl;

    // Simula o atendimento (remove da fila mostrando o atendido)
    cout << "Atendimento:" << endl;
    while(!fila.empty()){
        cout << "Atendendo: " << fila.front() << endl;
        fila.pop();
    }
    cout << endl;

    cout << "Fila vazia? (1 vazia, 0 com elementos) : " << fila.empty() << endl;

    return 0;
}

