#include <iostream>
using namespace std;

int main() {
    float money;

    do { 
        cout << "請輸入任一金額";
        cin >> money;
    } while (money < 0); 
    
    int price = money * 10;
    int sum = 0;

    sum += price / 10000;
    price %= 10000;
    
    sum += price / 5000;
    price %= 5000;
    
    sum += price / 1000;
    price %= 1000;
    
    sum += price / 500;
    price %= 500;
    
    sum += price / 100;
    price %= 100;
    
    sum += price / 50;
    price %= 50;
    
    sum += price / 10;
    price %= 10;

    sum += price / 5;
    price %= 5;

    sum += price / 1;
    price %= 1;
    
    cout << sum;
}
