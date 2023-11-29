#include <iostream>

int main() {

    double panjang;
    double lebar;
    double tinggi;
    double volume;

    std::cout << "masukan panjang: ";
    std::cin >> panjang;
    std::cout << "masukan lebar: ";
    std::cin >> lebar;
    std::cout << "masukan tinggi: ";
    std::cin >> tinggi;

    volume = panjang * lebar * tinggi;
    std::cout << "______________________\n";
    std::cout << "volume-nya adalah: " << volume << "cm^3";

    return 0;
}
