#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

template <typename T>
void Swap(T a[], T b[], int c);

void show(int a[]);

const int size = 8;

int main() {
  int i = 1;
  int j = 2;
  cout << i << " " << j << endl;
  Swap(i, j);
  cout << i << " " << j << endl;
  
  int a[size] = {0, 7, 0, 4, 1, 7, 7, 6};
  int b[size] = {0, 7, 2, 0, 1, 9, 6, 9};
  show(a);
  Swap(a, b, size);
  show(a);

  return 0;
}

template <typename T>
void Swap(T &a, T&b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n) {
  T temp;
  for (int i = 0; i < n; i++) {
    T temp = a[i];
    a[i] = b[i];
    b[i] = a[i];
  }
}

void show(int a[]) {
  cout << a[0] << a[1] << "/";
  cout << a[2] << a[3] << "/";
  for (int i = 4; i < size; i++){
    cout << a[i];
  }
  cout << endl;
}
