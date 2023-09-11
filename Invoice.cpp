#include <iostream>

int main() {
    double alas, tinggi;

    // Meminta pengguna memasukkan nilai alas dan tinggi
    std::cout << "Masukkan panjang alas segitiga: ";
    std::cin >> alas;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    // Menghitung luas segitiga
    double luas = 0.5 * alas * tinggi;

    // Menampilkan hasil
    std::cout << "Luas segitiga adalah: " << luas << std::endl;

    return 0;
