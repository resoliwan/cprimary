#include <iostream>
// #include <cstring>

using namespace std;

const int ArSize = 10;
void strcount(char ar[]);

int main() {
  char input[ArSize];
  char next;

  cout << "Enter a line:" << endl;
  cin.get(input, ArSize);
  while(cin) {
    cin.get(next);
    while(next != '\n')
      cin.get(next);

    strcount(input);
    cout << "Enter a line:" << endl;
    cin.get(input, ArSize);
  }

  return 0;
}

void strcount(char * str) {
  static int total = 0;
  int count = 0;
  cout << str << " contins ";
  while (*str++) 
    count++;

  total += count;
  cout << count << " characters\n";
  cout << total << " characters total" << endl;
}
