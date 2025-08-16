#include <iostream>
using namespace std;

void quad_valor(int x){
	x = x * x;
}

void quad_ref(int &x){
	x = x * x;
}

int main(){
	int a = 3, b =3;
	quad_valor(a);
	quad_ref(b);
	cout << a << " " << b;



return 0;

}
