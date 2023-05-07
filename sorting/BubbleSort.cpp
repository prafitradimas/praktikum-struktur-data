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