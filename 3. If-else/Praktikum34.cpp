#include <iostream>
using namespace std;

int main(){
	
	char kode;
	
	cout << "Masukan kode barang (A,B,C): ";
	cin >> kode;
	
	switch(kode){
		case 'A' : 
			cout << "Alat olahraga";
		break;
		case 'B' : 
			cout << "Alat elektronik";
		break;
		case 'C' :
			cout << "Alat masak";
		break;
		default :
			cout << "Anda salah memasukan kode!";
	}
	
	return 0;
}