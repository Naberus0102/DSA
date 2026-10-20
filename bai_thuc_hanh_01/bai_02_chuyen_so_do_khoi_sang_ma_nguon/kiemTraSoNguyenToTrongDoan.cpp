#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Nhap a,b : ";
    cin >> a >> b;
    for(int i = a, i <= b; i++) {
        int count = 0;
        if (a <= 0 ||b <= 0) {
            cout << "Phai la so nguyen duong";
            return 0;
        }

        if(a<b){//doi vi tri a va b
            int temp = a;
            a = b;
            b = temp;
        }

        for (int j = 2; j <= i/2; j++) {
            if (i%j == 0) {
                count++;
            }
        }
        if (count == 0) {
            cout << i << endl;
            }

        }
    }
    return 0;
}
