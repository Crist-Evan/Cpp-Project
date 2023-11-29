#include <iostream>

int main() {

    std::string nama;
    std::string alamat;
    std::string notp;

    std::cout << "Masukan Nama      : ";
    std::cin >> nama;
    std::cout << "Masukan Alamat    : ";
    std::cin >> alamat;
    std::cout << "Masukan No Telpon : ";
    std::cin >> notp;

    std::cout << "=================================\n";
    std::cout << "Nama      : " << nama << '\n';
    std::cout << "Alamat    : " << alamat << '\n';
    std::cout << "No Telpon : " << notp << '\n';
    std::cout << "=================================";

    return 0;
}
