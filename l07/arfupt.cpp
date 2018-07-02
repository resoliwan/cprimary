#include <iostream>
using namespace std;

const double* f1(const double ar[], int n);
const double* f2(const double [], int);
const double* f3(const double*, int);

int main() {
  double av[3] = {0, 10, 20};
  // double (*ap)[3] = &av;

  cout << "Using pointer to functions" << endl;
  const double* (*p1)(const double [], int) = f1;
  auto p2 = f2;
  cout << "Address\t"  << "Value\t" << endl;
  cout << (*p1)(av, 1) << ":\t"     << *(*p1)(av, 1) << endl;
  cout << p2(av, 1)    << ":\t"     << *p2(av, 1) << endl;

  cout << "Using an array of pointers to functions" << endl;
  const double* (*ap1[3])(const double [], int) = {f1, f2, f3};
  cout << "Address\t"  << "Value\t" << endl;
  for (int i = 0; i < 3; i++) {
    cout << ap1[i](av, 1) << ":\t"     << *ap1[i](av, 1) << endl;
  }

  cout << "Using a pointer to a pointer to a function" << endl;
  auto pp1 = &p1;
  const double* (**pp2)(const double [], int n) = &p2;
  cout << "Address\t"  << "Value\t" << endl;
  cout << (*pp1)(av, 1)    << ":\t"     << *(**pp1)(av, 1) << endl;
  cout << (*pp2)(av, 1)    << ":\t"     << *(**pp2)(av, 1) << endl;

  cout << "Using pointers to an array of pointers:" << endl;
  const double* (*(*ppa1)[3])(const double [], int) = &ap1;
  cout << "Address\t"  << "Value\t" << endl;
  cout << ((*ppa1)[0])(av, 1)    << ":\t"     << *(*ppa1)[0](av, 1) << endl;
  cout << ((*ppa1)[1])(av, 1)    << ":\t"     << *(*ppa1)[1](av, 1) << endl;
  cout << ((*ppa1)[2])(av, 1)    << ":\t"     << *(*ppa1)[2](av, 1) << endl;

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
