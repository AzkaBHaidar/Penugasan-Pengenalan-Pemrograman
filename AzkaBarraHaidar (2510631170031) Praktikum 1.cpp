#include <iostream>
using namespace std;
int main() { //Awal perintah
    string nama; //Variabel untuk menyimpan data nama berbentuk "String" (Teks)
    int umur; //Variabel untuk menyimpan data umur berbentuk "int" (Bilangan bulat)
    
    cout << "Komputer : Halo manusia, siapa nama kamu? \nSaya : Nama saya "; 
    cin >> nama; //Input data nama
    
    cout << "Komputer : Kamu umurnya berapa " << nama << "?\n" << nama << " : Saya berumur ";
    cin >> umur; //Input data umur
    
    cout << "Komputer : Halo " << nama << " yang berumur " << umur << " tahun, Senang bertemu denganmu!\n" << nama << " : senang bertemu denganmu juga"; //mendisplay data yang sudah dimasukan pengguna
    return 0; //Akhir perintah
}
