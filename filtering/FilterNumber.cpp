#include <iostream>
using namespace std;

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

int main() {
    int arr_length = 10;
    int datasetInt[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    for(int i = 0; i < arr_length; i++) {
        if(isEven(datasetInt[i]))
            printf("Angka %d adalah Genap.\n", datasetInt[i]);
        if(isOdd(datasetInt[i]))
            printf("Angka %d adalah Ganjil.\n", datasetInt[i]);
    }

    return 0;
}