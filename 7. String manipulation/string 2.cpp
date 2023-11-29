#include <iostream>
#include <string>
using namespace std;

int main()
{
    string abstrak ;
    cout<< "masukan abstrak: " ;
    getline (cin, abstrak);


    cout<<"Total Karakter Pada Abstrak = "<<abstrak.size()<<endl;

    return 0;
}

