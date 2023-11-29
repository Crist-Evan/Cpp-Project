#include <iostream>
using namespace std;

int main() {

    int jumlah;

    cout << "masukan jumlah: ";
    cin >> jumlah;

    int nilai[jumlah];
    string nama[jumlah];

    for(int i = 0; i < jumlah; i++) {
        cout << "masukan nama " << (i+1) << ": ";
        cin >> nama[i];
        cout << "masukan nilai " << (i+1) << ": ";
        cin >> nilai[i];
    }

    int max = nilai[0];
    string namaMax = nama[0];

    for(int a = 0; a < jumlah; a++) {
        if(nilai[a] > max) {
            max = nilai[a];
        }
    }

    cout << max << endl;
    for(int b = 0; b < jumlah; b++) {
        if(nilai[b] == max) {
            cout << nama[b] << " ";
        }
    }

    return 0;
}
