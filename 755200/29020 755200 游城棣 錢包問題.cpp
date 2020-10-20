#include <iostream>
using namespace std;
int main() {
    double moneydot;
    int bill, money;
    do
    {
    cout << "金額:" ;
    cin >> moneydot;
    moneydot = moneydot * 10;
    }while(moneydot != (int)moneydot);
    for (money = moneydot; money > 10000; money -= 10000) {
        bill ++;
    }        
    for(money = money; money > 5000; money -= 5000) {
        bill ++;
    }        
    for(money = money; money > 1000; money -= 1000) {
        bill ++;
    }
    for(money = money; money > 500; money -= 500) {
        bill ++;
    }
    for(money = money; money > 100; money -= 100) {
        bill ++;
    }
    for(money = money; money > 50; money -= 50) {
        bill ++;
    }
    for(money = money; money > 10; money -= 100) {
        bill ++;
    }
    for(money = money; money > 5; money -= 5) {
        bill ++;
    }
    for(money = money; money > 1; money -= 1) {
        bill ++;
    }
    cout << "最少需要:" << bill << "枚銅板或紙鈔";
}
  