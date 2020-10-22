#include <iostream>
using namespace std;

int main() {
    double r, a;
    cin >> r >> a;
    if (r == a) {
        a -= 3;
    }
    if (r - a > a) {
        cout << a << "+" << r - a << "=" << r;
    } else {
        cout << r - a << "+" << a << "=" << r;  
    }
    

}
