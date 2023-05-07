#include <iostream>
using namespace std;

int binarySearch(int arr[], int indexAwal, int indexAkhir, int data) {
    if(indexAwal < indexAkhir) {
        int mid = indexAwal + (indexAkhir - indexAwal) / 2;

        if(arr[mid] == data) return mid;
        
        if(data < arr[mid]) return binarySearch(arr, indexAwal, mid - 1, data);

        return binarySearch(arr, mid + 1, indexAkhir, data);
    }

    return -1;
}

int main() {
  int arr_length = 10;
  int datasetInt[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

  int data1 = 4;
  int result1 = binarySearch(datasetInt, 0, arr_length - 1, data1);
  if(result1 == -1) 
      cout << "Data [" << data1 << "] tidak ditemukan." << endl;
  else
      cout << "Data [" << data1 << "] ditemukan pada index: " << result1 << endl;

  int data2 = 10;
  int result2 = binarySearch(datasetInt, 0, arr_length - 1, data2);
  if(result2 == -1) 
      cout << "Data [" << data2 << "] tidak ditemukan." << endl;
  else
      cout << "Data [" << data2 << "] ditemukan pada index: " << result2 << endl;

  return 0;
}