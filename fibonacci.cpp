#include <iostream> //library untuk input dan output
#include <cstdlib> //library untuk membersihkan layar
using namespace std; //untuk menghindari penulisan std::

int fibonacci(int n) //fungsi untuk menghitung bilangan Fibonacci
{
    if (n == 0) return 0; //jika n sama dengan 0, kembalikan nilai 0
    if (n == 1) return 1; //jika n sama dengan 1, kembalikan nilai 1

    return fibonacci(n - 1) + fibonacci(n - 2);//rekursi memanggil fungsi fibonacci dengan parameter n-1 dan n-2, lalu menjumlahkan hasilnya
}

int main() //fungsi utama
{
    int n; //deklarasi variabel n

    system("cls"); //untuk membersihkan layar
    cout << "Masukkan berapa angka Fibonacci yang ingin dihitung: "; //memberikan instruksi kepada user untuk memasukkan angka Fibonacci yang ingin dihitung
    cin >> n; //membaca input dari user 

    cout << "Fibonacci: " << fibonacci(n) << endl; //menampilkan hasil Fibonacci dengan memanggil fungsi fibonacci dengan parameter n
}