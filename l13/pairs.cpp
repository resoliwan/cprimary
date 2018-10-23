#include <iostream>

template <typename T1, typename T2>
class Pair
{
public:
  Pair () {};
  Pair (const T1 & aval, const T2 & bval): a(aval), b(bval) {};
  T1 & first();
  T2 & second();
  T1 first() const { return a; };
  T2 second() const { return b; };
private:
  T1 a;
  T2 b;
};

template <typename T1, typename T2>
T1 & Pair<T1, T2>::first() 
{
  return a;
}


template <typename T1, typename T2>
T2 & Pair<T1, T2>::second() 
{
  return b;
}

int main()
{
  Pair<std::string, int> rating[2] = {
    Pair<std::string, int>("A", 1),
    Pair<std::string, int>("B", 2)
  };

  for (int i = 0; i < 2; ++i) {
    std::cout << rating[i].first() << ", " << rating[i].second() << std::endl;
  }

  rating[0].first() = "C";
  rating[0].second() = 3;

  std::cout << rating[0].first() << ", " << rating[0].second() << std::endl;

  
  return 0;
}
