#include <iostream> //library untuk input dan output
#include <cstdlib> //library untuk membersihkan layar
using namespace std; //untuk menghindari penulisan std::

int main() //fungsi utama
{
    system ("cls"); //untuk membersihkan layar
    int a, b, c, d, e; //deklarasi 5 variabel dalam bentuk integer

    cout << "Masukkan lima angka antara 0-9: "; //memberikan instruksi kepada user untuk memasukkan 5 angka
    cin >> a >> b >> c >> d >> e; //membaca input dari user dan menyimpannya dalam variabel a, b, c, d, e
    
    cout << " " << a << " " << b << " " << c << " " << d << " " << e << endl; //menampilkan angka yang dimasukkan oleh user dalam urutan yang sama
    cout << " " << e << " " << d << " " << c << " " << b << " " << a << endl; //menampilkan angka yang dimasukkan oleh user dalam urutan terbalik
}