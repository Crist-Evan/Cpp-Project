#include <iostream>
using namespace std;

string reversing(string s) {
    string reversed;
    for (int i = s.length() - 1; i>= 0; i--) {
        reversed += s[i];
    }
    return reversed;
}

int main() {

    string item[] = {"tas", "komputer", "pensil", "pulpen", "buku", "laptop"};

    for(string &kata : item) {
        kata = reversing(kata);
    }

    for(string &kata : item) {
        cout << kata << " ";
    }

    return 0;
}

