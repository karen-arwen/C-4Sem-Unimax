#include <iostream>
using namespace std;

void soma(int a, int b){
	int soma;
	soma = a + b;
		
	cout << a << "+" << b << " = " << soma << endl;

}

void subtracao(int a, int b){
	int subtracao;
	subtracao = a - b;
		
	cout << a << "-" << b << " = " << subtracao << endl;

}

void multiplicacao(int a, int b){
	int multiplicacao;
	multiplicacao = a * b;
		
	cout << a << "*" << b << " = " << multiplicacao << endl;

}

void divisao(int a, int b){
	int divisao;
	divisao = a / b;
		
	cout << a << "/" << b << " = " << divisao << endl;
	

}

void elevado(int a, int b){
	int i = 1 ;
	int acum = a;
	while (i < b) {
		acum = acum * a;
		i++;
	
	}
	
	cout <<a<< " elevado a " << b << " = " << acum;
}

void escreve(void){
	cout << "Alexandre" << endl;
}

//int aleatorio(){
//	int a;
//	srand(time(NULL));
//	a = rand()%100;
//	return a; 
//}

// Soma por referência : Crie uma função que receba dois inteiros e retorne a soma por referência

int somaReferencia (int a, int b){
	int soma;
	
	soma = 
	
}

int main(){
	
	int a =2, b = 3, result;
	
	escreve();
	soma(a,b);
	subtracao(a,b);
	multiplicacao(a,b);
	divisao(a,b);
	elevado(a,b);
	
	
	
	
	return 0;
}
