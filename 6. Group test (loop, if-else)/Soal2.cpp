#include <iostream>
using namespace std;

int main(){

    int angka1, angka2;

    cout<< "masukan angka pertama :";
    cin>> angka1;
    cout<< "masukan angka kedua :";
    cin>> angka2;

    while(angka1 != angka2){
        if (angka1 > angka2){
            angka1 -= angka2;
        } else {
            angka2 -= angka1;
        }
    }
    cout<< "FPB dari dua angka tersebut adalah :" <<angka1<<endl;
        for (int i =1; i<= angka1; i++){
            if (angka1 % i ==0 && angka2 % i == 0){
                cout<< i<< " ";
            }
        }

        return 0;
}
