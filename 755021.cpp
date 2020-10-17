#include <iostream>
using namespace std;

int main() {
    float confirm;
    int money = 0, total = 0;

    do {  

    cout << "金額:";
    cin >> confirm;
    money =  confirm = confirm * 10 ;

    } while ( confirm - money != 0 );

    total += money / 10000;
    money = money % 10000;

    total += money / 5000;
    money = money % 5000;

    total += money / 1000;
    money = money % 1000;

    total += money / 500;
    money = money % 500;

    total += money / 100;
    money = money % 100;

    total += money / 50;
    money = money % 50;

    total += money / 10;
    money = money % 10;

    total += money / 5;
    money = money % 5;

    total += money / 1;
    money = money % 1;

    cout << total;
}
