#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk merepresentasikan mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

const int length = 100; // Batas maksimum antrian
int front = -1; // Pointer untuk elemen depan antrian
int rear = -1; // Pointer untuk elemen belakang antrian
typedef Mahasiswa antrian_mahasiswa[length]; // Deklarasi tipe data antrian
antrian_mahasiswa antrian; // Deklarasi variabel antrian dengan tipe data antrian_mahasiswa

// Fungsi untuk memeriksa apakah antrian kosong atau tidak
bool isEmpty() {
  if(front == -1 && rear == -1) {
    return true;
  }
  return false;
}

// Fungsi untuk memeriksa apakah antrian penuh atau tidak
bool isFull() {
  if (rear < length - 1) {
    return false;
  }
  return true;
}

// Fungsi untuk menambahkan mahasiswa ke antrian
void enqueue(antrian_mahasiswa& data, Mahasiswa& mhs) {
  if (isFull()) {
      cout << "Antrian penuh!" << endl;
      return;
  } else if (isEmpty()) {
      front = rear = 0;
  } else {
      rear = rear + 1;
  }
  data[rear] = mhs;
  cout << "Mahasiswa " << mhs.nama << " berhasil mengantri." << endl;
}

// Fungsi untuk mengeluarkan mahasiswa dari antrian
void dequeue(antrian_mahasiswa& data) {
  if (isEmpty()) {
    cout << "Antrian kosong!" << endl;
    return;
  } 
  cout << "Mahasiswa " << data[front].nama << " berhasil keluar dari antrian." << endl;
  for(int i = front; i <= rear; i++) {
    data[i] = data[i + 1];
  }

  rear = rear - 1;
  if(rear == -1) {
    front = -1;
  }
}

// Fungsi untuk mencetak seluruh mahasiswa yang sedang mengantri
void cetak_antrian(antrian_mahasiswa data) {
  if (isEmpty()) {
    cout << "Antrian kosong!" << endl;
  } else {
      cout << "Mahasiswa yang mengantri:" << endl;
      for (int i = 0; i <= rear; i++) {
          cout << "Nama: " << data[i].nama << endl;
          cout << "Umur: " << data[i].umur << endl;
          cout << "Jurusan: " << data[i].jurusan << endl;
          cout << endl;
      }
  }
}

int main() {
  Mahasiswa mhs1 = {"Dimas", 20, "Informatika"};
  Mahasiswa mhs2 = {"Budi", 19, "Mesin"};
  Mahasiswa mhs3 = {"Cindy", 21, "Teknik Elektro"};

  // Enqueue tiga mahasiswa ke antrian
  enqueue(antrian, mhs1);
  enqueue(antrian, mhs2);
  enqueue(antrian, mhs3);

  // Cetak antrian
  cetak_antrian(antrian);

  // Dequeue satu mahasiswa dari antrian
  dequeue(antrian);

  // Cetak antrian setelah satu mahasiswa keluar
  cetak_antrian(antrian);

  // Enqueue satu mahasiswa lagi ke antrian
  Mahasiswa mhs4 = {"Denny", 22, "Teknik Sipil"};
  enqueue(antrian, mhs4);

  // Cetak antrian setelah satu mahasiswa masuk
  cetak_antrian(antrian);
}