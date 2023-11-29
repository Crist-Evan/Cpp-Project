#include <iostream>
using namespace std;

int main (){

    float jari;
    float hasil;

    const float p = 3.14;
    cout << "Masukan jari-jari: ";
    cin >> jari;

    hasil = (jari * p) * 2;
    cout << "Keliling dari lingkaran adalah: " << hasil;

    return 0;
}
