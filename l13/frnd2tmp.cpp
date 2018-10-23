#include <iostream>
using namespace std;

template <typename T>
class HasFriend
{
public:
  HasFriend (const T & i): item(i) { ct++; };
  ~HasFriend () { ct--; };
  friend void count();
  friend void reports(HasFriend<T> &); //template parameter.
private:
  T item;
  static int ct;
};

template <typename T>
int HasFriend<T>::ct = 0;

void count() 
{
  cout << "int count: " << HasFriend<int>::ct << ";" << endl;
  cout << "double count: " << HasFriend<double>::ct << ";" << endl;
};

void reports(HasFriend<int> & hf) 
{
  cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> & hf) 
{
  cout << "HasFriend<double>: " << hf.item << endl;
}

int main(void)
{
  cout << "No objects declared: \n";
  count();

  HasFriend<int> hfi1(1);
  cout << "After hfi1 delclared: \n";
  count();

  HasFriend<int> hfi2(2);
  cout << "After hfi2 delclared: \n";
  count();

  HasFriend<double> hfd1(1.1);
  cout << "After hfd1 delclared: \n";
  count();

  reports(hfi1);
  reports(hfi2);
  reports(hfd1);

  return 0;
}
