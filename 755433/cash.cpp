#include <iostream>
using namespace std;

int main() {
    //設置變數
    float cash;
    int num = 0, money;

    //do-while 迴圈，確認金額可否計算
    do {
    //輸入並 *10 轉整數，防止小數後的亂數資料
    cout << "請輸入多少錢:\n";
    cin >> cash;
    money = cash * 10;
    //if 判斷是否執行計算
    if (cash < 0) {
        cout << "此金額小於 0 ，請重新輸入一次\n";
    } else {
        num = num + money / 10000;
        money = money % 10000;
        num = num + money / 5000;
        money = money % 5000;
        num = num + money / 1000;
        money = money % 1000;
        num = num + money / 500;
        money = money % 500;
        num = num + money / 100;
        money = money % 100;
        num = num + money / 50;
        money = money % 50;
        num = num + money / 10;
        money = money % 10;
        num = num + money / 5;
        money = money % 5;
        num = num + money / 1;
        money = money % 1;
        cout << "需要" << num << "個紙鈔或硬幣";
    }
    } while (cash < 0);
}
