#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class beta  
{
public:
  beta (T t, int i): q(t), n(i) {}
  template <typename U>
  U blab(U u, T t) { return (n.value() + q.value()) * u / t;}
  void show() const { q.show(); n.show(); }
private:
  template <typename V>
  class hold 
  {
  private:
      V val;
  public:
      hold(V v = 0): val(v) {}
      void show() const { cout << val << endl; }
      V value() const { return val; }
  };
  hold<T> q;
  hold<int> n;
};

int main()
{
  beta<double> guy(3.5, 3);
  cout << "T was set to double!\n";

  guy.show();
  cout << "V was set to T, which is double, the V was set to int\n";

  cout << guy.blab(10, 2.3) << endl;
  cout << "U was set to int\n";
  
  cout << guy.blab(10.0, 2.3) << endl;
  cout << "U was set to double\n";

  cout << "Done\n";
  
  return 0;
}
