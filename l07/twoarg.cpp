#include<iostream>

void n_char(char ch, int times);

int main() {
  using namespace std;
  char ch;
  int times;
  cout << "Enter a character: ";
  cin >> ch;

  while (ch != 'q') {
    cout << "Enter an integer: ";
    cin >> times;
    n_char(ch, times);

    cout << "Enter another character or press q-key to quit: ";
    cin >> ch;
  }

  return 0;
}

void n_char(char ch, int times) {
  while (times-- > 0)
    std::cout << ch;

  std::cout << std::endl;
}
