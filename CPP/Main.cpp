#include <iostream>
#include "Shirt.cpp"

int main() {
    std::cout << "\n===== Selamat Datang di Database Produk Busana =====" << std::endl;

    int jumlahData;

    // Meminta pengguna untuk memasukkan jumlah data
    std::cout << "\nMasukkan jumlah data: ";
    std::cin >> jumlahData;

    // Membuat array of objects dengan alokasi dinamis
    Produk *Product = new Produk[jumlahData];
    Shirt *Baju = new Shirt[jumlahData];
    Clothing *Pakaian = new Clothing[jumlahData];

    std::cout << "\n== Masukkan Data Produk ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        std::string id, name, brand, price;

        std::cout << "\nMasukkan ID: ";
        std::cin >> id;

        std::cout << "Masukkan Nama: ";
        std::cin >> name;

        std::cout << "Masukkan Brand: ";
        std::cin >> brand;

        std::cout << "Masukkan Price: ";
        std::cin >> price;

        Product[i] = Produk(id, name, brand, price);
    }

    std::cout << "\n== Masukkan Data Pakaian ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        int nim;
        std::string size, material, gender;

        std::cout << "\nMasukkan Ukuran: ";
        std::cin >> size;

        std::cout << "Masukkan Material: ";
        std::cin >> material;

        std::cout << "Masukkan Gender (P/L): ";
        std::cin >> gender;

        Pakaian[i] = Clothing(size, material, gender);
    }

    std::cout << "\n== Masukkan Data Baju ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        std::string color, sleeve_type;

        std::cout << "\nMasukkan Warna: ";
        std::cin >> color;

        std::cout << "Masukkan Tipe Lengan: ";
        std::cin >> sleeve_type;

        Baju[i] = Shirt(color, sleeve_type);
    }

    // Menampilkan data sebanyak inputan user dalam jumlahData

    std::cout << "\n== Data Produk ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        std::cout << "\n# Data Ke-" << i+1 << std::endl;
        std::cout << "ID    : " << Product[i].getId() << "\nNama    : " << Product[i].getName() << "\nBrand     : " << Product[i].getBrand() << "\nPrice    : " << Product[i].getPrice() << std::endl;
    }

    std::cout << "\n== Data Pakaian ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        std::cout << "\n# Data Ke-" << i+1 << std::endl;
        std::cout << "Ukuran    : " << Pakaian[i].getSize() << "\nMaterial  : " << Pakaian[i].getMaterial() << "\nGender    : " << Pakaian[i].getGender() << std::endl;
    }

    std::cout << "\n== Data Baju ==" << std::endl;
    for(int i = 0; i < jumlahData; i++) {
        std::cout << "\n# Data Ke-" << i+1 << std::endl;
        std::cout << "Warna     : " << Baju[i].getColor() << "    ||    Tipe Lengan     : " << Baju[i].getSleeve_type() << std::endl;
    }

    return 0;
}