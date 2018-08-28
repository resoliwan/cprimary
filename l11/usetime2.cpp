#include <iostream>
#include "mytime2.h"

int main()
{
  using std::cout;
  Time planning;
  Time coding(2, 40);
  Time fixing = Time(5, 55);
  Time total;

  cout << "planning time = ";
  planning.Show();

  cout << "coding time = ";
  coding.Show();

  cout << "fixing time = ";
  fixing.Show();

  total = coding + fixing;
  total = coding.operator+(fixing);
  cout << "coding + fixing = ";
  total.Show();

  total = coding - fixing;
  cout << "coding - fixing = ";
  total.Show();

  total = coding * 2;
  // total = coding.operator*(2);
  cout << "coing * 2 = ";
  total.Show();


  return 0;
}
