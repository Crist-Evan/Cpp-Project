#include <iostream>
using namespace std;

int main() {

    //declare
    int a = 10;
    int b = 11;
    int hasilAND, hasilOR, hasilXOR, hasilNOT, hasilSHL, hasilSHR;

    //bitwise operation
    hasilAND = a & b;
    hasilOR = a | b;
    hasilXOR = a ^ b;
    hasilNOT = ~ a;
    hasilSHL = a << 1;
    hasilSHR = a >> 1;

    //output
    cout << hasilAND << endl;
    cout << hasilOR << endl;
    cout << hasilXOR << endl;
    cout << hasilNOT << endl;
    cout << hasilSHL << endl;
    cout << hasilSHR << endl;

    return 0;
}
