#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if(a == b && b == c) {
            print("Tam giac deu");
        }
        else if(a == b || b == c || a == c) {
            print("Tam giac can");
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            print("Tam giac can");
        }
        else
            print("Tam giac thuong");

    }
    else {
        cout << "Khong phai tam giac";
    }
    return 0;
}
