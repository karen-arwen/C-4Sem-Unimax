#include <iostream>
using namespace std;

// Soma por referência : Crie uma função que receba dois inteiros e retorne a soma por referência

void somaReferencia (int a, int b, int &result){
	result = a+b;
	
}

void troca(int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
	
}




int main(){
	
	int a=5, b=3, r;
	cout <<"a = " <<a<<endl;
	cout
	
	
	somaReferencia (a,b,r);
	cout << r << endl;
	
	troca(&a,&b);
	cout << "a = "<< a <<endl<< "b = " <<b << endl;
	
	
	return 0;
}
