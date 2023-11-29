#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string nama[100];
    int nilai[100];
    int nim[100];
    int no;

    //input
    cout << "Masukan jumlah mahasiswa: ";
    cin >> no;
    cout << endl;

    for (int i = 0; i < no; i++){
        cout << "DATA "<< i + 1 << "." << endl;
        cout << "Masukan nama mahasiswa: ";
        cin >> nama[i];
        cout << "Masukan NIM mahasiswa: ";
        cin >> nim[i];
        cout << "Masukan nilai mahasiswa: ";
        cin >>nilai[i];
    }

    //operation
    double totalNilai = 0;
    double nilaiTertinggi = nilai[0];
    vector<int> nilaiTertinggiIndex;

    for (int i = 0; i < no; i++) {
        totalNilai += nilai[i];
        if (nilai[i] > nilaiTertinggi) {
            nilaiTertinggi = nilai[i];
            nilaiTertinggiIndex.clear();
            nilaiTertinggiIndex.push_back(i);
        } else if (nilai[i] == nilaiTertinggi) {
            nilaiTertinggiIndex.push_back(i);
        }
    }

    double rataRata = totalNilai / no;

    //output
    cout << "\nDaftar nilai dasar pemrograman kelas 1B" << endl;
    cout << "Teknik Komputer UPI Cibiru\n" << endl;

    for (int i = 0; i < no; i++) {
        cout << "==========================" << endl;
        cout << "Data " << i + 1 << endl;
        cout << "Nama: " << nama[i] << endl;
        cout << "NIM: " << nim[i] << endl;
        cout << "Nilai: " << nilai[i] << endl;
        cout << "==========================" << endl;
    }
    cout << endl;
    cout << "Nilai Rata-Rata Kelas: " << rataRata << endl;
    cout << "Nilai tertinggi adalah: " << endl;

    for (int i : nilaiTertinggiIndex) {
        cout << "Nama: " << nama[i] << ", NIM: " << nim[i] << ", Nilai: " << nilai[i] << endl;
    }

    return 0;
}
