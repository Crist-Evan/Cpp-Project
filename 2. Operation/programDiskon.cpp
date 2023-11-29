#include <iostream>
using namespace std;

int main() {

    //declare
    double harga;
    double diskon;
    double pecahanDiskon;
    double hasil;
    bool gratis;

    //input
    cout << "========================================\n";
    cout << "============ Program Diskon ============\n";
    cout << "========================================\n";
    cout << "Masukan diskon = ";
    cin >> diskon;
    cout << "Masukan harga barang = ";
    cin >> harga;

    //operation
    pecahanDiskon = diskon / 100;
    gratis = pecahanDiskon >= 1;
    string bayar = gratis == 1 ? "ga perlu karena gratis" : "ya, perlu";
    hasil = harga - (harga * pecahanDiskon);

    //output
    cout << "========================================\n";
    cout << "Diskon barangnya adalah = " << diskon << "%\n";
    cout << "Harga setelah di diskon = " << hasil << '\n';
    cout << "bentuk pecahan diskon = " << pecahanDiskon << '\n';
    cout << "Gratis atau tidak? " << gratis << '\n';
    cout << "Perlu bayar gak? " << bayar << '\n';
    cout << "========================================\n";

    return 0;
}
