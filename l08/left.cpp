#include <iostream>

using namespace std;
const int Size = 100;

char * left(char * str, int n = 1);

int main() {
  char str[Size];
  cout << "Enter a string:\n";
  cin.get(str, Size);
  char * ps = left(str, 3);
  cout << ps << endl;
  delete [] ps;

  ps = left(str, 1);
  cout << ps << endl;
  delete [] ps;

  return 0;
}

char * left(char  str[], int n){
  if (n < 0)
    n = 0;

  char * ps = new char[n + 1];
  int i;
  for (i = 0; i < n && str[i]; i++)
    ps[i] = str[i];

  ps[i] = '\0';

  return ps;
}
