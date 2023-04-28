#include <iostream>
#include <string>
using namespace std;

// definisi record mahasiswa
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
    tambahNode(head, "Dimas", 20, "Informatika");
    tambahNode(head, "Budi", 19, "Teknik Mesin");
    tambahNode(head, "Ahmad", 21, "Teknik Elektro");
    
    // mencetak semua data mahasiswa pada linked list
    cetakData(head);
    
}
