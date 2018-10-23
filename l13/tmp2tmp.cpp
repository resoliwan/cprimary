#include <iostream>
using namespace std;

template <typename T> void counts();
template <typename T> void reports(T &);

template <typename TT>
class HasFriendT
{
public:
  HasFriendT (const TT & it): item(it) { ct++; };
  ~HasFriendT () { ct--; };
  friend void counts<TT>();
  // friend void reports<HasFriendT<TT> >(HasFriendT<TT> & hf);
  friend void reports<>(HasFriendT<TT> & hf);
private:
  TT item;
  static int ct;
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts() 
{
  cout << "Has FriendT size:" << sizeof(HasFriendT<T>) << endl;
  cout << "Has FriendT count:" << HasFriendT<T>::ct << endl;
}

template <typename T>
void reports(T & hf)
{
  cout << hf.item << endl;
}

int main(void)
{
  counts<int>();
  HasFriendT<int> hfi1(1);
  HasFriendT<int> hfi2(2);
  HasFriendT<double> hfd1(10.5);
  reports(hfi1);
  reports<HasFriendT<int> >(hfi2);
  reports(hfd1);
  counts<int>();
  counts<double>();

  return 0;
}
