#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stringmodifikasi = "belajar,daspro";
    size_t posisikarakter = stringmodifikasi.find(",");

    stringmodifikasi[posisikarakter] = '-';

    cout<< "string setelah modifikasi "<<stringmodifikasi<<endl;

    return 0;
}
