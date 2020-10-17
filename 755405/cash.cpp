#include <iostream>
using namespace std;
int main() {
    float cash;
    int num = 0;
    cin >> cash;
    cash = cash * 10;
    do 
    {
        num = num + cash / 10000;
        cash = int(cash) % 10000;
        num = num + cash / 5000;
        cash = int(cash) % 5000;
        num = num + cash / 1000;
        cash = int(cash) % 1000;
        num = num + cash / 500;
        cash = int(cash) % 500;
        num = num + cash / 100;
        cash = int(cash) % 100;
        num = num + cash / 50;
        cash = int(cash) % 50;
        num = num + cash / 10;
        cash = int(cash) % 10;
        num = num + cash / 5;
        cash = int(cash) % 5;
        num = num + cash / 1;
        cash = int(cash) % 1;
    } while ( cash > 0 );
    cout << num;
}


