#include <iostream>
using namespace std;

int main() {

    //declare
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;

    //input
    cout << "Masukan nilai x = ";
    cin >> x;
    cout << "Masukan nilai y = ";
    cin >> y;

    //binary operation
    a = x + y;
    b = x - y;
    c = x % y;
    d = x * y;

    //unary operation
    e = +x;
    f = -x;

    //output
    cout << "Hasil dari a = x + y = " << a << endl;
    cout << "Hasil dari b = x - y = " << b << endl;
    cout << "Hasil dari c = x % y = " << c << endl;
    cout << "Hasil dari d = x * y = " << d << endl;
    cout << "Hasil dari e = +x = " << e << endl;
    cout << "Hasil dari f = -x = " << f << endl;

    return 0;
}
