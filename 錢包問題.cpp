#include <iostream>
using namespace std;
int main() {
    float money = 0;
    
    do {
        cout << "請輸入金額: ";
        cin >> money;
    } while (money < 0);

    int num = 0;
    int moneyint = money;
    int dollar = moneyint;
    
    num = moneyint / 1000;
    dollar = moneyint % 1000;

    num = num + dollar / 500;
    dollar = moneyint % 500;

    num = num + dollar / 100;
    dollar = moneyint % 100;

    num = num + dollar / 50;
    dollar = moneyint % 50;

    num = num + dollar / 10;
    dollar = moneyint % 10;

    num = num + dollar / 5;
    dollar = moneyint % 5;

    num = num + dollar / 1;
    dollar = moneyint % 1;

    int cent = (money - moneyint) * 10; //處理小數
    if (cent >= 5) { 
        num += 1;
    } else {
        num += cent;
    }

    cout << "至少要" << num << "個銅板+紙鈔";
}
