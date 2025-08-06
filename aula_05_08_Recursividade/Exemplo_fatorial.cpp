#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1){ //case base
        return 1;
    }
    return n * fatorial(n-1); //passo recursivo
}

int fatorialI(int n){
    int resultado = 1;

    for(int i = 2; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}


int main(){
    int n;
    cin >> n;
    cout << fatorial(n);
    return 0;
}