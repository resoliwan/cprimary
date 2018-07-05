#include <iostream>
using namespace std;

inline int square(int n) { return n * n; };

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  cout << "a: " << a << " square: " << square(a) << endl;
  cout << "b: " << b << " square: " << square(b) << endl;
  cout << "c: " << c << " square: " << square(c) << endl;

  return 0;
}

