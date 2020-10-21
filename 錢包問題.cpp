#include <iostream>
using namespace std;

int main() {
    float money = 0;

    do {
        cout << "輸入金額: ";
        cin >> money;
    } while (money < 0);
    
    int num = 0;
    int price = money*10;
    int remainder = price;
    //remainder: 餘數(英文課???

    num = price / 10000;
    remainder = price % 10000;

    num += remainder / 5000;
    remainder = price % 5000;

    num += remainder / 1000;
    remainder = price % 1000;

    num += remainder / 500;
    remainder = price % 500;

    num += remainder / 100;
    remainder = price % 100;

    num += remainder / 50;
    remainder = price % 50;

    num += remainder / 10;
    remainder = price % 10;

    num += remainder / 5;
    remainder = price % 5;

    num += remainder;
    remainder = price % 1;

    cout << "最少要" << num << "個銅板+紙鈔";
}