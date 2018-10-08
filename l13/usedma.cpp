#include <iostream>
#include "dma.h"
using namespace std;

int main() {
  BaseDMA b("Potabelly", 8);
  cout << "Displaying BaseDMA object:\n";
  cout << b << endl;

  LacksDMA l("red", "Blimpo", 4);
  cout << "Displaying LacksDMA object:\n";
  cout << l << endl;

  HasDMA h("Mercator", "Buffalo Kyes", 4);
  cout << "Displaying HasDMA object:\n";
  cout << h << endl;

  LacksDMA cl(l);
  cout << "Result of LacksDMA copy:\n";
  cout << cl << endl;

  HasDMA ah;
  ah = h;
  cout << "Result of HasDMA assignment:\n";
  cout << ah << endl;

  HasDMA ch = h;
  cout << "Result of HasDMA copy:\n";
  cout << ch << endl;

  return 0;
}

