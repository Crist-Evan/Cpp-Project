#include <iostream>
using namespace std;

int main() {

    int pilihan = 0;
    do {
        cout << "menu pilihan :\n";
        cout << "1. baca data\n";
        cout << "2. ubah data\n";
        cout << "3. hapus data\n";
        cout << "4. exit\n";
        cout << "pilihan anda (1/2/3/4) : ";
        cin >> pilihan;

        if(pilihan == 1) {
            cout << "=======================\n";
            cout << "anda memilih menu 1\n";
            cout << "tekan ENTER untuk kembali ke menu utama" << endl;
        }else if(pilihan == 2) {
            cout << "=======================\n";
            cout << "anda memilih menu 2\n";
            cout << "tekan ENTER untuk kembali ke menu utama" << endl;
        }else if(pilihan == 3) {
            cout << "=======================\n";
            cout << "anda memilih menu 3\n";
            cout << "tekan ENTER untuk kembali ke menu utama" << endl;
        }else if(pilihan == 4) {
            system("exit");
        }
    }while(pilihan != 4);

    return 0;
}
