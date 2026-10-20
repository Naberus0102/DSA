#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    cout << "Nhap n: ";
    cin >> n;
    if (n <= 0) {
        cout << "n phai la so nguyen duong";
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n%i == 0) {
            count++;
        }
    }
    if (count == 0) {
        cout << "So nguyen to";
    }
    else {
        cout << "Khong phai so nguyen to";
    }
    return 0;
}
