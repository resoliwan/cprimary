#include<iostream>

int main() {
  // Test
  using namespace std;
  int val = 6;
  int * p_val;

  p_val = &val;

  cout << "Value: val: " << val << ", *p_val: " << *p_val << endl;
  cout << "Address: &val: " << &val << ", p_val" << p_val << endl;

  *p_val = *p_val + 1;
  cout << "After update Value: val: " << val << ", *p_val: " << *p_val << endl;
  // Part of main

  return 0;
}
