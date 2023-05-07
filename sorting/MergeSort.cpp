#include <iostream>
using namespace std;

void merge(int arr[], int leftIndex, int midIndex, int rightIndex) {
    int i, j, k;
    int leftSize = midIndex - leftIndex + 1;
    int rightSize = rightIndex - midIndex;

    int leftArr[leftSize], rightArr[rightSize];

    for (i = 0; i < leftSize; i++) {
        leftArr[i] = arr[leftIndex + i];
    }
    for (j = 0; j < rightSize; j++) {
        rightArr[j] = arr[midIndex + 1+ j];
    }

    i = 0;
    j = 0;
    k = leftIndex;
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < leftSize) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int leftIndex, int rightIndex) {
    if (leftIndex < rightIndex) {
        int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
        mergeSort(arr, leftIndex, midIndex);
        mergeSort(arr, midIndex + 1, rightIndex);
        merge(arr, leftIndex, midIndex, rightIndex);
    }
}

int main() {
    int arr_length = 10;
    int datasetInt[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    cout << "Sebelum Sorting: ";
    for (int i = 0; i < arr_length; i++) {
        cout << datasetInt[i] << " ";
    }
    cout << endl;

    mergeSort(datasetInt, 0, arr_length);

    cout << "Sesudah Sorting: ";
    for (int i = 0; i < arr_length; i++) {
        cout << datasetInt[i] << " ";
    }
    cout << endl;

    return 0;
}
