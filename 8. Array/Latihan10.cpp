#include <iostream>
using namespace std;

int main() {

    //declare
    int jumlah;
    int sum = 0;

    //input
    cout << "Masukan jumlah mahasiswa   : ";
    cin >> jumlah;
    cout << endl;

    //declare
    string nama[jumlah];
    int NIM[jumlah];
    int nilai[jumlah];

    //input & operation
    for (int i = 0; i < jumlah; i++) {
        cout << "===========================================" << endl;
        cout << "Masukan nama mahasiswa : ";
        cin >> nama[i];
        cout << "Masukan NIM mahasiswa  : ";
        cin >> NIM[i];
        cout << "Masukan nilai mahasiswa: ";
        cin >> nilai[i];
        sum += nilai[i];
        }

    //declare
    int max = nilai[0];

    //operation
    for (int a = 0; a < jumlah; a++) {
        if(nilai[a] > max) {
            max = nilai[a];
        }
    }

    //output
    cout << "===========================================" << endl;
    cout << endl;
    cout << "Tampilkan Data" << endl;
    cout << "===========================================" << endl;

    for(int b = 0; b < jumlah; b++) {
        cout << "DATA " << (b + 1) << "." << endl;
        cout << "Nama   : " << nama[b] << endl;
        cout << "NIM    : " << NIM[b] << endl;
        cout << "nilai  : " << nilai[b] << endl;
        cout << "===========================================" << endl;
    }

    cout << endl;
    cout << "===========================================" << endl;
    cout << "Nilai rata-rata di kelas   : " << (static_cast<double>(sum) / jumlah);
    cout << endl;
    cout << "Nilai tertinggi            : " << max << endl;
    cout << "Oleh, " << endl;

    for (int c = 0; c < jumlah; c++) {
        if(nilai[c] == max) {
            cout << nama[c] << ", dengan NIM " << NIM[c] << endl;
        }
    }

    cout << "===========================================" << endl;

    return 0;
}

