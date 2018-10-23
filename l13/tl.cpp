#include <iostream>

template <typename T>
  using arrtype = std::array<T, 12>;

int main(void)
{
  // arrtype<int> in;
  // arrtype<double> do;
  // arrtype<std::string> st;
  //
  typedef const char * pc1;
  using pc2 = const char *;

  return 0;
}


