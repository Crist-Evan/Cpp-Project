#include <iostream>
using namespace std;

int main() {

    int awal;
    int akhir;

    cout << "masukan nilai awal bilangan : ";
    cin >> awal;
    cout << "masukan nilai akhir bilangan : ";
    cin >> akhir;

    cout << endl;
    cout << "menampilkan bilangan genap dari " << awal << " hingga " << akhir << endl;
    while(awal <= akhir) {
        if(awal %2 == 0) {
            cout << awal << endl;
        }
        awal++;
    }

    return 0;
}
