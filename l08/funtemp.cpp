#include <iostream>

using namespace std;
template <typename T>
void Swap(T & a, T & b);

int main() {
  int i = 1;
  int j = 2;
  cout << "i, j = " << i << ", " << j << endl;
  cout << "Using compiler-generate int swapper: " << endl;
  Swap(i, j);

  double a = 1;
  double b = 2;
  cout << "Now a, b = " << a << ", " << b << endl;
  cout << "Using compiler-generate double swapper: " << endl;
  Swap(a, b);
  cout << "Now a, b = " << a << ", " << b << endl;
  return 0;
}

template <typename T>
void Swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}
