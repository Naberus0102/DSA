#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap a va b: ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh vo so nghiem";
        }
        else {
            cout << "Phuong trinh vo nghiem";
        }
    }
    else {
        double x = -b/a;
        cout << "x = " << x;
    }
    return 0;
}
