#include <iostream>

using namespace std;

int soma( int i, int n){
       
    if(i > n){
        return 0;
    }
    return i + soma(i + 1, n);
}

int somaI(int n){
    int resultado = 0;

    for(int i = 1; i <= n; i++){
        resultado += i;
    }

    return resultado;
}

int somaFormula(int n){
    return n * (1 + n) / 2;
}


int main(){
    int n;
    cin >> n;
    cout << soma(1, n) << endl;
    cout << somaI(n) << endl;
    cout << somaFormula(n) << endl; 
    return 0;
}