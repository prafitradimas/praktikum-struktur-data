#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(datasetInt, 0, arr_length);

    cout << "Sesudah Sorting: ";
    for (int i = 0; i < arr_length; i++) {
        cout << datasetInt[i] << " ";
    }
    cout << endl;

  return 0;
}