#include <iostream>
using namespace std;

int main() {

    string item[] = {"tas", "komputer", "pensil", "pulpen", "buku", "laptop"};

    for(int i = 0; i < sizeof(item)/sizeof(string); i++) {
         if( i % 2 == 0) {
            for(char &huruf : item[i]) {
            huruf = toupper(huruf);
            }
         }
    }

    for(string &kata : item) {
        cout << kata << " ";
    }

    return 0;
}

