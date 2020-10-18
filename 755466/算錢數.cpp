#include <iostream>
using namespace std;
int main() {
    float money;
    int total = 0, ans = 0;


    cout << "金額：";
    cin >> money;
    ans = money * 10;
    if (ans < 0) {
        cout << "金額不可能小於0喔!";
    }

    else {
        do {
            total = total + ans / 10000;
            ans %= 10000;
        } while (ans > 10000);

        do {
            total = total + ans / 5000;
            ans %= 5000;
        } while (ans > 5000);

        do {
            total = total + ans / 1000;
            ans %= 1000;
        } while (ans > 1000);

        do {
            total = total + ans / 500;
            ans %= 500;
        } while (ans > 500);

        do {
            total = total + ans / 100;
            ans %= 100;
        } while (ans > 100);

        do {
            total = total + ans / 50;
            ans %= 50;
        } while (ans > 50);

        do {
            total = total + ans / 10;
            ans %= 10;
        } while (ans > 10);

        do {
            total = total + ans / 5;
            ans %= 5;
        } while (ans > 5);

        do {
            total = total + ans / 1;
            ans %= 1;
        } while (ans > 1);
        cout << "需要" << total << "個紙鈔或硬幣";
    }
}
