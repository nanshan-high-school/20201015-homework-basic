#include <iostream>
using namespace std;

int main() {
    float inputnum;
    int intinputnum, output = 0;
    intinputnum = inputnum * 10;
    int cashtype[9] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};

    do {
        cout << "請輸入金額： ";
        cin >> inputnum;
        intinputnum = inputnum * 10;
    }while (inputnum < 0);
    /*if (intinputnum / 10000 >= 1) {
        output = output + (intinputnum / 10000);
        intinputnum1 = intinputnum - (intinputnum % 10000) ;
        cout << output;
    }else if (intinputnum1 / 5000 >= 1) {
        output = output + (intinputnum / 5000);
        intinputnum1 = intinputnum - (intinputnum / 5000) ;
        cout << output;
    }else if (intinputnum1 / 1000 >= 1) {
        output = output + (intinputnum / 1000);
        intinputnum1 = intinputnum - (intinputnum / 1000) * 1000;
        cout << output;
    }else if (intinputnum1 / 500 >= 1) {
        output = output + (intinputnum / 500);
        intinputnum1 = intinputnum - (intinputnum / 500) * 500;
        cout << output;
    }else if (intinputnum1 / 100 >= 1) {
        output = output + (intinputnum / 100);
        intinputnum1 = intinputnum - (intinputnum / 100) * 100;
        cout << output;
    }else if (intinputnum1 / 50 >= 1) {
        output = output + (intinputnum / 50);
        intinputnum1 = intinputnum - (intinputnum / 50) * 50;
        cout << output;
    }else if (intinputnum1 / 10 >= 1) {
        output = output + (intinputnum / 10);
        intinputnum1 = intinputnum - (intinputnum / 10) * 10;
        cout << output;
    }else if (intinputnum / 1 >= 1) {
        output = output + (intinputnum / 1);
        intinputnum1 = intinputnum - (intinputnum / 1) * 1;
        cout << output;
    }*/
    for(int i = 0; i < 9; i = i +   1) {
        while(intinputnum >= cashtype[i]) {
            intinputnum = intinputnum - cashtype[i];
            output = output + 1;
        }
    }  
    cout << output;
}


