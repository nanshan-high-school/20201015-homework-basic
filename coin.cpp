#include <iostream>
using namespace std;
 
int main ()
{
    int a = 0;
    float wyc = 0;
    int b = 0;
    int i = 0;
    int b2 = 0;
    do{
        cout << "金額:";
        cin >> wyc;
        wyc = wyc*10;
        b2 = wyc;
    }while(wyc - b2 != 0 );

    i += b2 / 10000;
    b2 %= 10000;

    i += b2 / 5000;
    b2 %= 5000;

    i += b2 / 1000;
    b2 %= 1000;

    i += b2 / 500;
    b2 %= 500;

    i += b2 / 100;
    b2 %= 100;

    i += b2 / 50;
    b2 %= 50;

    i += b2 / 10;
    b2 %= 10;

    i += b2 / 5;
    b2 %= 5;

    i += b2 / 1;
    b2 %= 1;

    cout << i;
}