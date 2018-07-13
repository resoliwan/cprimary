#include <iostream>
using namespace std;

struct job {
  char name[40];
  double salary;
  int floor;
};

template <typename T>
void Swap(T &a, T &b);

template <> void Swap<job>(job &a, job &b);

void Show(job &a);

int main() {
  int a = 1;
  int b = 2;

  cout << "Before swap => a: " << a << " b: " << b << endl;
  Swap(a, b);
  cout << "After swap => a: " << a << " b: " << b << endl;

  job aa = {"aa", 1, 1};
  job bb = {"bb", 2, 2};

  cout << "Before swap => aa: ";
  Show(aa);
  Swap(aa, bb);
  cout << "After swap => aa: ";
  Show(aa);

  return 0;
}

template <typename T>
void Swap(T &a, T &b) {
  T temp = a;
  a = b;
  b = temp;
}

template <> void Swap<job>(job &a, job &b) {
  job temp;
  temp.salary = a.salary;
  temp.floor = a.floor;

  a.salary = b.salary;
  a.floor = b.floor;

  b.salary = temp.salary;
  b.floor = temp.floor;

}

void Show(job &a) {
  cout << " name: " << a.name;
  cout << " salary: " << a.salary;
  cout << " floor: " << a.floor << endl;
}
