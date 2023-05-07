#include <iostream>
using namespace std;

void linearSearchInt(int arr[], int n, int data) {
  for(int i = 0; i < n; i++) 
      if(arr[i] == data) {
        cout << "Data [" << data << "] ditemukan pada index: " << i << endl;
        return;
      }
  
  cout << "Data [" << data << "] tidak ditemukan." << endl;
}

void linearSearchFloat(float arr[], int n, float data) {
  for(int i = 0; i < n; i++) 
      if(arr[i] == data) {
        cout << "Data [" << data << "] ditemukan pada index: " << i << endl;
        return;
      }
  
  cout << "Data [" << data << "] tidak ditemukan." << endl;
}

void linearSearchString(string arr[], int n, string data) {
  for(int i = 0; i < n; i++) 
      if(arr[i] == data) {
        cout << "Data [\"" << data << "\"] ditemukan pada index: " << i << endl;
        return;
      }
  
  cout << "Data [\"" << data << "\"] tidak ditemukan." << endl;
}

int main() {
  int arr_length = 10;
  int datasetInt[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
  float datasetFloat[] = {3.14, 2.71, 1.41, 1.62, 2.72, 1.44, 1.73, 3.33, 2.22, 1.11};
  string datasetString[] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", "kiwi", "lemon"};

  linearSearchInt(datasetInt, arr_length, 9);
  linearSearchInt(datasetInt, arr_length, 10);
  cout << endl;
  linearSearchFloat(datasetFloat, arr_length, 3.14);
  linearSearchFloat(datasetFloat, arr_length, 9.99);
  cout << endl;
  linearSearchString(datasetString, arr_length, "kiwi");
  linearSearchString(datasetString, arr_length, "durian");

  return 0;
}