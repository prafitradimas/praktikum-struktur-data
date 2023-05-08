#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int n = word.size();
    for (int i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
  int arr_length = 10;
  string data[] = {"katak", "ada", "malam", "level", "racecar", "hello", "world", "deified", "openai", "programming"};

  for(int i=0; i < arr_length; i++) {
    if(isPalindrome(data[i])) 
        cout << "Kata [\"" << data[i] << "\"] adalah palindrom." << endl;
    else
        cout << "Kata [\"" << data[i] << "\"] bukan palindrom." << endl;;
  }

  return 0;
}