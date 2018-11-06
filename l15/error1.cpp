#include <iostream>
using namespace std;

double hmean(int, int);

int main(void)
{
  int x, y;
  cout << "Enter two number: ";
  while (cin >> x >> y) {
    double mean = hmean(x, y);
    cout << "hmean is " << mean << endl;
  }
  
  return 0;
}

double hmean(int a, int b)
{
  if ( a == -b)
  {
    std::cout << "Untenable arguments to hmean()";
    std::abort();
  }

  return 2 * a * b / (a + b);
}
