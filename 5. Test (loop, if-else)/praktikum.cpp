#include <iostream>
using namespace std;

int main(){

    char kodeMakanan;
    int hargaBarang;
    int totalHarga = 0;

    cout << "============================================" << endl;
    cout << "========== LIST BARANG MALL MIKO' ==========" << endl;
    cout << "============================================" << endl;
    cout << endl;
    cout << "A. SEPEDA GUNUNG               1.000.000" << endl;
    cout << "B. SKATEBOARD                    800.000" << endl;
    cout << "C. LAPTOP LENOVO               4.600.000" << endl;
    cout << "D. LAPTOP ASUS                 5.500.000" << endl;
    cout << "E. TV OLED                     2.500.000" << endl;
    cout << endl;
    cout << "** Ketik 'P' Untuk Melihat Total Sementara\n";
    cout << "** Ketik 'S' Untuk Melakukan Pembayaran :)\n";
    cout << endl;
    cout << "============================================" << endl;

    do {
        cout << "Masukan Kode Makanannya: ";
        cin >> kodeMakanan;
        if(kodeMakanan == 'A'){
            hargaBarang = 1000000;
            totalHarga = totalHarga + hargaBarang;
        }else if(kodeMakanan == 'B'){
            hargaBarang = 800000;
            totalHarga = totalHarga + hargaBarang;
        }else if(kodeMakanan == 'C'){
            hargaBarang = 4600000;
            totalHarga = totalHarga + hargaBarang;
        }else if(kodeMakanan == 'D'){
            hargaBarang = 5500000;
            totalHarga = totalHarga + hargaBarang;
        }else if(kodeMakanan == 'E'){
            hargaBarang = 2500000;
            totalHarga = totalHarga + hargaBarang;
        }else if(kodeMakanan == 'P'){
            cout << "Total Sementara: " << totalHarga << endl;
        }else if(kodeMakanan == 'S'){
            cout << endl;
            cout << "OKE SIAP!\n";
        }else {
            cout << "Kode Tersebut Tidak Ada!\n";
            hargaBarang = 0;
            totalHarga = totalHarga + hargaBarang;
        }

    }while(kodeMakanan != 'S');

    cout << "============================================" << endl;
    cout << endl;
    cout << "Total Pembayaran:               " << totalHarga << endl;
    cout << endl;
    cout << "============================================" << endl;


    return 0;
}
