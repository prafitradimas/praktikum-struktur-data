#include <iostream>
using namespace std;

void bubbleSortInt(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    /**
    * =============> ILUSTRASI PROSES SORTING <=============
    * [3, 1, 4, 1, 5, 9, 2, 6, 5, 3] -> [1, 3, 4, 1, 5, 9, 2, 6, 5, 3] (1 dan 3 ditukar)
    * [1, 3, 4, 1, 5, 9, 2, 6, 5, 3] -> [1, 3, 1, 4, 5, 9, 2, 6, 5, 3] (4 dan 1 ditukar)
    * [1, 3, 1, 4, 5, 9, 2, 6, 5, 3] -> [1, 3, 1, 4, 5, 2, 9, 6, 5, 3] (9 dan 2 ditukar)
    * [1, 3, 1, 4, 5, 2, 9, 6, 5, 3] -> [1, 3, 1, 4, 2, 5, 9, 6, 5, 3] (5 dan 2 ditukar)
    * [1, 3, 1, 4, 2, 5, 9, 6, 5, 3] -> [1, 3, 1, 4, 2, 5, 6, 9, 5, 3] (9 dan 6 ditukar)
    * [1, 3, 1, 4, 2, 5, 6, 9, 5, 3] -> [1, 3, 1, 4, 2, 5, 6, 5, 9, 3] (9 dan 5 ditukar)
    * [1, 3, 1, 4, 2, 5, 6, 5, 9, 3] -> [1, 3, 1, 4, 2, 5, 6, 5, 3, 9] (9 dan 3 ditukar)
    * [1, 3, 1, 4, 2, 5, 6, 5, 3, 9] -> [1, 1, 3, 4, 2, 5, 6, 5, 3, 9] (1 dan 3 ditukar)
    * [1, 1, 3, 4, 2, 5, 6, 5, 3, 9] -> [1, 1, 3, 2, 4, 5, 6, 5, 3, 9] (4 dan 2 ditukar)
    * [1, 1, 3, 2, 4, 5, 6, 5, 3, 9] -> [1, 1, 3, 2, 4, 5, 5, 6, 3, 9] (6 dan 5 ditukar
    **/

    cout << "Sorted data: ";
    for(int i = 0; i < n-1; i++) {
      cout << arr[i] << ", ";
    }
    cout << endl;
}

void bubbleSortFloat(float arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted data: ";
    for(int i = 0; i < n-1; i++) {
      cout << arr[i] << ", ";
    }
    cout << endl;
}

void bubbleSortString(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted data: ";
    for(int i = 0; i < n-1; i++) {
      cout << arr[i] << ", ";
    }
    cout << endl;
}


int main() {
  int arr_length = 10;
  int datasetInt[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  float datasetFloat[] = {3.14, 2.71, 1.41, 1.62, 2.72, 1.44, 1.73, 3.33, 2.22, 1.11};
  string datasetString[] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "lemon"};

  bubbleSortInt(datasetInt, arr_length);
  bubbleSortFloat(datasetFloat, arr_length);
  bubbleSortString(datasetString, arr_length);

  return 0;
}