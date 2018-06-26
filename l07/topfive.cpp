#include <iostream>
#include <string>

using namespace std;
const int SIZE = 5;

void show_list(const string list[], const int size);

int main() {
  string list[SIZE];
  cout << "Enter your " << SIZE << " favorite strings:" << endl;
  for (int i = 0; i < SIZE; i++) {
    cout << i + 1 << ": ";
    getline(cin, list[i]);
  }
  cout << "Your list:" << endl;
  show_list(list, SIZE);

  return 0;
}

void show_list(const string list[], const int size) {
  for (int i = 0; i < size; i++)
    cout << i + 1 << ": " << list[i] << endl;
}
