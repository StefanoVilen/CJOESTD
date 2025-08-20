#include <iostream>
using namespace std;


int fila[1000];
int filaP[1000];
int pilha[1000];


int inicio = 0;
int fim = 0;

void inserir(int valor){
        fila[fim] = valor;
        filaP[fim] = valor;
        pilha[fim] = valor;
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

int desempilhar(){
    int aux = fila[fim]; 
    fila[fim] = -1;

    return aux;
}

int removerPrioridade(){
    
    int maior = inicio, aux=0;
    for(int i = inicio; i < fim; i++){
        if(fila[i] > fila[maior]){
            maior = i;
            aux = fila[i];
        }
    }
    fila[maior] = -1;
      //{1,8,4,2,9,5}
   
    return aux;
}   
int desinfileirar(){
    int aux = fila[inicio];
    inicio++;
    return ;
}
int main(){
 int valor, op;
 cin >> op;
 
 
}