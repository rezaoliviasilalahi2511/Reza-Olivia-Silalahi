#include <iostream>
using namespace std;

int main() {
    float belanja, diskon, total;

    cout << "Masukkan total belanja: Rp ";
    cin >> belanja;

    if (belanja > 500000) {
        diskon = belanja * 0.20;
    }
    else if (belanja > 100000) {
        diskon = belanja * 0.10;
    }
    else {
        diskon = 0;
    }

    total = belanja - diskon;

    cout << "Diskon: Rp " << diskon << endl;
    cout << "Total yang harus dibayar: Rp " << total << endl;

    return 0;
}
