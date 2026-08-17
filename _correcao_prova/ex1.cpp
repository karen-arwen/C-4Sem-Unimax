#include <iostream>
using namespace std;

void vetor (int *vet, int dim){
    int i, j , aux;
    for ( i = 0; i <dim-1; i++)
    {
        for ( j = i+1; j < dim; j++)
        {
            if (vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
        
    }
    
}

int main(){
    int dim, i;
    cout << "Digite a dimensao do vetor: ";
    cin >> dim;
    int *vet = new int[dim];
    for ( i = 0; i < dim; i++)
    {
        cout << "Digite o elemento " << i+1 << ": ";
        cin >> vet[i];
    }
    vetor(vet, dim);
    cout << "Vetor ordenado: ";
    for ( i = 0; i < dim; i++)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
    delete[] vet;
    return 0;
}