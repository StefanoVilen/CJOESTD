#include <iostream>

using namespace std;



int main(){
    int n;
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    cin >> n;
    
    for(int i = 0; i < 10; i++){
        if (n == v[i]) {
            cout << "encontrado" << endl;
            break;
        }
    }

    for(int num : v){
        if (num == n) {
            cout << "encontrado" << endl;
            return 0;
        }
    }
    cout << "valor nao encontrado";
}