#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "TTam giac";
        }
        else {
            cout << "Khong phai tam giac";
        }
        return 0;
}
