/*3. Crie uma fila de números. Depois, transfira os numeros pares para uma nova fila chamada filaPares, e as impares para filaImpares. 
Ao final, mostre as duas filas separadamente.*/
#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    queue<int> filaPares;
    queue<int> filaImpares;

    int nmr;
    
    while (true){
        cout << "Digite um Numero (enter para sair): ";
        cin >> nmr;
        if (!cin) break; // condição de parada
        if(nmr%2 == 0){
		
        	filaPares.push(nmr);
		} else{
			filaImpares.push(nmr);          // insere na fila
		}
    }
    cout << endl;
    

    cout << "Tamanho da fila Par: " << filaPares.size() << endl;
    cout << endl;
    cout << "Tamanho da fila Impar: " << filaImpares.size() << endl;
    cout << endl;

    // Mostra fila (remove da fila mostrando o atendido)
    cout << "Lista Par:" << endl;
    while(!filaPares.empty()){
        cout<< filaPares.front() << " "<< endl;
        filaPares.pop();
    }
    cout << endl;
    
    cout << "Lista Impar:" << endl;
    while(!filaImpares.empty()){
        cout<< filaImpares.front() << " "<< endl;
        filaImpares.pop();
    }
    cout << endl;

    return 0;
}

