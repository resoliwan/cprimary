#include <iostream>
#include <cstdlib>
#include <ctime>

#ifndef RTTI2_H
#define RTTI2_H
using namespace std;
class Grand
{
private:
  int hold;
public:
  Grand(int h = 0): hold(h) {}
  virtual void Speak() const { cout << " Grand Speak";}
  virtual int Value() const { return hold; }
};

class Superb: public Grand
{
private:
public:
  Superb(int h = 0): Grand(h) {}
  void Speak() const { cout << " Superb Speak";  }
  virtual void Say() { cout << " I am Superb"; }
};

class Magnificent : public Superb
{
private:
  char ch;
public:
  Magnificent(int h = 0, char c = 'A'): Superb(h), ch(c) {}
  void Speak() const { cout << " Magnificent Speak"; }
  virtual void Say() { cout << " I have a charcter: "; }
};

Grand * GetOne();

#endif /* RTTI2_H */

int main(void)
{
  std::srand(std::time(0));
  Grand * pg;
  Superb * ps;
  for (int i = 0; i < 5; ++i) {
    pg = GetOne();
    pg->Speak();
    if ((ps = dynamic_cast<Superb *>(pg)))
      ps->Say();
    if (typeid(Magnificent) == typeid(*pg))
        cout << "Yes, you're really magnificent!";
    cout << " Typename: " << typeid(*pg).name();
    cout << endl;
  }
  
  return 0;
}

Grand * GetOne()
{
  Grand * p;
  switch (std::rand() % 3) {
    case 0: p = new Grand(std::rand() % 1000);
      break;
    case 1: p = new Superb(std::rand() % 1000);
      break;
    case 2: p = new Magnificent(std::rand() % 1000);
      break;
  }

  return p;
}
