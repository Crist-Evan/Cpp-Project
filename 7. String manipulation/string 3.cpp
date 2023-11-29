#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat;

    cout<< "masukan sebuah kalimat = ";
    getline (cin,kalimat);

    for (char&karakter:kalimat)
    {
        if (karakter == 'a'){
            karakter = 'i';
        }
    }
    cout<< "kalimat setalah peggantian =  "<<kalimat<<endl;

    return 0;
}
