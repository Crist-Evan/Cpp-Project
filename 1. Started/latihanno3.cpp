#include <iostream>

int main() {

    double harga;
    double hasil;

    std::cout << "============== Diskon 10% ==============\n";
    std::cout << "berapa harga barangnya? ";
    std::cin >> harga;

    hasil = harga - (harga * 10 / 100);
    std::cout << "Harga setelah di diskon adalah: " << hasil << '\n';
    std::cout << "========================================\n";

    return 0;
}
