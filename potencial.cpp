#include <iostream>
using namespace std;

int potencia(int b, int e){
	int pot, i;
	i = 1;
	pot = 1;
	
	while (i<=e){
		pot*=b;
		i++;
	}
	return pot;
	
	}
	
int main(){
	int base, expo, p;
	cout<< "Digite a base ";
	cin >> base;
	cout << "Digite o expoente ";
	cin >> expo;
	p = potencia(base, expo);
	cout << base << " elevado a " << expo << " = " << p << endl;
	
}
