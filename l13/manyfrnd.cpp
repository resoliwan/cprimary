#include <iostream>
using namespace std;

template <typename T>
class ManyFriend
{
public:
  ManyFriend (const T & i): item(i) {};
  template <typename C, typename D> friend void show(C &, D &);
private:
  T item;
};

template <typename C, typename D>
void show(C & c, D & d)
{
  cout << "C: " << c.item << endl;
  cout << "D: " << d.item << endl;
}

int main(void)
{
  ManyFriend<int> hfi1(1);
  ManyFriend<int> hfi2(2);
  cout << "int, int: ";
  show(hfi1, hfi2);

  ManyFriend<double> hfd1(10.1);
  cout << "int, double: ";
  show(hfi1, hfd1);
  return 0;
}
