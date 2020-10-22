#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int mon;
    float money;

    do{
        cout << "金額:";
        cin >> money;
        money *= 10;
        mon = money;
    } while (money < 0 || mon != money);

    int sum=0;

    for(int i=4; i>=1; i--) {
        int div=pow(10,i);
        sum += mon / div;
        mon %= div;
        if(mon > div/2) {
            sum ++;
            mon -= (div/2);
        }
    }
    sum += mon;

    cout << sum << endl ;
}
