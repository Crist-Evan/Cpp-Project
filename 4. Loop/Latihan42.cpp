#include <iostream>
using namespace std;

int main() {

    string kata;

    cout << "masukan sebuah kata: " << kata;
    cin >> kata;

    for(int i = 0; i < kata.length(); i++){
        for(int j = i; j < kata.length(); j++) {
            cout << kata[j];
        }
        cout << endl;
    }

    return 0;
}
