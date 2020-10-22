#include <iostream>
using namespace std;

int main() {
    int ID = 0;
    cin >> ID;
    int res = 0, num1 = -1, index = 0, num2 = -1, amount = 0;
    res = ID;
    for (int i = 0 ; i < 9 ; i++) {
        amount = res % 10;
        if (amount > num1) {
            num1 = amount;
            index = i;
        }    
        res = res / 10;
    }    
    res = ID;
    for (int i = 0 ; i < 9 ; i++) {
        amount = res % 10;
        if ((amount > num2) && (i != index)) {
            num2 = amount;
        }
        res = res / 10;
    }
    int check = 0;
    check = ID % 1000;
    if ((num1 * num1 + num2 * num2) == check) {
        cout << "Good Morning!\n";
    } else {
        cout << "SPY!\n";
    }
}
