#include <iostream>
using namespace std;

int main() {

    string hewan[] = {"Ayam", "Ikan", "Kelinci", "Ubur-ubur", "Cendrawasih"};

    for(string &kata : hewan) {
        for (int i = 0; i < kata.length(); i++) {
            if (kata[i] == 'i') {
                kata[i] = 'a';
            }
        }
    }

    for(string &kata : hewan) {
        cout << kata << " ";
    }

    return 0;
}
