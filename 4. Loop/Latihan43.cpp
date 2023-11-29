#include <iostream>
using namespace std;

int main() {

    int deret;
    int sebut;
    int jumlah = 0;

    cout << "masukan angka ganjil/genap: ";
    cin >> sebut;
    cout << "masukan jumlah deret bilangannya: ";
    cin >> deret;

    for(int i = sebut; deret > 0; i = i + 2){
        cout << i << " " << endl;
        jumlah += i;
        deret--;
    }

    cout << endl;
    cout << "Total " << jumlah;

    return 0;
}
