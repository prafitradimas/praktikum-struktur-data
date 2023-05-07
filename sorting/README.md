# Sorting / Pengurutan
Sorting adalah proses pengurutan elemen-elemen pada sebuah kumpulan data menjadi suatu urutan tertentu, seperti dari yang terkecil ke yang terbesar atau sebaliknya. Sorting merupakan operasi yang sangat penting dalam pemrograman dan sering digunakan dalam banyak aplikasi, seperti pemrosesan data, basis data, dan pengembangan algoritma.

Terdapat banyak algoritma sorting yang berbeda, dan masing-masing memiliki kelebihan dan kekurangan. Beberapa algoritma sorting yang populer adalah:

## 1. Bubble Sort
Bubble Sort adalah algoritma sorting yang sederhana dan mudah dipahami. Prinsip kerjanya adalah dengan membandingkan dua elemen bersebelahan pada kumpulan data dan melakukan penukaran jika elemen yang di sebelah kanan lebih kecil daripada elemen yang di sebelah kiri. Algoritma ini terus mengulang proses penukaran ini hingga seluruh kumpulan data terurut dengan benar.

Contoh Implementasi Bubble Sort:
```
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```

## 2. Merge Sort
Merge Sort adalah algoritma sorting yang efisien dan stabil, yang bekerja dengan membagi kumpulan data menjadi dua bagian hingga setiap bagian hanya memiliki satu elemen. Setelah itu, algoritma ini secara rekursif menggabungkan dua bagian tersebut dengan mengurutkan elemen-elemennya dan memperoleh kumpulan data yang terurut.

Contoh implementasi Merge Sort:
```
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
```

## 3. Quick Sort
Quick Sort adalah algoritma sorting yang efisien dan banyak digunakan. Algoritma ini bekerja dengan memilih suatu elemen pada kumpulan data, yang disebut pivot, dan mempartisi kumpulan data menjadi dua bagian berdasarkan nilai pivot. Setelah itu, algoritma ini secara rekursif melakukan sorting pada kedua bagian yang terpisah tersebut.

Contoh Implementasi Quick Sort:
```
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high- 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```