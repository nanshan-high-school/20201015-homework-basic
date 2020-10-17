#include <iostream>
using namespace std;

int main() {
    float cash_f, check;
    int cash_i, count;
    cout << "請輸入金額(最小單位0.1): ";
    cin >> cash_f;

    do {
        cout << "確認金額: ";
        cin >> check;
    } while (cash_f != check && cash_f > 0);

    cash_i = cash_f * 10;

    while(cash_i >= 10000){
        cash_i =cash_i - 10000;    
        count++;

    }
    while(cash_i >= 5000) {
        cash_i =cash_i - 5000;
        count++;
        
    }
    while(cash_i >= 1000) {
        cash_i =cash_i - 1000;
        count++;
        
    }
    while(cash_i >= 500) {
        cash_i =cash_i - 500;
        count++;
        
    }
    while(cash_i >= 100) {
        cash_i =cash_i - 100;
        count++;
        
    }
    while(cash_i >= 50) {
        cash_i =cash_i - 10;
        count++;
        
    }
    while(cash_i >= 10) {
        cash_i =cash_i - 50;
        count++;
        
    }
    while(cash_i >= 5) {
        cash_i =cash_i - 5;
        count++;
        
    }
    while(cash_i >= 1) {
        cash_i =cash_i - 1;
        count++;
        
    }

    cout << "最小值:" << count + 1;
}
