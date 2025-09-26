//// 2. Recursividade

// Implemente uma função recursiva que calcule a some dos elementos de um vetor

#include <iostream>
using namespace std;

int somavet(int v[], int n){
	if(n ==0){
		return 0; //caso base
	}
	return v[n-1]+somavet(v, n-1); //hipotese de indução
	
}


int main(){
	int v[] = {1,2,3,4};
	cout<<"Soma = " <<somavet(v,4) <<endl;
	
	
	
}



