#include <iostream>
using namespace std;

int main() {
    char kode;
    int uang, harga;

    cout << "=== VENDING MACHINE ===" << endl;
    cout << "A. Minuman A - Rp5000" << endl;
    cout << "B. Minuman B - Rp7000" << endl;
    cout << "C. Minuman C - Rp10000" << endl;

    cout << "Masukkan kode minuman: ";
    cin >> kode;

    switch (kode) {
        case 'A':
        case 'a':
            harga = 5000;
            break;

        case 'B':
        case 'b':
            harga = 7000;
            break;

        case 'C':
        case 'c':
            harga = 10000;
            break;

        default:
            cout << "Kode minuman tidak tersedia.";
            return 0;
    }

    cout << "Masukkan uang: Rp ";
    cin >> uang;

    if (uang < harga) {
        cout << "Uang tidak cukup";
    }
    else {
        cout << "Pembelian berhasil." << endl;
        cout << "Kembalian: Rp " << uang - harga;
    }

    return 0;
}
