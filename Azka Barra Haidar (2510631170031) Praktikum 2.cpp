#include <iostream>
using namespace std;
class item { //membuat class untuk item
    public: //membuat properti yang bisa diakses diluar klas
        string item_name;
        int amount;
        double price;
};

int main()
{
    item itemInCart; //membuat variabel baru dari class item
    
    //mengedit properti itemInCart
    itemInCart.item_name = "Indomie";
    itemInCart.amount = 1;
    itemInCart.price = 3500;
    
    // memanggil properti yang sudah diedit
    cout << "Nama Barang   : " << itemInCart.item_name << endl;
    cout << "Jumlah Barang : " << itemInCart.amount << endl;
    cout << "Harga Barang  : " << itemInCart.price << endl;

    return 0;
}
