#include <iostream>
#include "mytime3.h"

int main()
{
  using std::cout;
  Time planning;
  Time coding(2, 40);
  Time fixing = Time(5, 55);
  Time total;

  cout << "planning time = " << planning;
  cout << "coding time = " << coding;
  cout << "fixing time = " << fixing;

  total = coding + fixing;
  total = coding.operator+(fixing);
  cout << "coding + fixing = " << total;

  total = coding - fixing;
  cout << "coding - fixing = " << total;

  total = coding * 2;
  total = 2 * coding;
  cout << "coing * 2 = " << total << "@@\n";

  return 0;
}
