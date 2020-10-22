#include <iostream>
using namespace std;

int main ()
{
    float x = 0;
    int i = 0;
    int price = 0;
    do{
        cout << "金額:";
        cin >> x;
        x = x*10;
        price = x;
    }while(x < 0 );

    i += price / 10000;
    price %= 10000;

    i += price / 5000;
    price %= 5000;

    i += price / 1000;
    price %= 1000;

    i += price / 500;
    price %= 500;

    i += price / 100;
    price %= 100;

    i += price / 50;
    price %= 50;

    i += price / 10;
    price %= 10;

    i += price / 5;
    price %= 5;

    i += price / 1;
    price %= 1;

    cout << i;
}
