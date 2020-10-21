
#include <iostream>
using namespace std;

int main ()
{
    int a = 0;
    float x = 0;
    int b = 0;
    int i = 0;
    int c = 0;
    do{
        cout << "金額:";
        cin >> x;
        x = x*10;
        c = x;
    }while(x - c != 0 );

    i += c / 10000;
    c %= 10000;

    i += c / 5000;
    c %= 5000;

    i += c / 1000;
    c %= 1000;

    i += c / 500;
    c %= 500;

    i += c / 100;
    c %= 100;

    i += c / 50;
    c %= 50;

    i += c / 10;
    c %= 10;

    i += c / 5;
    c %= 5;

    i += c / 1;
    c %= 1;

    cout << i;
}
