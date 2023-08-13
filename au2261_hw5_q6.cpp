#include <iostream>
using namespace std;

double eApprox(int n) {
    double e = 1.0, factorial = 1.0;

    for (double i = 1; i < (n + 1); i++) {
        factorial *= i;
        e += (1 / factorial);
    }

    return e;
}

int main() {
    cout.precision(30);

    for (int n = 1; n <= 15; n++) {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }

    return 0;   
}