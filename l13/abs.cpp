#include <iostream>
using namespace std;

class ABSBase {
private:
  int id;
public:
  virtual void setId(int i) = 0;
};

void ABSBase::setId(int i) {
  id = i;
}

class D1: public ABSBase {
private:
  int hi;
public:
  virtual void setId(int i);
};
void D1::setId(int i) {
  ABSBase::setId(i);
}

int main() {
  D1 d1;
  d1.setId(1);
  return 0;
}

