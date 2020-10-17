#include <iostream>
using namespace std;

int main() {
    int current[9] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    int amount[9] = {0};

    float moneyf;
    cout << "How much money do you have: ";
    cin >> moneyf;
    int money = 10 * moneyf;
    
    do {
        cout << "Confirm your money: ";
        cin >> moneyf;
    } while (10 * moneyf != money);

    int count = 0;
    for (int counter=0; money != 0 && counter != 9; counter++) {
        while (money - current[counter] >= 0) {
            money -= current[counter];
            amount[counter]++;
        }
        if (amount[counter] != 0) {
            cout << current[counter] * 0.1 << " * " << amount[counter] << "\n";
        }
        count += amount[counter];
    }
    
    cout << "The simplest form to present " << moneyf << " is:\n";
    cout << "Total: " << count;
}
