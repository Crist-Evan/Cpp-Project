#include <iostream>
using namespace std;

int main() {

    int a;
    int hasilSebenarnya;
    int hasilNOT;

    cout << "Masukan nilai a = ";
    cin >> a;

    hasilSebenarnya = (a + 5 < 15);
    hasilNOT = !(a + 5 < 15);

    cout << "================================================" << endl;
    cout << "============ Program ekspresi NOT ==============" << endl;
    cout << "================================================" << endl;
    cout << "Nilai a                = " << a << endl;
    cout << "Nilai hasilSebenarnya  = (a + 5 < 10) = " << hasilSebenarnya << endl;
    cout << "Nilai hasilNOT         = !(hasilSebenarnya) atau !(a + 5 < 15) = " << hasilNOT << endl;

    return 0;
}
