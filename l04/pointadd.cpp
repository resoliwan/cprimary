#include<iostream>

int main() {
  using namespace std;

  double wages[3] = {1, 2, 3};
  short stacks[3] = {10, 20, 30};

  double * pw = wages;
  short * ps = &stacks[0];

  cout << "pw: " << pw << " &wages: " << &wages << " &wages[0]: " << &wages[0] << endl;
  cout << "*pw: " << *pw << ", pw + 1: " << *(pw + 1) << endl;
  cout << "pw[0] " << pw[0] << endl;

  cout << "*ps: " << *ps << ", ps+1: " << *(ps + 1) << "stacks[0]" << stacks[0] << endl;

  cout << sizeof(wages) << " = sizeof(wages)" << endl;
  cout << sizeof(pw) << " = sizeof(pw)" << endl;

  return 0;
}
