#include <iostream>
using namespace std;


int calls = 0;


int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    calls += 2; 
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int N; 
    cin >> N;

    while (N--) {
        int X;
        cin >> X;

        calls = 0; 
        int result = fib(X);

        cout << "fib(" << X << ") = " << calls << " calls = " << result << endl;
    }

    return 0;
}