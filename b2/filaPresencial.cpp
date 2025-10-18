/*3. Simule uma fila onde: Pessoas com mais de 60 anos entram numa fila prioritária.
Demais pessoas entram numa fila comum
Depois exiba a ordem de atendimento: prioritários primeiro, depois os da fila comum*/
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    queue<string> prioritaria;
    queue<string> comum;
    int id, quant;
    string nome;
    
    cout<<"Quantas pessoas vai cadastrar? : ";
    cin>>quant;
    
    for(int i = 0; i < quant; i++){        
        cout<<"Nome: ";
        cin>>nome;
        cout<<"Idade: ";
        cin>>id;
        if(id>60){
        	//prioritaria.push(nome + " (" + to_string(id)+")");
        	prioritaria.push(nome);
		}else{
			//comum.push(nome + " (" + to_string(id)+")");
			comum.push(nome);
		}
    }
    cout << endl;
	cout << "Fila de Atendimento: \n";
    while(!prioritaria.empty()){                    
        cout<<"Atendendo: " << prioritaria.front() << endl;
        prioritaria.pop();                           
    }
    
    while(!comum.empty()){                    
        cout<<"Atendendo: " << comum.front() << endl;
        comum.pop();                           
    }

    return 0;
}

