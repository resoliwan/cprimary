#include<iostream>

int main() {
  using namespace std;
  char ch;
  int spaces = 0;
  int total = 0;

  cin.get(ch);
  while(ch != '.') {
    if (ch == ' ') 
      ++spaces;
    ++total;
    cout << ch;
    cin.get(ch);
  }

  cout << endl << "spaces: " << spaces << " character: " << total << endl;

  return 0;
}

