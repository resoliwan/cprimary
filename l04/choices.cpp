#include<iostream>
#include<array>
#include<vector>

int main() {
  using namespace std;
  double a1[4] = {11,12,13,14};
  cout << "a1[0]: "<< a1[0] << " &a1: "<< &a1 << endl;

  vector<double> a2(4);
  a2[0] = 21;
  cout << "a2[0]: "<< a2[0] << " &a2: "<< &a2 << endl;

  // vector<double> a3(4) = {31,32,33,34};
  // syntax error

  array<double, 4> a4 = {41,42,44,44};
  cout << "a4[0]: "<< a4[0] << " &a4: "<< &a4 << endl;

  array<double, 5> a5;
  a5[0] = 51;
  cout << "a5[0]: "<< a5[0] << " &a5: "<< &a5 << endl;


  return 0;
}
