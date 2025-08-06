#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n <= 1){ //case base
        return n;
    }
    return fibonacci(n-1) + fibonacci (n-2); //passo recursivo
}

int fibonacciI(int n){
    if(n <= 1){
        return n;
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
    cout << fibonacci(n) << endl;
    cout << fibonacciI(n) << endl;
    return 0;
}