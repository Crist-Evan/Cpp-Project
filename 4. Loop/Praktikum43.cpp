#include <iostream>
using namespace std;

int main() {

    int tinggi;

    cout << "masukan tinggi segitiga : ";
    cin >> tinggi;

    cout << endl;
    cout << "segitiga siku-siku dengan tinggi " << tinggi << endl;

    for(int a=1; a<= tinggi; a++) //perulangan untuk tinggi segitiga
    {
        for(int b=1; b<=a; b++) //perulangan untuk menampilkan *
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
