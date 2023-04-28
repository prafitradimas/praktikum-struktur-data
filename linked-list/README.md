# Linked List

```
  ┌──────────────┐      ┌──────────────┐      ┌──────────────┐
  │     Data     │      │     Data     │      │     Data     │
  │  (Node 1)    │----->│  (Node 2)    │----->│  (Node 3)    │
  │ ┌──────────┐ │      │ ┌──────────┐ │      │ ┌──────────┐ │
  │ │   Data   │ │      │ │   Data   │ │      │ │   Data   │ │
  │ │(Mahasiswa│ │      │ │(Mahasiswa│ │      │ │(Mahasiswa│ │
  │ │   A)     │ │      │ │    B)    │ │      │ │    C)    │ │
  │ └──────────┘ │      │ └──────────┘ │      │ └──────────┘ │
  │  Next: ----->│      │  Next: ----->│      │  Next: Null  │
  └──────────────┘      └──────────────┘      └──────────────┘
```
Linked list adalah salah satu struktur data yang digunakan untuk menyimpan kumpulan data terurut dalam bentuk `node` yang saling terhubung melalui `pointer`. Setiap node pada linked list menyimpan data dan pointer yang menunjuk pada node berikutnya atau sebelumnya pada linked list.

Salah satu kelebihan dari linked list adalah kemampuannya untuk mempercepat operasi penghapusan atau penambahan node pada linked list dibandingkan dengan array. Hal ini dikarenakan pada linked list, kita hanya perlu mengubah pointer pada node sebelum dan setelah node yang ingin dihapus atau ditambahkan, sementara pada array kita perlu menggeser seluruh elemen setelah node yang dihapus atau sebelum node yang ingin ditambahkan.

Ilustrasi Linked List:
```
HEAD -> [Data1|Next] -> [Data2|Next] -> [Data3|Next] -> ... -> [DataN|Next] -> NULL
```
Penjelasan: <br>
Simbol `->` menunjukkan arah dari pointer `Next` pada setiap node pada linked list. Simbol `HEAD` menunjukkan awal dari linked list, dan simbol `NULL` menunjukkan akhir dari linked list. Setiap node pada linked list memiliki dua bagian: Data yang berisi informasi yang disimpan pada node, dan `Next` yang merupakan pointer yang menunjuk pada node berikutnya pada linked list.

## Contoh Implementasi
```
#include <iostream>
#include <string>
using namespace std;

// definisi struktur mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
    Mahasiswa* next;
};

// fungsi untuk menambahkan node pada linked list
void tambahNode(Mahasiswa*& head, string nama, int umur, string jurusan) {
    // membuat node baru
    Mahasiswa* nodeBaru = new Mahasiswa;
    nodeBaru->nama = nama;
    nodeBaru->umur = umur;
    nodeBaru->jurusan = jurusan;
    nodeBaru->next = nullptr;
    
    // jika linked list masih kosong
    if (head == nullptr) {
        head = nodeBaru;
    } else {
        // mencari node terakhir
        Mahasiswa* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }
        // menambahkan node baru pada akhir linked list
        last->next = nodeBaru;
    }
}

// fungsi untuk mencetak semua data mahasiswa pada linked list
void cetakData(Mahasiswa* head) {
    Mahasiswa* current = head;
    while (current != nullptr) {
        cout << "Nama: " << current->nama << endl;
        cout << "Umur: " << current->umur << endl;
        cout << "Jurusan: " << current->jurusan << endl << endl;
        current = current->next;
    }
}

int main() {
    // membuat linked list kosong
    Mahasiswa* head = nullptr;
    
    // menambahkan beberapa node pada linked list
    tambahNode(head, "Ahmad", 20, "Teknik Informatika");
    tambahNode(head, "Budi", 19, "Sistem Informasi");
    tambahNode(head, "Cinta", 21, "Teknik Elektro");
    
    // mencetak semua data mahasiswa pada linked list
    cetakData(head);
    
    return 0;
}
```
Penjelasan: <br>
Pada contoh di atas, struktur `Mahasiswa` menyimpan informasi tentang `nama`, `umur`, dan `jurusan` mahasiswa, serta pointer `next` yang menunjuk pada node berikutnya pada linked list. Fungsi `tambahNode` digunakan untuk menambahkan node baru pada linked list dengan memasukkan informasi mahasiswa ke dalam struktur `Mahasiswa`. Fungsi `cetakData` digunakan untuk mencetak semua data mahasiswa pada linked list. Pada main, kita membuat linked list kosong dan menambahkan beberapa node pada linked list. Setelah itu, semua data mahasiswa pada linked list dicetak menggunakan fungsi `cetakData`.