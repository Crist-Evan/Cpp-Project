#include <iostream>
using namespace std;

int main() {

    string item[] = {"tas", "komputer", "pensil", "pulpen", "buku", "laptop"};

    for(char &huruf : item[0]) {
        huruf = toupper(huruf);
    }

    for(char &huruf : item[2]) {
        huruf = toupper(huruf);
    }

    for(char &huruf : item[4]) {
        huruf = toupper(huruf);
    }

    for(string &kata : item) {
        cout << kata << " ";
    }
    return 0;
}
