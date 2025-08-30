/*

*/
#include <iostream>
using namespace std;
void some(int n){
	int s = 0,i;
	i =n;
	while(i>=1){
		s+=i;
		cout << i << " ";
		i--;
	}
	
	cout << "Somatorio = " <<s;
}

int main(){
	int num;
	
	cout<< "Digite o numero ";
	cin >> num;
	some(num);
	
	return 0;
}





