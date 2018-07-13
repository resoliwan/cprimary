#include <iostream>
using namespace std;

unsigned long left(unsigned long n, int ct);
char * left(const char str[], int ct);

int main() {
  unsigned int n = 12345678;
  char * str = "Hawaii!!";

  for (int i = 1; i < 10; i++) {
    cout << left(n, i) << endl;
    cout << left(str, i) << endl;
  }

  return 0;
}

char * left(const char str[], int n) {
  char * p = new char[n + 1];
  if (n < 0)
    n = 0;

  int i;
  for (i = 0; i < n && str[i]; i++) {
    p[i] = str[i];
  }

  p[i] = '\0';
  return p;
}

unsigned long left(unsigned long n, int ct) {
  int temp = n;
  int digits = 1;

  if (n == 0 || ct == 0) 
    return 0;

  while (temp /= 10)
    ++digits;

  if (digits > ct) {
    ct = digits - ct;
    while(ct--)
      n /= 10;
  }
  return n;
}

