#include<iostream>

void pp(int n);

int main() {
  using namespace std;
  double n = 1.111;
  pp(n);

  return 0;
}

void pp(int n) {
  std::cout << n << std::endl;
}
