#include <iostream>
using namespace std;

int main() {

    int angka;
    int faktorial = 1;

    cout << "Masukan angka untuk difaktorialkan: ";
    cin >> angka;

    for(int i = angka; i > 0; i--){
        cout << i;
        if(i > 1){
        cout << " x ";
        }
        faktorial = faktorial * i;
    };

    cout << " = " << faktorial;

    return 0;
}
