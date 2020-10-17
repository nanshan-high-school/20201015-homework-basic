#include <iostream>
using namespace std;
int main() {
    cout << "以下程式將幫你計算輸入價錢最少所需幣值量";
    cout << "(幣值共有:1000,500,100,50,10,5,1,0.5,0.1元)\n";
    float price;
    float doube_check_price;
    int num;
    int start = 0;
    int count = 0;
    do{
        cout << "請輸入金額(大於0)\n";
        cin >> price;
    }while(price < 0);
    do{
        cout << "請再次確認\n";
        cin >> doube_check_price;
    } while(price != doube_check_price);
    num = doube_check_price * 10;
    while(num - 10000 >= start && num >= 10000){
        start = start + 10000;
        count++;
    }
    while(num - 5000 >= start && num >= 5000){
        start = start + 5000;
        count++;
    }
    while(num - 1000 >= start && num >= 1000){
        start = start + 1000;
        count++;
    }
    while(num - 500 >= start && num >= 500){
        start = start + 500;
        count++;
    }
    while(num - 100 >= start && num >= 100){
        start = start + 100;
        count++;
    }
    while(num - 50 >= start && num >= 50){
        start = start + 50;
        count++;
    }
    while(num - 10 >= start && num >= 10){
        start = start + 10;
        count++;
    }
    while(num - 5 >= start && num >= 5){
        start = start + 5;
        count++;
    }
    while(num - 1 >= start && num >= 1){
        start = start + 1;
        count++;
    }
    cout << "所需最少幣值為";
    cout << count;
}
