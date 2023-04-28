# Array-Record
Array `record` atau `struct` pada C++ adalah array yang terdiri dari elemen-elemen berupa record atau struktur data. `Struct` merupakan tipe data kompleks yang memungkinkan kita untuk menyimpan beberapa jenis data dalam satu variabel.

Dalam array record, setiap elemen array terdiri dari beberapa variabel dengan tipe data yang berbeda. Setiap elemen pada array record disimpan sebagai struktur dengan variabel-variabelnya. Kita dapat mengakses variabel pada setiap elemen menggunakan operator titik (dot) dan nama variabelnya.

Contohnya, jika kita ingin membuat array record mahasiswa yang memiliki tiga variabel yaitu `nama`, `umur`, dan `jurusan`, kita dapat mendefinisikan struktur data seperti berikut:
```
struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};
```
Setelah itu, kita dapat membuat array record mahasiswa seperti ini:
```
const int length = 100;
typedef Mahasiswa data_mahasiswa[length];
data_mahasiswa daftar_mahasiswa;
```
Dalam contoh di atas, kita mendefinisikan array record dengan nama `data_mahasiswa` yang memiliki ukuran maksimal sebanyak 100 elemen. Kemudian kita membuat variabel `daftar_mahasiswa` dengan tipe data `data_mahasiswa`, yang berarti variabel ini merupakan array record dengan tiga variabel yaitu `nama`, `umur`, dan `jurusan`.

Kita dapat mengakses setiap elemen pada array record `daftar_mahasiswa` menggunakan operator kurung siku `[]`, dan mengakses variabel pada setiap elemen menggunakan operator titik (dot) seperti ini:
```
daftar_mahasiswa[0].nama = "Dimas";
daftar_mahasiswa[0].umur = 20;
daftar_mahasiswa[0].jurusan = "Informatika";
```
Dalam contoh di atas, kita mengakses elemen pertama pada array record `daftar_mahasiswa` dan mengisinya dengan data mahasiswa dengan nama "Dimas", umur 20 tahun, dan jurusan Informatika.