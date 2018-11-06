#include <iostream>
using namespace std;

bool hmean(int, int, double *);

int main(void)
{
  int x, y;
  cout << "Enter two number: ";
  while (cin >> x >> y) {
    double mean;
    hmean(x, y, &mean);
    cout << "hmean is " << mean << endl;
    cout << "Enter next number: ";
  }
  
  return 0;
}

bool hmean(int a, int b, double * mean)
{
  if ( a == -b)
  {
    std::cout << "Untenable arguments to hmean()";
    return false;
  }
  *mean =  2 * a * b / (a + b);

  return true;
}
