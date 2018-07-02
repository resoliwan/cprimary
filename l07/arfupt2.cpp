#include <iostream>
using namespace std;

const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);

int main() {
  double av[3] = {0, 10, 20};
  // double (*ap)[3] = &av

  cout << "Using pointer to functions" << endl;
  const double* (*p1)(const double [], int n) = f1;
  auto p2 = f2;
  cout << "Address\t"  << "Value\t" << endl;
  cout << p1(av, 3) << ": " << *p1(av, 3) << endl;
  cout << (*p2)(av, 3) << ": " << *(*p2)(av, 3) << endl;

  cout << "Using an array of pointers to functions" << endl;
  const double* (*ap1[3])(const double [], int n) = {f1, f2, f3};
  cout << "Address\t"  << "Value\t" << endl;
  cout << ap1[0](av, 3) << ": " << *ap1[0](av, 3) << endl;

  cout << "Using a pointer to a pointer to a function" << endl;
  cout << "Address\t"  << "Value\t" << endl;
  const double* (**pp1)(const double[], int n) = &p1;
  cout << (*pp1)(av, 3) << ": " << *(*pp1)(av, 3) << endl;

  cout << "Using pointers to an array of pointers:" << endl;
  const double* (*(*app)[3])(const double[], int n) = &ap1;
  cout << "Address\t"  << "Value\t" << endl;
  cout << (*app)[0](av, 3) << ": " << *(*app)[0](av, 3) << endl;
  return 0;
}


const double* f1(const double ar[], int n) {
  return ar;
}

const double* f2(const double ar[], int n) {
  return ar + 1;
}

const double* f3(const double* ar, int n) {
  return ar + 2;
}
