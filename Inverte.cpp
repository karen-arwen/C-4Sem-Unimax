// Tendo como entrada um nmr com 3 digitos (centena). Inverter esse nmr
// N = 253 -> inv 352

#include <iostream>
using namespace std;

int main(){
	
	int n1, q1, r1, q2, r2, inv;
	
	cout<<"Informa um numero (centena)";
	cin>>n1;
	
	q1 = n1/100;
	r1=n1%100;
	q2=r1/10;
	r2=r1%100;
	
	cout<<"O valor invertido será:";
	
	
	return 0;
	
}
