#include <iostream>
using namespace std;

void swapr(int &a, int &b);
void swapp(int* p, int* q);
void swapv(int a, int b);

int main() {
  int a = 0;
  int b = 1;

  cout << "before a: " << a << " b: " << b << endl;
  swapr(a, b);
  cout << "after swapr a: " << a << " b: " << b << endl;

  a = 0;
  b = 1;
  cout << "before a: " << a << " b: " << b << endl;
  swapp(&a, &b);
  cout << "after swapp a: " << a << " b: " << b << endl;

  a = 0;
  b = 1;
  cout << "before a: " << a << " b: " << b << endl;
  swapv(a, b);
  cout << "after swapv a: " << a << " b: " << b << endl;


  return 0;
}

void swapr(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapp(int* p, int *q) {
  int temp = *p;
  *p = *q;
  *q = temp;
}

void swapv(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

