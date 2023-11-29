#include <iostream>
using namespace std;

int main () {

    string kalimat;

    cout << "masukan kalimat: ";
    getline (cin,kalimat);

    for(int i=0; i<kalimat.length(); i++) {
        if(kalimat[i] == 'a') {
            kalimat[i] = 'i';
        }else if(kalimat[i] == 'A') {
            kalimat[i] = 'I';
        }
    }

    cout << kalimat;

    return 0;
}
