#include <iostream>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX 10

class Pilha{
	private:
		int topo;
		int vet[MAX]; //Vetor => pilha
	
	public: 
		Pilha(){
			topo = -1; // Inicializa a pilha
		}
		
		bool estaCheia(){
			return topo == MAX -1;
		}
		
		bool estaVazia(){
			return topo == -1;
		}
		
		void empilhar(int valor){
			if(estaCheia()){
				cout << "Pilha Cheia " << endl;
				
			} else {
				topo ++;
				vet [topo] = valor;
				cout << "Valor " << valor << " empilhado " << endl;
				
			}
		}
		
		int desempilhar(){
			if (estaVazia()){
				cout << "Pilha Vazia " << endl;
				return -1;
			} else {
				int valor = vet[topo];
				topo--;
				return valor;
			}
		}
		
		int topoPilha(){
			if(estaVazia()){
				cout << "Pilha Vazia " << endl;
				return -1;
			} else {
				return vet[topo];
			}
		}
		
		void exibir(){
			if(estaVazia()){
				cout << "Pilha Vazia " << endl;
				//return -1;
			} else {
				cout << "Elementos da Pilha: ";
				for(int i=topo; i>=0; i--){
					cout << vet[i] << " ";
				}
				
			
			}
			
		}
	
};

int main(){
	
	Pilha p;
	
	p.empilhar(10);
	p.empilhar(15);
	p.empilhar(20);
	
	p.exibir();
	
	cout << "Topo da pilha: " << p.topoPilha() << endl;
	cout << "Desempilhando: " << p.desempilhar() << endl;
	cout << "Novo Topo da pilha: " << p.topoPilha() << endl;

}




