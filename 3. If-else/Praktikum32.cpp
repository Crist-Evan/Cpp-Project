#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){

	int nilai;
	string nama;
	string grade;
	string keterangan;

	cout << "Masukan nilai: ";
	cin >> nilai;

	if(nilai >= 90){
		grade = "A";
	}else if(nilai >= 70){
		grade = "B";
	}else if(nilai >= 50){
		grade = "C";
	}else if(nilai >= 40){
		grade = "D";
	}else{
		grade = "E";
	}

	cout << endl;
	if(grade == "A" || grade == "B" || grade == "C"){
		keterangan = "Lulus";
	}else{
		keterangan = "Tidak lulus";
	}
	cout << "Anda mendapatkan nilai " << grade << " dan dinyatakan " << keterangan << endl;

	getch();

	return 0;
}
