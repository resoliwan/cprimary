#include <iostream>
using namespace std;

int cubesr(const int &a);
int cubesv(int a);

int main() {
  int a = 2;
  cout << "cubesr: " << cubesr(a) << endl;
  cout << "cubesv: " << cubesv(a) << endl;

  return 0;
}

int cubesr(const int &a) {
  return a * a * a;
}

int cubesv(int a) {
  return a * a * a;
}

