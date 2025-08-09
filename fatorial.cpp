//fatorial
#include <iostream>
using namespace std;

int main(){
	int numero;
	int i;
	int acum =1;
	
	cout<<"Digite um numero:";
	cin>>numero;
	i = numero;
	
	
	
	while (i>=1){
		acum = acum * i;
		i--;
	}
	
	cout<<"\nO numero fatorado eh : "<< acum;
	
	return 0;
}
