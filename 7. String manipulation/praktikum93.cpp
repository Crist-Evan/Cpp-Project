#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stringPisah = "saya mahasiswa tekkom,sedang belajar daspro";
    size_t posisiPemisah = stringPisah.find( "," );

    string bagianPertama = stringPisah.substr(0,posisiPemisah);
    string bagianKedua = stringPisah.substr(posisiPemisah + 1);

    cout<< "bagian pertama: "<<bagianPertama<<endl;
    cout<< "bagian kedua: "<<bagianKedua<<endl;

    return 0;
}
