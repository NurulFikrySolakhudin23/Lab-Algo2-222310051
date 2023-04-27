#include <iostream>
using namespace std;  //perintah yang menyatakan terdapat class atau file

class contoh { //Nama class nya
private: //penentu akses
  int nilai; //input variabel nilai

public: //penentu akses 
  contoh(int n) {
    nilai = n; //inisialisasi nilai contoh dengan variabel nilai dan n
  } 
  int getNum() { 
    return nilai; //memanggil nilai
  } 
};

int main() {
  contoh obj(10); //membuat objek dari sebuah class yang bernilai 10
  cout << "Nilai Yang diinput: " << obj.getNum() << endl; //output 

  return 0;
}

//program ini merupakan penerapan program constructor