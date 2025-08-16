#include <iostream>
using namespace std;

void alterarValor (int &x){
	x = 10	;
}


void n_alterar_valor(int x){
	x = 10;
}

int main() {
	
	int a = 5;
	
	cout << "Valor inicial = " << a << endl;
	n_alterar_valor(a);
	cout << "Valor 'n_alterar' = " << a << endl;
	
	alterarValor(a);
	cout << "Valor 'alterarValor' = " << a << endl;
	

	
	return 0;
}
