#include <iostream>
using namespace std;


struct No {
    int valor;
    No* proximo;
};

void inserirFim(No* cabeca, int valor){
    No* novoNo = new No{valor, nullptr};
    if(cabeca == nullptr)
        cabeca = novoNo;
    else{
        No* aux = cabeca;
        while(aux->proximo != nullptr){
            aux = aux->proximo;
        }
        aux->proximo = novoNo;
    }
}

int main(){
    
    int novoValor;
    cin >> novoValor;
    
    No* cabeca = nullptr;

    inserirFim(cabeca, novoValor);
    return 0;
}