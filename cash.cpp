#include <iostream>
using namespace std;
int main() {

    float money = 0;

    do{
        cout << "請輸入正確金額: ";
        cin >> money;
    } while (money < 0);

    int times_10 = money * 10;
    int plus = 0;
    int time = 0;

    while (times_10 - 10000 >= plus && times_10 >= 10000) {
        plus = plus + 10000;
        time = time + 1;
    }

    while (times_10 - 5000 >= plus && times_10 >= 5000) {
        plus = plus + 5000;
        time = time + 1;
    }

    while (times_10 - 1000 >= plus && times_10 >= 1000) {
        plus = plus + 1000;
        time = time + 1;
    }

    while (times_10 - 500 >= plus && times_10 >= 500) {
        plus = plus + 500;
        time = time + 1;
    }
    
    while (times_10 - 100 >= plus && times_10 >= 100) {
        plus = plus + 100;
        time = time + 1;
    }

    while (times_10 - 50 >= plus && times_10 >= 50) {
        plus = plus + 50;
        time = time + 1;
    }

    while (times_10 - 10 >= plus && times_10 >= 10) {
        plus = plus + 10;
        time = time + 1;
    }
    
    while (times_10 - 5 >= plus && times_10 >= 5) {
        plus = plus + 5;
        time = time + 1;
    }
    while (times_10 - 1 >= plus && times_10 >= 1) {
        plus = plus + 1;
        time = time + 1;
    }

    cout << "最少有" << time << "個銅板+紙鈔。";
}
