#include <iostream>
#include <iomanip>
using namespace std;

double f(int n) {
    if (n == 0) return 2.0;
    return 2.0 + 1.0 / f(n - 1);
}

int main() {
    int N;
    cin >> N;

    double result;
    if (N == 0) {
        result = 1.0; 
    } else {
        result = 1.0 + 1.0 / f(N - 1); 
    }

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}