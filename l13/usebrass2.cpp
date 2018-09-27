#include <iostream>
#include "brass.h"

using namespace std;
int main() {
  BrassAccount * bra[4];

  bra[0] = new BrassAccount("A", 1, 1000);
  bra[1] = new BrassAccount("B", 2, 2000);
  bra[2] = new BrassPlusAccount("C", 3, 3000);
  bra[3] = new BrassPlusAccount("D", 4, 4000);

  for (int i = 0; i < 4; i++)
    bra[i]->ViewAcct();

  for (int i = 0; i < 4; i++)
    delete bra[i];

  return 0;
}

