#include <iostream>
using namespace std;

int main() {
    int a, b, day = 0;
    cin >> a >> b;
    while (b > 0) {
        b -= a;
        b /= 2;
        day++;
    }
    cout << day;
}
