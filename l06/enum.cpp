#include<iostream>

enum {red, orange, yello};

int main() {
  using namespace std;
  cout << "Enter the code (0-3)\n";
  int code;
  cin >> code;
  while (code >= red && code <= yello) {
    switch(code) {
      case red: cout << "red\n"; break;
      case orange: cout << "orange\n"; break;
      case yello: cout << "yello\n"; break;
    }
    cout << "Enter the code (0-3)\n";
    cin >> code;
  }
  cout << "Bye\n";
  return 0;
}

