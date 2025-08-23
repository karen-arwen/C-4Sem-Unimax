#include <iostream>
#include <cstdlib.h>
#include <ctime>
#include <cctype>
using namespace std;


int contarCaracteres(const char* str){
	int cont = 0;
	while(*str != '\0'){
		if(!isspace(*str)||!isdigit(*str)){
			cont++;
		}
		
		str++;
	}
	return(cont);
}
void gera_int(int *vet, int d, int inicio, int final){
	srand(time(NULL));
	for(int i=0; i<d;){
		aux = rand()%final+1;
		if(aux >= inicio && aix <= final){
			vet[i] = aux;
			i++
		}
	}
	
}
void gera_float(float *vet, float d, float inicio, float final){
	
}

int main(){
	const char *texto = "Sexta feira";
	int dim, vi, vf, i;
	
	cout<<"Informe a dimensao do vetor";
	cin>>dim;
	int v[dim];
	cout<<"Informe o valor inicial da faixa";
	cin>> vi;
	cout<<"Informe o valor final da faixa";
	cin>> vf;
	
	cout<<contarCaracteres(texto);
	gera_int(v, dim, vi, vf);
	for(int i =0; i<dim; i++){
		
	}
	
	
	return 0; 
}

