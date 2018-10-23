#include <iostream>
#include "arraytp.h"

int main()
{
  ArrayTP<int, 10> sums;
  ArrayTP<double, 10> avegs;  
  ArrayTP< ArrayTP<int, 5>, 10> tooarr;

  for (int i = 0; i < 10; ++i) {
    sums[i] = 0;
    for (int j = 0; j < 5; ++j) {
      tooarr[i][j] = (i + 1) * (j + 1);
      sums[i] += tooarr[i][j];
    }
    avegs[i] = sums[i] / 10;
  }

  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 5; ++j) {
      std::cout.width(2);
      std::cout << tooarr[i][j] << " ";
    }

    std::cout << "sums: ";
    std::cout.width(3);
    std::cout << sums[i] << " avegs: " << avegs[i] << std::endl;
  }
  return 0;
}
