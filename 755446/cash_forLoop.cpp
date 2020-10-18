#include <iostream>
using namespace std;

int main() {
    float cash_f, check;
    int cash_i, count, i;
    int num[9] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};

    cout << "請輸入金額(最小單位0.1): ";
    cin >> cash_f;        

    do {
        cout << "確認金額: ";
        cin >> check;
    } while (cash_f != check && cash_f > 0);

    cash_i = cash_f * 10;

    for(i = 0; i < 9; i++) {
        while(cash_i >= num[i]) {
            cash_i = cash_i - num[i];
            count++;
        }
    }
    cout << "最小值:" << count;
}
