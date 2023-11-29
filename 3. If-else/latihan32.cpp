#include <iostream>
using namespace std;

int main(){
	
	int UTS;
	int UAS;
	int Tugas;
	int nilaiAkhir;
	char nilaiHuruf;
	
	cout << "Masukan nilai UTS: ";
	cin >> UTS;
	cout << "Masukan nilai UAS: ";
	cin >> UAS;
	cout << "Masukan nilai Tugas: ";
	cin >> Tugas;
	
	UTS = 35 * UTS / 100;
	UAS = 45 * UAS / 100;
	Tugas = 20 * Tugas / 100;
	
	nilaiAkhir = UTS + UAS + Tugas;
	cout << "nilai akhir: " << nilaiAkhir << endl;
	
	if(nilaiAkhir >= 85 && nilaiAkhir <= 100){
		nilaiHuruf = 'A';
	}else if(nilaiAkhir >= 70 && nilaiAkhir < 85){
		nilaiHuruf = 'B';
	}else if(nilaiAkhir >= 55 && nilaiAkhir < 70){
		nilaiHuruf = 'C';
	}else if(nilaiAkhir >= 40 && nilaiAkhir < 55){
		nilaiHuruf = 'D';
	}else{
		nilaiHuruf = 'E';
	}
	
	switch(nilaiHuruf){
		case 'A' :
			cout << "nilai huruf: A";
		break;
		case 'B' :
			cout << "nilai huruf: B";
		break;
		case 'C' :
			cout << "nilai huruf: C";
		break;
		case 'D' :
			cout << "nilai huruf: D";
		break;
		case 'E' :
			cout << "nilai huruf: E";
		break;
		default :
			cout << "Error";
	}
	
	return 0;
}