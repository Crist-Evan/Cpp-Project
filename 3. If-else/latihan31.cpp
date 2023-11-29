#include <iostream>
using namespace std;

int main(){

	int kodeBuku;
	char kodeDiskon;

	cout << "Masukan kode buku: ";
	cin >> kodeBuku;
	cout << "Masukan kode diskon: ";
	cin >> kodeDiskon;

	if(kodeBuku == 1 && kodeDiskon == 'D'){
		cout << "Judul buku: Kalkulus" << endl;
		cout << "Harga: 45000";
	}else if(kodeBuku == 2 && kodeDiskon =='D'){
		cout << "Judul buku: Pengantar Teknik Komputer" << endl;
		cout << "Harga: 65000";
	}else if(kodeBuku == 1 && kodeDiskon != 'D'){
		cout << "Judul buku: Kalkulus" << endl;
		cout << "Harga: 50000";
	}else if(kodeBuku == 2 && kodeDiskon !='D'){
		cout << "Judul buku: Pengantar Teknik Komputer" << endl;
		cout << "Harga: 70000";
	}else{
		cout << "Error";
	}

	return 0;
}
