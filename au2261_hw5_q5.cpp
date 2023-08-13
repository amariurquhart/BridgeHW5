#include <iostream> 
#include <cmath>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) {
    
    int n;
    outSumDivs -= num;
    outCountDivs--;
    
    for (n = 1; ((n * n) <= num); n++) {
        if (num % n == 0) {
            outCountDivs++;
            outSumDivs += n;
            if (n != (num / n)) {
                outSumDivs += (num / n);
                outCountDivs++;
            }
        }
    }
}

bool isPerfect(int num, int outSumDivs) {
    if (outSumDivs == num)
        return true;
    else    
        return false;
}

int main() {

    int num, i, outCountDivs = 0, outSumDivs = 0, outSumDivs2 = 0;
    bool isNumPerfect;

    cout << "Please enter a positive integer > 1: ";
    cin >> num; 

    cout << "Perfect numbers: ";

    for (i = 2; i <= num; i++) {
        outCountDivs = 0;
        outSumDivs = 0;
        outSumDivs2 = 0;
        analyzeDividors(i, outCountDivs, outSumDivs);
        isNumPerfect = isPerfect(i, outSumDivs);
        if (isNumPerfect == 1)
            cout << i << " ";
    }
    
    cout << "\nAmicable pairs: ";

    for (i = 2; i <= num; i++) {    
        outCountDivs = 0;
        outSumDivs = 0;
        outSumDivs2 = 0;
        analyzeDividors(i, outCountDivs, outSumDivs);
        analyzeDividors(outSumDivs, outCountDivs, outSumDivs2);
        isNumPerfect = isPerfect(i, outSumDivs);
        if ((outSumDivs2 == i) && (outSumDivs <= num) && (isNumPerfect == 0))
            cout << outSumDivs2 << " ";
    }
    
    return 0;
}