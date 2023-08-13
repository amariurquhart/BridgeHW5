#include <iostream>
using namespace std;

int fib(int n) {

    int f1 = 1, f2 = 1, ff = 1;

    for (n = n; n > 2; --n) {
        ff = f1 + f2;
        f1 = f2;
        f2 = ff;
    }
    
    return ff;
}
    
int main() {

    int n, fibonacciSum;

    cout << "Please enter a positive integer: ";
    cin >> n;

    fibonacciSum = fib(n);

    cout << fibonacciSum;

    return 0;
}

