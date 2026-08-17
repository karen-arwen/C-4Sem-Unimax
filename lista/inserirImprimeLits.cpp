#include <iostream>
#include <ctime>

using namespace std;
struct No{
	int dado;
	No* proximo;
};

void inserir(No*& inicio, int valor){
	No* novo= new No{valor, inicio};
	inicio = novo;
}

void imprime(No* inicio){
	while(inicio != NULL){
		cout << inicio -> dado<<" | ";
		inicio = inicio -> proximo;
	}
	cout<<" NULL"<< endl;
}

int contar(No* inicio){
	int cont=0;
	while(inicio != NULL){
		cont++;
		inicio = inicio -> proximo;
	}
	return cont;
}

bool buscar(No* inicio, int valor){
	while(inicio != NULL){
		if(inicio -> dado == valor) return true;
		inicio = inicio -> proximo;
	}
	return false;
	
}

void remover(No*& inicio, int valor){
	
	
}

int main(){
	No* lista = NULL;
	//inserir(lista,30);
	//inserir(lista,20);
	//inserir(lista,10);
	
	int n;
	srand(time(NULL));
	
	while(true){
		n = rand()%50;
		if(n==0) break;
		inserir(lista,n);
	}
	imprime(lista);
	cout <<"\nNumeros na lista = " <<contar(lista)<<endl;
	if(buscar(lista,50)){
		cout<<"Numero encontrado!!"<<endl;
	} else {
		cout<<"Numero NAO encontrado!!"<<endl;
	}
	
	return 0;
}