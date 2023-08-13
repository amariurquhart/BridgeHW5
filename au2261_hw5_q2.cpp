#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol) {
    
    int symbols, space, i;

    for (i = 1; i <= n; i++) {
        for (space = (m - i); space > 0; space--)
            cout << " ";
        for (symbols = ((2 * i) - 1); symbols > 0; symbols--)
            cout << symbol;
        cout << endl;
    } 
}

void printPineTree(int n, char symbol) {
    
    int m, i;

    for (i = 2; i <= (n + 1); i++) {
        m = (n + 1);
        printShiftedTriangle(i, m, symbol);
    }
}

int main() {

    int n;
    char symbol;

    cout << "Please enter a positive integer followed by a character to make a tree: ";
    cin >> n >> symbol;

    printPineTree(n, symbol);

    return 0;
}