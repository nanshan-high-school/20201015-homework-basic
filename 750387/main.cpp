#include <iostream>
using namespace std;

int main() {
    int money[9] , i = 0;
    int total = 0 , ans = 0;
    float ans0 = 0;

    money[0]=10000;
    money[1]=5000;
    money[2]=1000;
    money[3]=500;
    money[4]=100;
    money[5]=50;
    money[6]=10;
    money[7]=5;
    money[8]=1;
    //
    do {
        cout << "金額 : ";
        cin >> ans0;
    } while(ans0 <= 0);
    ans = ans0 * 10;
    //
    do {
        total += ans / money[i];
        ans %= money[i];
        i += 1;
        //cout << i << "  " << total << " " << ans << "\n";
    } while (ans > 0);
    //
    cout << total << "\n";
}
