# Queue/Antrian

`Queue` adalah struktur data yang memungkinkan penyimpanan dan pengambilan elemen secara berurutan (`First In First Out` - `FIFO`). Elemen pertama yang dimasukkan akan menjadi elemen pertama yang diambil. Queue biasanya digunakan untuk menyimpan data yang harus diproses dalam urutan tertentu, seperti tugas yang masuk atau pesan yang harus dikirim.

Dalam implementasi queue, terdapat dua operasi utama yang dapat dilakukan, yaitu `enqueue` dan `dequeue`. Operasi `enqueue` digunakan untuk menambahkan elemen baru ke dalam antrian, sedangkan operasi `dequeue` digunakan untuk mengambil dan menghapus elemen yang berada di awal antrian.

Salah satu cara untuk merepresentasikan queue adalah menggunakan `array`. Dalam implementasi ini, elemen-elemen yang masuk ke dalam queue ditempatkan di akhir array, sedangkan elemen yang diambil dari queue diambil dari awal array. Namun, cara ini memiliki kelemahan jika jumlah elemen yang dimasukkan dan diambil cukup banyak, maka perlu dilakukan realokasi array yang memakan waktu dan memori.

Alternatif lain adalah menggunakan `linked list` sebagai implementasi queue. Setiap elemen dalam linked list direpresentasikan sebagai sebuah node, dan setiap node memiliki pointer ke node berikutnya. Dalam implementasi queue dengan linked list, operasi enqueue dilakukan dengan menambahkan node baru pada akhir linked list, sedangkan operasi dequeue dilakukan dengan mengambil dan menghapus node yang berada di awal linked list.

Dalam penggunaan `Queue`, beberapa istilah yang perlu diperhatikan antara lain:

* `Front`: Elemen pertama di dalam queue yang akan diambil pada operasi dequeue.
* `Rear`: Elemen terakhir di dalam queue yang akan ditambahkan pada operasi enqueue.
* `Size`: Jumlah elemen yang saat ini terdapat dalam queue.

## Contoh:
```
   ┌─────────────┐    ┌─────────────┐    ┌─────────────┐
   │    Elemen   │    │    Elemen   │    │    Elemen   │
   │      A      │    │      B      │    │      C      │
   └─────────────┘    └─────────────┘    └─────────────┘
       Front                                   Rear

   Enqueue(4)

   ┌─────────────┐    ┌─────────────┐    ┌─────────────┐    ┌─────────────┐
   │    Elemen   │    │    Elemen   │    │    Elemen   │    │    Elemen   │
   │      A      │    │      B      │    │      C      │    │      D      │
   └─────────────┘    └─────────────┘    └─────────────┘    └─────────────┘
        Front                                                     Rear

   Dequeue()

   ┌─────────────┐    ┌─────────────┐    ┌─────────────┐
   │    Elemen   │    │    Elemen   │    │    Elemen   │
   │      B      │    │      C      │    │      D      │
   └─────────────┘    └─────────────┘    └─────────────┘
       Front                                   Rear
```

Pada ilustrasi di atas, queue direpresentasikan sebagai sebuah kotak yang berisi elemen-elemen yang disimpan secara berurutan. Setiap elemen pada queue ditambahkan pada ujung belakang queue (`Rear`) dan diambil dari ujung depan queue (`Front`) dengan menggunakan operasi `enqueue` dan `dequeue`. Pada contoh di atas, operasi `enqueue` dilakukan dengan menambahkan elemen 4 pada ujung belakang queue, sedangkan operasi `dequeue` dilakukan dengan mengambil dan menghapus elemen 1 yang berada pada ujung depan queue. Setelah operasi `dequeue` dilakukan, elemen 2 menjadi elemen pertama pada queue dan menjadi `Front` yang baru.

## Contoh Implementasi Queue
```
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
```
Penjelasan: <br>
1. Fungsi `isEmpty()`: memeriksa apakah antrian kosong atau tidak. Jika front dan rear sama-sama bernilai -1, maka antrian dianggap kosong dan fungsi mengembalikan nilai true. Jika tidak, maka fungsi mengembalikan nilai false.

2. Fungsi `isFull()`: memeriksa apakah antrian penuh atau tidak. Jika rear sama dengan length - 1, maka antrian dianggap penuh dan fungsi mengembalikan nilai true. Jika tidak, maka fungsi mengembalikan nilai false.

3. Fungsi `enqueue(antrian_mahasiswa& data, Mahasiswa& mhs)`: menambahkan elemen baru ke dalam antrian. Pertama-tama, fungsi memeriksa apakah antrian penuh atau tidak. Jika penuh, maka fungsi mencetak pesan "Antrian penuh!" dan tidak melakukan apa-apa. Jika tidak penuh, maka fungsi memeriksa apakah antrian kosong atau tidak. Jika kosong, maka front dan rear diatur ke nilai 0. Jika tidak kosong, maka rear di-increment sebesar 1. Setelah itu, elemen mhs ditambahkan ke posisi rear pada data dan fungsi mencetak pesan "Mahasiswa (nama mahasiswa) berhasil mengantri.".

4. Fungsi `dequeue(antrian_mahasiswa& data)`: menghapus elemen terdepan dari antrian. Pertama-tama, fungsi memeriksa apakah antrian kosong atau tidak. Jika kosong, maka fungsi mencetak pesan "Antrian kosong!" dan tidak melakukan apa-apa. Jika tidak kosong, maka fungsi menghapus elemen terdepan pada data dan menggeser elemen-elemen berikutnya ke kiri. Setelah itu, nilai rear dan front di-update, dan fungsi mencetak pesan "Mahasiswa (nama mahasiswa) berhasil keluar dari antrian.".