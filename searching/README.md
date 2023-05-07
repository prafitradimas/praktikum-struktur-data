# Searching / Pencarian
Searching adalah proses untuk mencari nilai tertentu dalam sebuah kumpulan data atau struktur data. Tujuan dari searching adalah untuk menentukan apakah suatu nilai tertentu ada di dalam kumpulan data dan menentukan posisi dari nilai tersebut jika ada. Ada beberapa teknik searching yang dapat digunakan, seperti linear search, binary search, interpolation search, dan sebagainya.

## 1. Linear Search
Linear Search adalah teknik searching sederhana yang mengunjungi setiap elemen dalam kumpulan data sampai menemukan nilai yang dicari.

Contoh Implementasi Linear Search:
```
void linearSearch(int arr[], int n, int data) {
  for(int i=0; i < n; i++)
    if(arr[i] == data) {
      cout << "Data ditemukan." << endl;
    }

  cout << "Data tidak ditemukan." << endl;
}
```

## 2. Binary Search
Binary Search adalah teknik searching yang digunakan pada kumpulan data terurut. Binary Search membagi kumpulan data menjadi dua bagian dan mencari nilai yang dicari di salah satu bagian.

Contoh Implementasi Binary Search:
```
int binarySearch(int arr[], int indexAwal, int indexAkhir, int data) {
    if(indexAwal < indexAkhir) {
        int mid = indexAwal + (indexAkhir - indexAwal) / 2;

        if(arr[mid] == data) return mid;
        
        if(data < arr[mid]) return binarySearch(arr, indexAwal, mid - 1, data);

        return binarySearch(arr, mid + 1, indexAkhir, data);
    }

    return -1;
}
```