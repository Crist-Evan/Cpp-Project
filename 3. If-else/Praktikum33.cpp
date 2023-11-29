#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int kodeBulan;
	
	cout << "Pilih Bulan\n";
	cout << "=======================\n";
	cout << "Masukan Angka Bulan (1 - 12): ";
	cin >> kodeBulan;
	
	cout << endl;
	cout << "->";
	
	//pernyataan switch
	switch(kodeBulan){
		case 1 :
			cout << "Januari" << endl;
		break;
		case 2 :
			cout << "Febuari" << endl;
		break;
		case 3 :
			cout << "Maret" << endl;
		break;
		case 4 :
			cout << "April" << endl;
		break;
		case 5 :
			cout << "Mei" << endl;
		break;
		case 6 :
			cout << "Juni" << endl;
		break;
		case 7 :
			cout << "Juli" << endl;
		break;
		case 8 :
			cout << "Agustus" << endl;
		break;
		case 9 :
			cout << "September" << endl;
		break;
		case 10 :
			cout << "Oktober" << endl;
		break;
		case 11 :
			cout << "November" << endl;
		break;
		case 12 :
			cout << "Desember" << endl;
		break;
		default :
			cout << "Batas Input 1 - 12!";
		break;
	}
	
	getche();
}