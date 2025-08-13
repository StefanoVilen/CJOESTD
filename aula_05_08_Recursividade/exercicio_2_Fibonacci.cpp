#include <iostream>

using namespace std;

long long v[100] = {0};

//com memorização
long long fibonacciMemo(int n){
    if(n <= 1){ //case base
        return 1;
    }
    if(v[n] != 0){
        return v[n];
    }
    return v[n] = fibonacciMemo(n-1) + fibonacciMemo (n-2); //passo recursivo
}



//sem memorização Use somente em numeros pequenos para não sobrecarregar a pilha
int fibonacci(int n){
    if(n <= 1){ //case base
        return 1;
    }
    return fibonacci(n-1) + fibonacci (n-2); //passo recursivo
}

//intereção
int fibonacciI(int n){
    if(n <= 1){
        return 1;
    }
    int anterior = 0;
    int atual = 1;


    for (int i = 2; i <= n; i++){
        int proximo = atual + anterior;
        anterior = atual;        
        atual = proximo;
    }
    
    return atual;
}   


int main(){
    int n;
    cin >> n;
    //cout << fibonacci(n) << endl;
    //cout << fibonacciI(n) << endl;
    cout << fibonacciMemo(n) << endl;
    return 0;
}