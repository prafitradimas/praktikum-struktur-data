# Materi Linked List

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
## Pengertian Linked List
**Linked List** adalah salah satu struktur data yang digunakan untuk menyimpan kumpulan data terurut dalam bentuk **node** yang saling terhubung melalui **pointer**. Setiap **node** pada linked list menyimpan data dan **pointer** yang menunjuk pada node berikutnya atau sebelumnya pada linked list.

Salah satu kelebihan dari linked list adalah kemampuannya untuk mempercepat operasi penghapusan atau penambahan node pada linked list dibandingkan dengan array. Hal ini dikarenakan pada linked list, kita hanya perlu mengubah pointer pada node sebelum dan setelah node yang ingin dihapus atau ditambahkan, sementara pada array kita perlu menggeser seluruh elemen setelah node yang dihapus atau sebelum node yang ingin ditambahkan.

### Ilustrasi Linked List
```
HEAD -> [Data1|Next] -> [Data2|Next] -> [Data3|Next] -> ... -> [DataN|Next] -> NULL
```

Simbol `->` menunjukkan arah dari pointer `Next` pada setiap node pada linked list. Simbol `HEAD` menunjukkan awal dari linked list, dan simbol `NULL` menunjukkan akhir dari linked list. Setiap node pada linked list memiliki dua bagian: Data yang berisi informasi yang disimpan pada node, dan `Next` yang merupakan pointer yang menunjuk pada node berikutnya pada linked list.

---

## *Pointer*(*) dan *Reference*(&)
**Reference** dan **Pointer** adalah konsep penting dalam linked-list.
- *Reference* adalah nama variabel yang merujuk pada suatu lokasi memori di mana suatu nilai disimpan.
- *Pointer* adalah variabel yang menyimpan alamat memori dari suatu nilai.

Perhatikan 2 contoh program dibawah ini:
```
// 1. tanpa reference
int a = 10;
int b = a;
b = 20;

// 2. dengan reference
int c = 10;
int* d = &c;
*d = 20;
```
Pada contoh pertama, terdapat dua variabel yaitu `a` dan `b`. Variabel `b` diisi dengan nilai variabel `a`, lalu diubah nilainya menjadi 20. Namun, nilai variabel `a` tetap sama yaitu 10, karena `b` hanya berisi salinan nilai dari `a`.

Pada contoh kedua, terdapat dua variabel yaitu `c` dan `d`. Variabel `d` diisi dengan alamat memori dari variabel `c`. Lalu, dengan melakukan *dereference* pada variabel `d`, nilai dari variabel `c` diubah menjadi 20. Karena variabel `d` merupakan *reference* dari variabel `c`, maka nilai variabel `c` akan berubah menjadi 20 dan `d` akan menunjuk ke alamat memori variabel `c`.

---