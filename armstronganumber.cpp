#include <iostream>   // library untuk input dan output
#include <cstdlib> // library untuk membersihkan layar
using namespace std;  // supaya tidak perlu menulis std::

// fungsi untuk menghitung pangkat secara manual
int hitungPangkat(int angka, int banyakPangkat) 
{
    int hasilPangkat = 1; // nilai awal hasil pangkat
    for (int i = 0; i < banyakPangkat; i++) // perulangan sebanyak jumlah pangkat
    {  
        hasilPangkat *= angka; // hasil = hasil * angka
    }
    return hasilPangkat; // mengembalikan hasil pangkat
}

int main() {
    int angkaInput, angkaSementara, digitSekarang; //deklarasi variabel untuk menyimpan angka input, angka sementara untuk perhitungan, dan digit yang sedang diproses
    int jumlahDigit = 0; // menghitung banyaknya digit
    int totalHasil = 0; // menyimpan jumlah hasil pangkat semua digit

    system("cls"); // membersihkan layar
    cout << "Masukkan angka: "; // menampilkan teks input
    cin >> angkaInput; // menerima angka dari user

    angkaSementara = angkaInput; // salin angka asli ke angka sementara

    while (angkaSementara != 0) // selama angka sementara belum habis 
    {  
        angkaSementara /= 10; // buang 1 digit terakhir
        jumlahDigit++; // tambah penghitung digit
    }

    angkaSementara = angkaInput; // kembalikan angka sementara ke nilai awal

    while (angkaSementara != 0) // ulangi selama masih ada digit
    {
        digitSekarang = angkaSementara % 10; // ambil digit paling belakang
        totalHasil += hitungPangkat(digitSekarang, jumlahDigit); // jumlahkan digit^jumlahDigit
        angkaSementara /= 10; // buang digit terakhir
    }

    angkaSementara = angkaInput; // reset lagi agar bisa menampilkan perhitungan
    cout << "Perhitungan: "; // menampilkan teks perhitungan

    while (angkaSementara != 0) { // selama masih ada digit
        digitSekarang = angkaSementara % 10; // ambil digit terakhir

        for (int i = 0; i < jumlahDigit; i++) // tampilkan digit sebanyak jumlahDigit kali
        { 
            cout << digitSekarang; // cetak digit
            if (i != jumlahDigit - 1) // kalau belum digit terakhir
            {         
                cout << "*"; // tampilkan tanda kali
            }
        }

        angkaSementara /= 10; // buang digit terakhir
        if (angkaSementara != 0) // kalau masih ada digit berikutnya
        {
            cout << " + "; // tampilkan tanda tambah
        }
    }

    cout << " = " << totalHasil << endl; // tampilkan hasil akhir perhitungan

    if (totalHasil == angkaInput) // cek apakah hasil sama dengan angka asli
    { 
        cout << "Ya, " << angkaInput << " ini adalah Armstrong Number" << endl; // jika sama, tampilkan bahwa ini adalah Armstrong Number
    } else {
        cout << "Tidak, " << angkaInput << " ini bukan Armstrong Number" << endl; // jika tidak sama, tampilkan bahwa ini bukan Armstrong Number
    }
}