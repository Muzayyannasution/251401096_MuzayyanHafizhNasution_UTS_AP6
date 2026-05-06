#include <iostream> //library untuk input dan output
#include <cstdlib> //library untuk membersihkan layar
using namespace std; //untuk menghindari penulisan std::

int fpb(int a, int b) { //fungsi untuk menghitung FPB
    if (b == 0) //jika b sama dengan 0
        return a; //kembalikan nilai a sebagai FPB
    return fpb(b, a % b); //rekursif dengan memanggil fungsi fpb dengan parameter b dan sisa pembagian a dengan b
}

int main() { //fungsi utama
    int x, y; //deklarasi dua variabel
    
    system("cls"); //membersihkan layar
    cout << "Masukkan dua angka: "; //memberikan instruksi kepada user untuk menginput dua angka
    cin >> x >> y; //membaca input dari user dan menyimpannya dalam variabel x  dan y
    
    cout << "FPB = " << fpb(x, y) << endl; //menampilkan hasil FPB dengan memanggil fungsi fpb
}