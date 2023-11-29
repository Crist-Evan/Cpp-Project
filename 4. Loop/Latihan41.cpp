#include <iostream>
using namespace std;

int main() {

    int i;
    int rerata;
    int jumlah = 0;

    cout << "uang bensin minggu pertama : ";
    cin >> i;
    jumlah += i;
    cout << "uang bensin minggu kedua   : ";
    cin >> i;
    jumlah += i;
    cout << "uang bensin minggu ketiga  : ";
    cin >> i;
    jumlah += i;
    cout << "uang bensin minggu keempat : ";
    cin >> i;
    jumlah += i;

    rerata = jumlah / 4;

    cout << "================================\n";
    cout << "jumlah biaya bensin sebulan    : " << jumlah << endl;
    cout << "rata-rata per minggunya adalah : " << rerata << endl;
    cout << "================================\n";

    return 0;
}
