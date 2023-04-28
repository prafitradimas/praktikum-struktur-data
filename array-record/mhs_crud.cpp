#include<iostream>
using namespace std;

struct Jurusan {
  string kode_jurusan;
  string nama_jurusan;
};

struct Mahasiswa {
  string nim;
  string nama;
  Jurusan rec_jurusan;
};

const int array_size = 10; //deklarasi besar array

//deklarasi variable penghitung panjang array
int array_counter = 0;

//definisi type data larik record
typedef Mahasiswa array_mahasiswa[array_size];

//deklarasi variable larik record
array_mahasiswa students; 

void create_student(array_mahasiswa& data, int& array_length) {
  string nim_baru;

  cout << "----- entri mahasiswa baru -----" << endl;
  ulang:
  cout << "masukkan nim :"; cin >> nim_baru;
  for(int i=0; i < array_length - 1; i++) {
    if(nim_baru == data[i].nim) {
      cout << "----- nim sudah terdaftar! -----" << endl;
      cout << "-------------ulangi-------------" << endl;
      goto ulang;
    }
  }
  data[array_length].nim = nim_baru;
  cout << "masukkan nama :"; cin >> data[array_length].nama;
  cout << "masukkan kode jurusan :"; cin >> data[array_length].rec_jurusan.kode_jurusan;
  cout << "masukkan nama jurusan :"; cin >> data[array_length].rec_jurusan.nama_jurusan;
  array_length = array_length + 1;
  cout << "----- berhasil menambahkan data! -----" << endl;
}

void read_mahasiswa(array_mahasiswa data, int array_length) {
    cout << "------- cetak mahasiswa -------" << endl;
  for(int i = 0; i < array_length; i++) {
    cout << "nim mahasiswa :" << data[i].nim << endl;
    cout << "nama mahasiswa :" << data[i].nama << endl;
    cout << "kode jurusan : " << data[i].rec_jurusan.kode_jurusan << endl;
    cout << "nama jurusan : " << data[i].rec_jurusan.nama_jurusan << endl;
    cout << "------------------------------" << endl;
  }
}

void update_student(array_mahasiswa &data, int array_length) {
  bool isExists = false;
  int record_position = 0;
  string param_nim;

  cout << "----- update mahasiswa -----" << endl;
  cout << "masukkan nim :"; cin >> param_nim;

  for(int i=0; i < array_length; i++) {
    if(data[i].nim == param_nim) {
      isExists = true;
      record_position = i;
    }
  }

  if(isExists == false) {
    cout << "----- mahasiswa tidak ditemukan! -----" << endl;
    return;
  }
  cout << "update mahasiswa dengan nim : " << data[record_position].nim << endl;
  cout << "masukkan nama :"; cin >> data[record_position].nama;
  cout << "masukkan kode jurusan :"; cin >> data[record_position].rec_jurusan.kode_jurusan;
  cout << "masukkan nama jurusan :"; cin >> data[record_position].rec_jurusan.nama_jurusan;
  cout << "----- berhasil mengupdate data! -----" << endl;
}

void delete_student(array_mahasiswa& data, int& array_length) {
  bool isExists = false;
  int record_position = 0;
  string param_nim;

  cout << "----- delete mahasiswa -----" << endl;
  cout << "masukkan nim :"; cin >> param_nim;

  for(int i=0; i < array_length; i++) {
    if(data[i].nim == param_nim) {
      isExists = true;
      record_position = i;
    }
  }

  if(isExists == false) {
    cout << "----- mahasiswa tidak ditemukan! -----" << endl;
    return;
  }
  cout << "menghapus mahasiswa dengan nim : " << data[record_position].nim << endl;
  for(int i = record_position; i < array_length; i++) {
    data[i] = data[i + 1];
  }
  array_length = array_length - 1;
  cout << "----- berhasil menghapus data! -----" << endl;
}

int main() {
  int pilih = 0;

  do {
    system("cls");
    cout<<"menu:"<<endl;
    cout<<"1. Tambah Data Mahasiswa"<<endl;
    cout<<"2. Cetak Data Mahasiswa"<<endl;
    cout<<"3. Delete Data Mahasiswa"<<endl;
    cout<<"4. Update Data Mahasiswa"<<endl;
    cout<<"0. Selesai"<<endl;
    cout<<"pilih menu:  ";cin>>pilih;

    switch(pilih) {	
      case 1: create_student(students, array_counter);
      case 2:if(array_counter == 0) cout<<"Data kosong"<<endl;else read_mahasiswa(students, array_counter); break;
      case 3:if(array_counter == 0) cout<<"Data kosong"<<endl;else delete_student(students, array_counter); break;
      case 4:if(array_counter == 0) cout<<"Data kosong"<<endl;else update_student(students, array_counter); break;
      case 0:cout<<"Terimakasih "<<endl;break;
      default : cout<<"salah pilih menu"<<endl;
    }
    system("pause");
  } while (pilih != 0);
}



