/*3. Crie uma fila de números. Depois, transfira os numeros pares para uma nova fila chamada filaPares, e as impares para filaImpares. 
Ao final, mostre as duas filas separadamente.*/
#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    queue<int> original;
    queue<int> par;
    queue<int> impar;
    srand(time(NULL));
    int n;
    
    cout << "Fila Original: ";
    for(int i = 1; i < 15; i++){        
        n = rand() % 10;
        cout << n << " ";
        original.push(n);
    }
    cout << endl;

    while(!original.empty()){                     // ) faltando
        if (original.front() % 2 == 0){
            par.push(original.front());           // usar front()
        } else {
            impar.push(original.front());         // usar front()
        }
        original.pop();                           // ; faltando
    }
    
    cout << "Fila par: ";
    while(!par.empty()){
        cout << par.front() << " ";
        par.pop();
    }
    cout << endl;
    
    cout << "Fila impar: ";
    while(!impar.empty()){
        cout << impar.front() << " ";
        impar.pop();                              
    }
    cout << endl;

    return 0;
}

