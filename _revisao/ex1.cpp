//// 1. Fun��es e ponteiros

// Implemente uma fun��o 'trocar' que inverta os valores de duas vari�veis inteiras usando ponteiros

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


