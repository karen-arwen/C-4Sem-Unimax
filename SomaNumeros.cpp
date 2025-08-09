// Crie um programa que leia dois numeros fornecidos pelo usuário e imprima a soma deles
#include <stdio.h>
#include <iostream>
using namespace std; 

int main() {
    int num1, num2, soma;

    // Solicita ao usuário que insira dois números
    cout<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;

    // Calcula a soma dos números
    soma = num1 + num2;

    // Imprime o resultado
    cout<<num1<<" + "<<num2<<" = "<<soma;

    return 0;
}
