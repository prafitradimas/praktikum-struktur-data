# Filtering / Penyaringan
Filtering adalah suatu proses untuk memilih data atau informasi yang relevan atau signifikan dari sejumlah besar data yang tidak relevan atau tidak signifikan. Filter dapat diterapkan pada berbagai jenis data, termasuk data numerik, data string, gambar, dan lain sebagainya. Pada umumnya, filtering dilakukan dengan menggunakan suatu kriteria atau aturan tertentu untuk memilih data yang diinginkan dan mengabaikan data yang tidak diinginkan.

Contoh:
1. Penyaringan kata Palindrome
Palindrome adalah rangkaian kata atau bilangan yang terbaca sama, baik dari depan maupun dari belakang.
```
bool isPalindrome(string word) {
    int n = word.size();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            return false;
        }
    }
    return true;
}
```

2. Penyaringan bilangan Ganjil dan Genap
Penyaringan ini dilakukan untuk mencari bilangan yang habis dibagi 2. Bilangan yang habis dibagi 2 adalah bilangan Genap, jika tidak maka bilangan tersebut adalah bilangan Ganjil.
```
bool isEven(int number) {
    if(number % 2 == 0) 
        return true;
    else
        return false;
}

bool isOdd(int number) {
    if(number % 2 != 0) 
        return true;
    else
        return false;
}
```