#include <iostream>
#include "mytime1.h"

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

  return 0;
}
