#ifndef ARRAYTP_H_
#define ARRAYTP_H_

#include <iostream>
#include <cstdlib>

template <typename T, int n>
class ArrayTP
{
public:
  ArrayTP() {};
  explicit ArrayTP(const T & v);
  //How user can distiguish two method?
  virtual T & operator[](int i);
  virtual T operator[](int i) const;
private:
  T ar[n];
};

template<typename T, int n>
ArrayTP<T, n>::ArrayTP(const T & v)
{
  for (int i = 0; i < n; ++i) {
    ar[i] = v;
  }
}

template<typename T, int n>
T & ArrayTP<T, n>::operator[](int i)
{
  if (i < 0 || i > n)
    std::cout << "Error in array limits";
  return ar[i];
}

template<typename T, int n>
T ArrayTP<T, n>::operator[](int i) const
{
  if (i < 0 || i > n)
    std::cout << "Error in array limits";
  return ar[i];
}
#endif 
