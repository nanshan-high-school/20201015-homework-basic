#include <iostream>
using namespace std;
int main() {
    float a;
    int b = 0;
    int c = a * 10;

    do {
        cout << "金額";
        cin >> a;
    } while (a < 0);

    c = a * 10;
    b = b + int(c / 10000);
    c = a * 10;
    c = c % 10000;
    b = b + int(c / 5000);
    c = c % 50000;
    b = b + int(c / 1000);
    c = c % 1000;
    b = b + int(c / 500);
    c = c % 500;
    b = b + int(c / 100);
    c = c % 100;
    b = b + int(c / 50);
    c = c % 50;
    b = b + int(c / 10);
    c = c % 10;
    b= b + int(c / 5);
    c = c % 5;    
    b = b + int(c / 1);
    c = c % 1;
    cout << b;
}

