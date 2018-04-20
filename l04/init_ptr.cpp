#include<iostream>

int main() {
  using namespace std;

  int val = 5;
  int* p_val = &val;

  cout << "address of val: " << &val << endl;
  cout << "address of p_val: " << p_val << endl;
  cout << "ref value for p_val: " << *p_val << endl;

  return 0;
}
