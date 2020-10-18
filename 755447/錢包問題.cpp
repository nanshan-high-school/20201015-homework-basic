#include <iostream>
using namespace std;
int main() {
    float money;
    int a = 0, b = 0;
    
    cout << "錢包:";
    cin >> money;
    a = money * 10;
    if (a<0) {
        cout << "錢不會小於0:";
    }
    else {
        do {
            b = b + a / 10000;
            a %= 10000;
        }while (a >= 10000);

        do {
            b = b + a / 5000;
            a %= 5000;
        }while (a >= 5000);

        do {
            b = b + a / 1000;

            a %= 1000;
        }while (a >= 1000);

        do {
            b = b + a / 500;
            a %= 500;
        }while (a >= 500);

        do {
            b = b + a / 100;
            a %= 100;
        }while (a >= 100);

        do {
            b = b + a / 50;
            a %= 50;
        }while (a >= 50);

        do {
            b = b + a / 10;
            a %= 10;
        }while (a >= 10);

        do {
            b = b + a / 5;
            a %= 5;
        }while (a >= 5);

        do {
            b = b + a / 1;
            a %= 1;
        }while (a >= 1);
        cout << "最少有" << b << "個銅板+紙鈔可湊到金額";
    }
}
