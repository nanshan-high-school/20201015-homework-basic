#include <iostream>
using namespace std;

int main() {
    int money[9];
    money[0] = 10000;
    money[1] = 5000;
    money[2] = 1000;
    money[3] = 500;
    money[4] = 100;
    money[5] = 50;
    money[6] = 10;
    money[7] = 5;
    money[8] = 1;
    int thing[9];
    thing[0] = 0;
    thing[1] = 0;
    thing[2] = 0;
    thing[3] = 0;
    thing[4] = 0;
    thing[5] = 0;
    thing[6] = 0;
    thing[7] = 0;
    thing[8] = 0;

    float h;
    int n,k=0;
    cin >> h;
    n=10*h;
    while (n > 0) {
    cout << h << "=>";
    for (int i = 0; i <= 8; i++) {
      if ( n >= money[i] ) {
        thing[i]=n/money[i];
        n = n%money[i];
      }
    }
    for (int j = 0 ;j <= 8 ;j++) {
      k = k + thing[j];
    }
    cout << k;
  }
    return 0;
}
