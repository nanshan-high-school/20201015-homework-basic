#include <iostream>
using namespace std;

int main() {
    float num_float;
    int total = 0, num_int;
    int x10000, x5000, x1000, x500, x100, x50, x10, x5, x1;
    cout << "請輸入金額：";
    cin >> num_float;
    num_int = num_float * 10;
    do {
        total = total + num_int / 10000;
        x10000 = num_int / 10000;
        num_int = num_int % 10000;
        total = total + num_int / 5000;
        x5000 = num_int / 5000;
        num_int = num_int % 5000;
        total = total + num_int / 1000;
        x1000 = num_int / 1000;
        num_int = num_int % 1000;
        total = total + num_int / 500;
        x500 = num_int / 500;
        num_int = num_int % 500;
        total = total + num_int / 100;
        x100 = num_int / 100;
        num_int = num_int % 100;
        total = total + num_int / 50;
        x50 = num_int / 50;
        num_int = num_int % 50;
        total = total + num_int / 10;
        x10 = num_int / 10;
        num_int = num_int % 10;
        total = total + num_int / 5;
        x5 = num_int / 5;
        num_int = num_int % 5;
        total = total + num_int / 1;
        x1 = num_int / 1;
        num_int = num_int % 1;
    } while (num_int > 0);
    if (x10000 > 0) {
        cout << "用了 " << x10000 << " 個 1000 元\n";
    }
    if (x5000 > 0) {
        cout << "用了 " << x5000 << " 個 500 元\n";
    }
    if (x1000 > 0) {
        cout << "用了 " << x1000 << " 個 100 元\n";
    }
    if (x500 > 0) {
        cout << "用了 " << x500 << " 個 50 元\n";
    }
    if (x100 > 0) {
        cout << "用了 " << x100 << " 個 10 元\n";
    }
    if (x50 > 0) {
        cout << "用了 " << x50 << " 個 5 元\n";
    }
    if (x10 > 0) {
        cout << "用了 " << x10 << " 個 1 元\n";
    }
    if (x5 > 0) {
        cout << "用了 " << x5 << " 個 0.5 元\n";
    }
    if (x1 > 0) {
        cout << "用了 " << x1 << " 個 0.1 元\n";
    }
    cout << "總共 " << total << " 個銅板和紙鈔";
}
