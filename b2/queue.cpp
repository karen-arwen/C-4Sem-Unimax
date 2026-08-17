#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
	queue<int> fila;
	int n;
	srand(time(NULL));
	
	for(int i=1; i<15; i++){
		//cout<<"Digite um numero: ";
		//cin>>n;
		n = rand()%10; //sorteia numeros inteiros de 0 a 9
		fila.push(n);
		
	}
		cout<<endl;
	
	cout<<"Elemento do front: " << fila.front() << endl;
	cout<<"Elemento do back: " << fila.back() << endl;
	cout<<"Tamanho da fila: " << fila.size() << endl;
	cout<<endl;
	cout<<"Pilha cheia? (1 vazia, 0 com numeros) : " << fila.empty() << endl;
	cout<<endl;
	cout<<"Numeros na fila: ";
	while(!fila.empty()){
		cout<<fila.front() << " ";
		fila.pop();
	}
	cout<<endl;
	
	cout<<"Pilha cheia? (1 vazia, 0 com numeros) : " << fila.empty() << endl;
	
	return 0;
}
