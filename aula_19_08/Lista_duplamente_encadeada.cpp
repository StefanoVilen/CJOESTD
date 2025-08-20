#include <iostream>
using namespace std;


struct No {
    int valor;
    No* proximo;
    No* ant;
    
};

void inserirFim(No*& cabeca, int valor){
    No* novoNo = new No{valor, nullptr};
   
    No* aux = cabeca;
    while(aux->proximo != nullptr){
        aux = aux->proximo;
    }
    novoNo->ant = aux;
    aux->proximo = novoNo;
}

void Exibir(const No* cabeca ){
    const No* aux = cabeca;
    while(aux != nullptr){
        cout << aux->valor << " ";
        aux = aux->proximo;
    }
}

int main(){
    int novoValor;
    No* cabeca = nullptr;
    do{
        cin >> novoValor;
        if (cabeca == nullptr){
            No * novoNo = new No{novoValor, nullptr};
            cabeca = novoNo;
        }else{
            inserirFim(cabeca, novoValor);
        }
        Exibir(cabeca);
    } while (novoValor != -1);
    return 0;
}