//fatorial crescente
#include <iostream>
using namespace std;

int main(){
	int numero;
	int i;
	int acum =1;
	
	cout<<"Digite um numero:";
	cin>>numero;
	i = 1;
	
	
	
	while (i<=numero){
		acum = acum * i;
		i++;
	}
	
	cout<<"\nO numero fatorado eh : "<< acum;
	
	return 0;
}
