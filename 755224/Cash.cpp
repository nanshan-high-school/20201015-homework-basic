#include <iostream>
using namespace std;

int main() {
    int current[9] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    int amount[9] = {0};
    float moneyf;
    int money;
    
    do {
        cout << "\nEnter your money: ";
        cin >> moneyf;
        money = 10 * moneyf;
        if (moneyf < 0) {
            cout << "Money must be greater than 0\n";
        }
        if (10 * moneyf != money) {
            cout << "The minimum unit is 0.1!\n";
        }
    } while (10 * moneyf != abs(money));

    int count = 0;
    cout << "The simplest form to present " << moneyf << " is:\n";
    for (int counter = 0; money != 0 && counter != 9; counter++) {
        amount[counter] = money / current[counter];
        money = money % current[counter];
        if (amount[counter] != 0) {
            cout << current[counter] * 0.1 << " * " << amount[counter] << "\n";
        }
        count += amount[counter];
    }
    
    cout << "Total: " << count;
}
