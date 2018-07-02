#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int * pa = &a;
  int * pb = pa;
  int* *ppc = &pa;

  cout << a    << "  a: " << &a  << endl;
  cout << pa   << "  a: " << &pa << endl;
  cout << pb   << "  a: " << &pb << endl;
  cout << ppc  << "  a: " << &ppc << endl;
  cout << **ppc << endl;

  return 0;
}

