#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	stack<int>pilha;
	srand(time(NULL));
/*	pilha.push(10);
	pilha.push(20);
	pilha.push(30);
	 
*/
	for(int i =1; i<=10; i++){
		/*pilha.push(i);*/
		int ale = rand()%21; //herd no.s aleatórios de 0 a 20
		pilha.push(ale);
		cout << "Pilha [ " << i << " ] = " << pilha.top() << endl;
			}	
	cout << "Tamanho da pilha " << pilha.size() << endl;
	cout << "Topo da pilha = " << pilha.top() << endl;
	/*
	pilha.pop();
	cout << endl;*/
	
	while(!pilha.empty()){
			
	
	}
	
	cout << "Tamanho da pilha " << pilha.size() << endl;
	cout << "Topo da pilha = " << pilha.top() << endl;
	
}
