#include <iostream>

class bad_hmean
{
public:
  bad_hmean (double a = 0, double b = 0): v1(a), v2(b) {};
  void mesg();
private:
  double v1;
  double v2;
};

inline void bad_hmean::mesg()
{
  std::cout << "hmean(" << v1 << ", " << v2 << "): invalid arguments: a = -b\n";
}

class bad_gmean
{
public:
  bad_gmean (double a = 0, double b = 0): v1(a), v2(b) {};
  void mesg();
private:
  double v1;
  double v2;
};

inline void bad_gmean::mesg()
{
  std::cout << "gmean(" << v1 << ", " << v2 << "): invalid arguments: a < 0 || b < 0\n";
}

