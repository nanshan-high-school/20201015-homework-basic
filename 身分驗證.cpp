#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, i, j, check, check2, max1, max2, Verification, Verification2, Verification3, checkV;
    long count;
    //144523050
    count = 1000000000;
    max1 = max2 = 0;

    cin >> Verification;
    Verification2 = Verification3 = Verification;

    for (i = 0; i < 9; i++) {
        count = count / 10;
        a = Verification / count;
        Verification = Verification % count;

        if (a > max1) {
            max1 = a;
            checkV = count;
        }

    }

    count = 1000000000;
    Verification2 = Verification2 - max1 * checkV;

    for (j = 0; j < 9; j++) {
        count = count / 10;
        b = Verification2 / count;
        Verification2 = Verification2 % count;

        if (b > max2) {
            max2 = b; 
        }
    }

    check = pow(max1, 2) + pow(max2, 2);
    check2 = Verification3 - (Verification3 / 1000) * 1000;

    if (check == check2) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
