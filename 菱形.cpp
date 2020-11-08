#include <iostream>
using namespace std;

int main() {

    int height, i, space, triangle, j, space2, triangle2, height2;
    string mark;

    cout << "目前還不會高為偶數的菱形 \n";
    cout << "如果您輸入的高度為偶數... \n";
    cout << "反正輸入奇數就對了 \n";
    cout << "造成您的不便還請多多包涵,謝謝ღ \n \n";
    
    do {
        cout << "三角形高度: \n";
        cin >> height;

        if ( height % 2 == 0){
            cout << "請輸入奇數 \n \n";
        }
    } while ( height % 2 == 0 );

    cout << "三角形符號: \n";
    cin >> mark; 

    for ( i = 1; i <= height / 2 + 1; i++ ) {

        for ( space = ( height / 2 + 1 ) - i; space > 0; space-- ) {
            cout << " ";
        }

        for ( triangle = 1; triangle <= 2 * i - 1; triangle++ ) {
            cout << mark;
        }

    cout << "\n";
    }

    if ( height % 2 ==0 ) {
        height2 = height + 1;
        } else {
        height2 = height;
    }
    

    for ( j = 1; j <= ( height + 1 ) / 2; j++ ) {

		for ( space2 = 1; space2 <= j; space2++ ) {
			cout << " ";
		}

		for ( triangle2 = 1; triangle2 <= height2 - j * 2; triangle2++ ) {
		  cout << mark;
		}
        
	cout << "\n";
    }
}
