#include<iostream>

int main () {
  using namespace std;
  int * p_int = new int;
  *p_int = 2;

  double * p_double = new double;
  *p_double = 3.0;

  cout << "*p_int: " << *p_int << endl;
  cout << "*p_double: " << *p_double << endl;

  cout << "size of p_int: " << sizeof(p_int);
  cout << ", size of *p_int: " << sizeof(*p_int) << endl;
  cout << "size of p_double: " << sizeof(p_double);
  cout << ", size of *p_double: " << sizeof(*p_double) << endl;

  return 0;
}
