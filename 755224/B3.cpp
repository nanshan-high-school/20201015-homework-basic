#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string Id;
    cin >> Id;
    char num[9];
    for (int i = 0; i !=9; i++) {
        num[i] = Id[i];
    }

    int max[2] = {0};
    for (int i = 0; i !=9 ; i++) {
        if (max[0] < int(num[i]) - 48) {
            max[1] = max[0];
            max[0] = int(num[i]) - 48;
        } else if (int(num[i]) - 48 <= max[0] && int(num[i] - 48) > max[1]) {
            max[1] = int(num[i]) - 48;
        }
    }
    if (100 * (int(num[6])-48) + 10 * (int(num[7])-48) + (int(num[8])-48) == pow(max[0],2) + pow(max[1],2)) {
        cout << "Good Morning!";
    } else {
        cout << "SPY!";
    }
}
