#include <iostream>
using namespace std;

int soma(int n){
	
	if (n ==1){
		return 1;
	} else{
		return n + soma(n-1);
	}
	
}

int main(){
	int num;
	
	cout<< "Digite o numero ";
	cin >> num;
	cout << "Somatorio = " <<soma(num)<<endl;
	
	return 0;
}
