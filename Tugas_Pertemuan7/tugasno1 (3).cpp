#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
public:
virtual void Status(){
  cout << "..." << endl;
}
virtual void Nama(){
  cout << "..." << endl;
}
virtual void Umur(){
  cout << "..." << endl;
}
virtual void Jurusan(){
  cout << "..." << endl;
}
virtual void Fakultas(){
  cout << "..." << endl;
}
};

class Fikry : public Mahasiswa{
public:
void Status(){
  cout << "Alumni" << endl;
}
void Nama(){
  cout << "Fikry" << endl;
}
void Umur(){
  cout << "22" << endl;
}
void Jurusan(){
  cout << "Teknologi Informasi" << endl;
}
void Fakultas(){
  cout << "Informatika" << endl;
}
};

class Nopi : public Mahasiswa{
public:
void Status(){
  cout << "Mahasiswa Aktif" << endl;
}
void Nama(){
  cout << "Nopi" << endl;
}
void Umur(){
  cout << "20" << endl;
}
void Jurusan(){
  cout << "Teknologi Informasi" << endl;
}void Fakultas(){
  cout << "Informatika" << endl;
}
};


int main(){
  Mahasiswa *h1 = new Fikry();
  Mahasiswa *h2 = new Nopi();

  h1->Status();
  h1->Nama();
  h1->Umur();
  h1->Jurusan();
  h1->Fakultas();
  cout <<endl;
  cout << "-------------------------"<<endl ;
  cout <<endl;
  h2->Status();
  h2->Nama();
  h2->Umur();
  h2->Jurusan();
  h2->Fakultas();
  return 0;
}