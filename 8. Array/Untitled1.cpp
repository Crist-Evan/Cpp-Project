#include <iostream>
#include <vector>
#include <limits>
#include <string>

using namespace std;

int main() {
    // Input the number of students
    int jumlah;
    do {
        cout << "Masukan jumlah mahasiswa   : ";
        cin >> jumlah;

        if (cin.fail() || jumlah < 1) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        cout << endl;
    } while (jumlah < 1 || jumlah != (int)jumlah);

    // Declare vectors
    vector<string> nama(jumlah);
    vector<int> NIM(jumlah);
    vector<int> nilai(jumlah);

    // Input data
    for (int i = 0; i < jumlah; i++) {
        cout << "===========================================" << endl;
        cout << "Masukan nama mahasiswa : ";
        cin >> nama[i];
        cout << "Masukan NIM mahasiswa  : ";
        cin >> NIM[i];
        cout << "Masukan nilai mahasiswa: ";
        cin >> nilai[i];
    }

    // Calculate sum, max, and average
    int sum = 0;
    int max = nilai[0];
    for (int i = 0; i < jumlah; i++) {
        sum += nilai[i];
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }

    // Output data
    cout << "===========================================" << endl;
    cout << endl;
    cout << "Tampilkan Data" << endl;
    cout << "===========================================" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "DATA " << (i + 1) << "." << endl;
        cout << "Nama   : " << nama[i] << endl;
        cout << "NIM    : " << NIM[i] << endl;
        cout << "nilai  : " << nilai[i] << endl;
        cout << "===========================================" << endl;
    }

    cout << endl;
    cout << "===========================================" << endl;
    cout << "Nilai rata-rata di kelas   : " << (static_cast<double>(sum) / jumlah) << endl;
    cout << "Nilai tertinggi            : " << max << endl;
    cout << "Oleh, " << endl;

    for (int i = 0; i < jumlah; i++) {
        if (nilai[i] == max) {
            cout << nama[i] << ", dengan NIM " << NIM[i] << endl;
        }
    }

    cout << "===========================================" << endl;

    return 0;
}
