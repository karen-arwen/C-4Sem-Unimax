//// 1. Funções e ponteiros

// Implemente uma função 'trocar' que inverta os valores de duas variáveis inteiras usando ponteiros

#include <iostream>
using namespace std;

void troca(int *a, int*b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}


int main(){
	int x = 10, y = 70;
	troca(&x,&y);
	cout << "X = " << x << endl<< "Y = " << y <<endl;
	
	
	
}


