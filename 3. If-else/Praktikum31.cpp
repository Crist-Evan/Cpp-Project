#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
	
	string kata;
	cout << "Masukan kata BELAJAR: ";
	cin >> kata;
	
	if(kata == "BELAJAR"){
		cout << "Kata yang di input sesuai";
	}else{
		cout << "Kata yang di input tidak sesuai";
	}
	getch();
	
	return 0;
}