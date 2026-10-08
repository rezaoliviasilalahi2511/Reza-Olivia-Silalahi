#include <iostream> 
using namespace std;

int main() {

    int pilihan;
    float saldo = 1000000.0;
    float tarik = 0.0;
    saldo = saldo - tarik;

    cout << "SELAMAT DATANG DI ATM SEDERHANA" << endl;
    cout << "1. Cek saldo" << endl;
    cout << "2. Tarik Tunai" << endl;
    cout << "3. Keluar" << endl;
    cout << "Masukkan pilihan Anda (1-3): ";
    cin >> pilihan;

    switch (pilihan) {

        case 1:
        cout << "Saldo Anda adalah Rp. " << saldo << endl;
        break;

        case 2:
        cout << "Masukkan jumlah yang ingin ditarik:Rp ";
        float tarik;
        cin >> tarik; 

        if (tarik > saldo) {
        cout << "Saldo Anda tidak cukup untuk melakukan penarikan." << endl;
        } else {
        cout << "Anda telah menarik Rp " << tarik << endl;
        cout << "Sisa saldo Anda adalah Rp " << saldo << endl;
        }
        break;

        case 3:
        cout << "Terima kasih telah menggunakan ATM Sederhana." << endl;
        break;

        default:
        cout << "Terima kasih telah menggunakan ATM Sederhana." << endl;
        break;
    }
}
