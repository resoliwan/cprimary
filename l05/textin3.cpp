#include<iostream>

int main() {
  using namespace std;
  char ch;
  int count = 0;
  cin.get(ch);
  while(cin.fail() == false) {
    cout << ch;
    count++;
    cin.get(ch);
  }

  cout << endl << count << " characters reads\n";

  return 0;
}
