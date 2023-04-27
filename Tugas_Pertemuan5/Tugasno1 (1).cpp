#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Belajar Mengaji";
  string nama = "Nurul";

public:
  string cekPinjaman() {
    return "Buku Belajar Menggaji Sudah Dipinjam Oleh Nurul";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku Belajar Menggaji Sudah Dikembalikan oleh Nurul ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}