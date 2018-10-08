#include <iostream>

using namespace std;

class Base0
{
  private:
    int id;
  public:
    Base0(int i){ id = i; };
    virtual ~Base0() { cout << "Base0 destoryed\n"; };
    virtual void Print(){
      cout << "Base0\n";
    };
};

class Derived0: public Base0 
{
  public:
    Derived0(int i): Base0(i) {};
    virtual ~Derived0() { cout << "Derived0 destoryed\n"; };
    virtual void Print() { 
      cout << "Derived!\n"; 
    };
};

int main() {
  // Base0 b0(1);
  Derived0 d0(1);

  // Base0 * b0p = &b0;
  Base0 * d0p = &d0;

  // b0p->Print();
  d0p->Print();

  return 0;
}
