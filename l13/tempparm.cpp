#include <iostream>
#include "stackp1.h"

template <template <typename T> class Thing, typename U, typename V>
class Crab
{
private:
  Thing<U> s1;
  Thing<V> s2;
public:
  Crab() {};
  bool push(U a, V x) { return s1.push(a) && s2.push(x); }
  bool pop(U & a, V & x) { return s1.pop(a) && s2.pop(x); }
};

int main(void)
{
  using namespace std;

  Crab<Stack, int, double> st;

  st.push(1, 2.2);
  int i;
  double d;
  st.pop(i, d);
  cout << "i: " << i << " d: " << d << endl;
  
  return 0;
}
