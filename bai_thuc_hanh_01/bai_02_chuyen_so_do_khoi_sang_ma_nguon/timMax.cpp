#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int x, max;
    cin >> max;// gan gia tri max la so dau tien
    for (int i = 2; i <= n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
        }
    }
    cout << "So lon nhat: " << max;
    return 0;
}
