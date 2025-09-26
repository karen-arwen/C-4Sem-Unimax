//// 3. Pilha (atd::stack)

// Usando pilha, implemente a conversão de decimal para binário


#include <iostream>
#include <stack>
using namespace std;
void decbin(int num){
	stack<int> pilha;
	if(num ==0){
		cout << "0";
	}
	while(num>0){
		pilha.push(num%2);
		num/=2;
	}
	cout<<"Binario = ";
	while(!pilha.empty()){
		cout<<pilha.top();
		pilha.pop();
	}
	
}

int main(){
	int num;
	cout<<"Digite o decimal: ";
	cin >> num;
	cout<<"Decimal = "<<num << endl;
	decbin(num);
	return 0;
	
	
}





