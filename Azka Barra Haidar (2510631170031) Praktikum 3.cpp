#include <iostream> // Untuk men-display output program
using namespace std; // untuk menggunakan keyword cin dan cout

class item { // membuat class untuk item
public: // membuat properti yang bisa diakses diluar klas
    string item_name;
    int amount;
    double price;
};

int main() { // mulai program
    item itemInCart; // membuat variabel baru dari class item
    item itemInCart2;
    float totalHarga1;
    float totalHarga2;
    // mengedit properti itemInCart
    itemInCart.item_name = "Indomie";
    itemInCart.amount = 5;
    itemInCart.price = 3500;
    totalHarga1 = itemInCart.amount * itemInCart.price;
    // mengedit properti itemInCart2
    itemInCart2.item_name = "Mie Sedap";
    itemInCart2.amount = 10;
    itemInCart2.price = 3000;
    totalHarga2 = itemInCart2.amount * itemInCart2.price;
    // print judul warung
    cout << "Selamat datang di Azkamart, selamat belanja" << endl;
    // memanggil properti-properti yang sudah diedit
    cout << "Penjual 1 :" << endl;
    cout << "- Nama Barang      : " << itemInCart.item_name << endl;
    cout << "- Jumlah Barang    : " << itemInCart.amount << endl;
    cout << "- Harga Barang     : " << itemInCart.price << endl;
    // menghitung jumlah harga barang
    cout << "- Jumlah Harga Barang : " << totalHarga1 << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    // memanggil properti-properti yang sudah diedit
    cout << "Penjual 2 :" << endl;
    cout << "Nama Barang      : " << itemInCart2.item_name << endl;
    cout << "Jumlah Barang    : " << itemInCart2.amount << endl;
    cout << "Harga Barang     : " << itemInCart2.price << endl;
    // menghitung jumlah harga barang
    cout << "Jumlah Harga Barang : " << totalHarga2 << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    // Proses Perbandingan harga
    cout << "Penjual 1 == penjual 2 : " << (totalHarga1 == totalHarga2) << endl;
    cout << "Penjual 1 > penjual 2 : " << (totalHarga1 > totalHarga2) << endl;
    cout << "Penjual 1 < penjual 2 : " << (totalHarga1 < totalHarga2) << endl;
    return 0;
} 
// selesai
