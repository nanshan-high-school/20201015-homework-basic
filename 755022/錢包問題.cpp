#include <iostream>
using namespace std;
int main() {
    float moneyF;

    do {
        cout << "輸入金額";
        cin >> moneyF;
    }
    while (moneyF <= 0);

    int moneyI = moneyF * 10, num = 0;

    while(moneyI >= 10000) {
        moneyI -= 10000;
        num++;
    }
    while(moneyI >= 5000) {
        moneyI -= 5000;
        num++;
    }
    while(moneyI >= 1000) {
        moneyI -= 1000;
        num++;
    }
    while(moneyI >= 500) {
        moneyI -= 500;
        num++;
    }
    while(moneyI >= 100) {
        moneyI -= 100;
        num++;
    }
    while(moneyI >= 50) {
        moneyI -= 50;
        num++;
    }
    while(moneyI >= 10) {
        moneyI -= 10;
        num++;
    }
    while(moneyI >= 5) {
        moneyI -= 5;
        num++;
    }
    while(moneyI >= 1) {
        moneyI -= 1;
        num++;
    }
    cout << num;
}
