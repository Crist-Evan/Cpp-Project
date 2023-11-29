#include <iostream>
using namespace std;

int main(){

    int kode;
    int a;
    int b;
    int t;
    int ts;
    int blk;

    cout << "=====================================\n";
    cout << "1. Menghitung Luas Trapesium" << endl;
    cout << "2. Menghitung Volume Balok" << endl;
    cout << "3. Exit Program" << endl;
    cout << "=====================================\n";

    do{
    cout << endl;
    cout << "Masukan Kode: ";
    cin >> kode;
    cout << endl;

    if(kode == 1){
        cout << "Masukan Alas Atas: ";
        cin >> a;
        cout << "Masukan Alas Bawah: ";
        cin >> b;
        cout << "Masukan Tinggi: ";
        cin >> t;
        ts = (a + b) / 2 * t;
        cout << "Luas Trapesium: " << ts << endl;
        cout << endl;
        cout << "=====================================\n";
    }else if(kode == 2){
        cout << "Masukan Panjang: ";
        cin >> a;
        cout << "Masukan Lebar: ";
        cin >> b;
        cout << "Masukan Tinggi: ";
        cin >> t;
        blk = a * b * t;
        cout << "Volume Balok: " << blk << endl;
        cout << endl;
        cout << "=====================================\n";
    }else if(kode == 3){
        break;
    }else {
        cout << "Output Salah, Ulangi Program\n";
    }
    }while(kode !=4);
    return 0;
}
