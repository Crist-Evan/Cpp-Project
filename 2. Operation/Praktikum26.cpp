#include <iostream>
using namespace std;

int main() {

    int a, b, c, hasil1, hasil2, hasil3, hasilAkhir1, hasilAkhir2;

    cout << "Masukan nilai a = ";
    cin >> a;
    cout << "Masukan nilai b = ";
    cin >> b;
    cout << "Masukan nilai c = ";
    cin >> c;

    hasil1 = a + 4 < 10;
    hasil2 = b > a + 5;
    hasil3 = c - 3 >= 4;
    hasilAkhir1 = hasil1 && hasil2 && hasil3;
    hasilAkhir2 = hasil1 && hasil2 || hasil3;

    cout << "Program ekspresi AND" << endl;
    cout << "====================" << endl;
    cout << "Hasil dari hasil1 = a + 4 < 10 adalah : " << hasil1 << endl;
    cout << "Hasil dari hasil2 = b > a + 5 adalah : " << hasil2 << endl;
    cout << "Hasil dari  hasil3 = c - 3 >= 4 adalah : " << hasil3 << endl;
    cout << "Hasil dari hasil akhir d && e && f adalah : " << hasilAkhir1 << endl;

    cout << "Program ekspresi AND OR" << endl;
    cout << "=======================" << endl;
    cout << "Hasil dari hasil1 = a + 4 < 10 adalah : " << hasil1 << endl;
    cout << "Hasil dari hasil2 = b > a + 5 adalah : " << hasil2 << endl;
    cout << "Hasil dari  hasil3 = c - 3 >= 4 adalah : " << hasil3 << endl;
    cout << "Hasil dari hasil akhir d && e || f adalah : " << hasilAkhir2 << endl;

    return 0;
}
