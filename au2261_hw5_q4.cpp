#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num){

    int i;

    for (i = 1; (i*i) < num; i++) {
        if (num % i == 0)
            cout << i << " ";
    }
    
    for (i = i; i >= 1; i--) {
        if (num % i == 0)
            cout << (num/i) << " ";
    }
}

int main() {

    int n;

    cout << "Please enter a positive integer >= 2: ";
    cin >> n;
    printDivisors(n);

    return 0;
}