#include <iostream>
#include "stock00.h"

using namespace std;

int main() {
  Stock cat;
  cat.acquire("dog", 1, 1);
  cat.show();
  cat.buy(1, 2);
  cat.show();
  cat.sell(1, 3);
  cat.show();
  cat.update(4);
  cat.show();

  return 0;
}
