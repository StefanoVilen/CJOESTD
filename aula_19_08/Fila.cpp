#include <iostream>
using namespace std;


int fila[4];
int inicio = 0;
int fim = 0;

void Enfileirar(int valor){
    
    if(fim == 4){
        cout << "Fila Cheia" << endl;
        return;
    }
        fila[fim] = valor;
        fim++;
}

void Exibir(){

    cout << endl;
    if (fim == 0){
        cout << "fila vazia" << endl;
    }  

    for(int i = inicio; i < fim; i++){
        cout << fila[i] << endl; 
    }
}


void desinfileirar(){
    inicio++;
}



int main(){
    int valor, i = 0;

    cin >> valor;
    Enfileirar(valor);
    cin >> valor;
    Enfileirar(valor);
    cin >> valor;
    Enfileirar(valor);
    cin >> valor;
    Enfileirar(valor);

    
    Exibir();
    desinfileirar();
    Exibir();
}