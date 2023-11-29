#include <iostream>
using namespace std;

int main() {

    //declare
    string nama[100];
    string namaTertinggi;
    int jumlah;
    int NIMTertinggi;
    int NIM[100];
    int nilai[100];
    int sum = 0;
    int max = nilai[1];

    //input
    cout << "Masukan jumlah mahasiswa   : ";
    cin >> jumlah;
    cout << endl;

    for (int i = 1; i <= jumlah; i++) {
        cout << "===========================" << endl;
        cout << "Masukan nama mahasiswa : ";
        cin >> nama[i];
        cout << "Masukan NIM mahasiswa  : ";
        cin >> NIM[i];
        cout << "Masukan nilai mahasiswa: ";
        cin >> nilai[i];
        sum += nilai[i];
        if(nilai[i] > max) {
            max = nilai[i];
        }
    }

    cout << max;

    return 0;
}
