#include <iostream>
using namespace std;

int main(){
	
	while (true){
	
		int num;
		
		cout<<"\nDigite um numero:";
		cin>>num;
		
		if(num%2==0){
			cout<<"\nEh par\n";
		}
		else{
			cout<<"\nEh Impar\n";
		}
	}
	return 0;
}
