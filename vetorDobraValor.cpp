#include <iostream>
using namespace std;

void dobra_valor(int *vet, int tamanho){
	for(int i = 0; i < tamanho; i++){
		vet[i]*=2;
	}
}

void crescente(int *vet, int tamanho){
	for (int i = 0; i< tamanho; i++){
		
	}
	
}

int main(){
	int v[] = {1,2,3,4};
	dobra_valor(v,4);
	for(int i =0; i<=3; i++){
		cout << v[i] << " ";
	}
	
	return 0;
}
