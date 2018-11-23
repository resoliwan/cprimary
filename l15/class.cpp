#include <iostream>
class InnerClass {
public:
    int getVal() { return val; }
private:
    int val = 11;
};

class Cls {
public:
  int a;
  InnerClass ic;
  int hello() { return a; }
};


int main(void)
{
    using namespace std;
  Cls cl1;
  cl1.a = 1000;
  cl1.hello();
  cout << cl1.ic.getVal() << endl;;

  Cls cl2;
  cl2.a = 2;

  cl2.hello();
  cl1.hello();
  cl2.hello();
  return 0;
}


