#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "a va b phai la so nguyen duong";
        return 0;
    }
    //---Cach 1, dung phép tru---//
    // while (a != b) {
    //     if (a > b) {
    //         a = a - b;
    //     }
    //     else {
    //         b = b - a;
    //     }
    // }
    // cout << "UCLN = " << a;

    //---Cach 2, dung phep chia du---//
    // int ucln = 1;
    // int min;
    // if (a < b) {
    //     min = a;
    // }
    // else {
    //     min= b;
    // }
    // for (int i = 1; i <= min; i++) {
    //     if (a%i == 0 && b%i == 0) {
    //         ucln = i;
    //     }
    // }
    // cout << "UCLN = " << ucln;

    //---Cach 3, thuat toan euclid theo cach chia du--//
    // while (b != 0se) {
    //     int r = a % b;
    //     a = b;
    //     b = r;
    // }
    //
    // cout << "UCLN = " << a;

    //---Cach 4, dung ham co san--//
    // cout << "UCLN = " << gcd(a, b);
    return 0;
}
