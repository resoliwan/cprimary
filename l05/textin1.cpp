#include<iostream>

int main() {
  using namespace std;
  int count = 0;
  char ch;
  cout << "Enter characters; enter # to quit:\n";
  cin >> ch;
  while (ch != '#') {
    cout << ch;
    ++count;
    cin >> ch;
  }

  cout << "Number of characters is :" << count << endl;
  return 0;
}

