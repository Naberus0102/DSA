#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n phai la so nguyen duong";
        return 0;
    }
    int tong = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n%i == 0) {
            tong = tong + i;
        }
    }
    if (tong == n) {
        cout << "So hoan hao";
    }
    else {
        cout << "Khong phai so hoan hao";
    }
    return 0;
}
