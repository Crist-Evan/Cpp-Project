#include <iostream>
using namespace std;

int main(){

string str1;
string str2;
string strTotal;

cout << "masukan input pertama: ";
getline (cin,str1);

cout << "masukan input  kedua: ";
getline (cin,str2);

strTotal = str1 + " " + str2;

cout << strTotal;

return 0;
}
