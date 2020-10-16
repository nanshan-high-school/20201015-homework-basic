#include <iostream>
using namespace std;

int main() {
    float money_float;
    float check;
    int count = 0;
    int money_int;
    
    cout << "金額:";
    cin >> money_float;
    
    do {
        cout << "確認金額:";
        cin >> check;
    }while (check != money_float);
    
    money_int = money_float*10;
    
    while (money_int >= 10000){
        money_int = money_int - 10000;
        count++;
    }
    while (money_int >= 5000){
        money_int = money_int - 5000;
        count++;
    }
    while (money_int >= 1000){
        money_int = money_int - 1000;
        count++;
    }
    while (money_int >= 500){
        money_int = money_int - 500;
        count++;
    }
    while (money_int >= 100){
        money_int = money_int - 100;
        count++;
    }
    while (money_int >= 50){
        money_int = money_int - 50;
        count++;
    }
    while (money_int >= 10){
        money_int = money_int - 10;
        count++;
    }
    while (money_int >= 5){
        money_int = money_int - 5;
        count++;
    }
    while (money_int >= 1){
        money_int = money_int - 1;
        count++;
    }
    cout << count;
}

