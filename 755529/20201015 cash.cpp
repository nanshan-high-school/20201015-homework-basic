#include <iostream>
using namespace std;

int main() {
    double dollar;
    long cent;
    do {
    cout << "金額:";
    cin >> dollar;
    cent = dollar * 10;
    if (dollar < 0) {
        cout << "你有看過鈔票或銅板上的金額是負數的嗎?\n";
        cout << "請重新輸入，謝謝\n\n";
    } else if (dollar != (double)cent / 10) {
        cout << "本程式服務最小單位為角 (小數後 1 位)\n";
        cout << "請重新輸入，謝謝\n\n";
    }
    } while (dollar < 0 || \
    (double)cent != dollar * 10);
    
    float form[9] = {1000.0, 500.0, 100.0, 50.0, \
    10.0, 5.0, 1.0, 0.5, 0.1}; //種類
    
    long count; //單次計算
    long total = 0; //總計
    for (int i = 0; i < 9; i++) {
        count = cent / (int)(form[i] * 10);
        total += count;
        cent = cent % (int)(form[i] * 10);
    }
    cout << total;
}
