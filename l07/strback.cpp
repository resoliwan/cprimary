#include<iostream>

char * buildstr(char ch, int n);

int main() {
  using namespace std;
  char ch;
  int times;
  cout << "Enter a character: ";
  cin >> ch;
  cout << "Enter a interger: ";
  cin >> times;
  char * ps = buildstr(ch, times);
  cout << ps << endl;
  delete [] ps;
  ps = buildstr('+', 20);
  cout << ps << "-DONE" << ps << endl;
  delete [] ps;

  return 0;
}

char * buildstr(char ch, int n) {
  char * ps = new char[n + 1];
  ps[n] = '\0';
  while (n-- > 0) 
    ps[n] = ch;

  return ps;
}
