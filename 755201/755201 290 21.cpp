#include <iostream>
using namespace std;
int main() {
    float money;

    do {
        cout << "輸入金額: ";
        cin >> money;
    }
    while (money <= 0);

    int money1 = money * 10, time = 0;

    while (money1 >= 10000) {
        money1 -= 10000;
        time++;
    }
    while (money1 >= 5000) {
        money1 -= 5000;
        time++;
    }
    while (money1 >= 1000) {
        money1 -= 1000;
        time++;
    }
    while (money1 >= 500) {
        money1 -= 500;
        time++;
    }
    while (money1 >= 100) {
        money1 -= 100;
        time++;
    }
    while (money1 >= 50) {
        money1 -= 50;
        time++;
    }
    while (money1 >= 10) {
        money1 -= 10;
        time++;
    }
    while (money1 >= 5) {
        money1 -= 5;
        time++;
    }
    while (money1 >= 1) {
        money1 -= 1;
        time++;
    }
    cout << time;
}
