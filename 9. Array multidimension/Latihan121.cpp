#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int i, s;
    char nama[5][20];
    string abjad[5];
    float nilai1[5];
    float nilai2[5];
    float nilai3[5];
    float nilai4[5];
    float nilai5[5];
    double hasil[5];

    cout << "Masukan jumlah Mahasiswa : ";
    cin >> s;

    for(i = 1; i <= s; i++) {
        cout << "Data ke - " << i << endl;
        cout << "Nama Mahasiswa : ";
        cin >> nama[i];
        cout << "Nilai Ke-aktifan : ";
        cin >> nilai1[i];
        cout << "Nilai UTS : ";
        cin >> nilai2[i];
        cout << "Nilai UAS : ";
        cin >> nilai3[i];
        cout << "Nilai Tugas : ";
        cin >> nilai4[i];
        cout << "Nilai Proyek : ";
        cin >> nilai5[i];
        hasil[i] = (nilai1[i] * 0.30) + (nilai2[i] * 0.15) + (nilai3[i] * 0.15) + (nilai4[i] * 0.10) + (nilai5[i] * 0.30);
        cout << endl;
    }

    for(i = 1; i <= s; i++) {
        if(hasil[i] >= 90 && hasil[i] <= 100) {
            abjad[i] = "A";
        }else if(hasil[i] >=85 && hasil[i] < 90) {
            abjad[i] = "A-";
        }else if(hasil[i] >=80 && hasil[i] < 85) {
            abjad[i] = "B+";
        }else if(hasil[i] >=75 && hasil[i] < 80) {
            abjad[i] = "B";
        }else if(hasil[i] >=65 && hasil[i] < 75) {
            abjad[i] = "C";
        }else if(hasil[i] >=60 && hasil[i] < 65) {
            abjad[i] = "D";
        }else if(hasil[i] >=0 && hasil[i] < 60) {
            abjad[i] = "E";
        }
    }


    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "No. Nama Mahasiswa      Nilai      Nilai      Nilai        Nilai      Nilai        Hasil      Hasil(Abjad)" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;

    for(i = 1; i <= s; i++) {
        cout << setiosflags (ios::left) << setw (4) << i;
        cout << setiosflags (ios::left) << setw (10) << nama[i];
        cout << setprecision (4) << "          " << nilai1[i];
        cout << setprecision (4) << "          " << nilai2[i];
        cout << setprecision (4) << "          " << nilai3[i];
        cout << setprecision (4) << "          " << nilai4[i];
        cout << setprecision (4) << "          " << nilai5[i];
        cout << setprecision (4) << "          " << hasil[i];
        cout << "             " << abjad[i] << endl;
    }

    cout << "----------------------------------------------------------------------------------------------------------";
    cout << endl;

    return 0;
}
