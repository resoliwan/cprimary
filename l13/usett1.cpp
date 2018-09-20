#include <iostream>
#include "tabtenn1.h"

int main( void )
{
  using namespace std;
  RatedPlayer p1(1, "f1", "l1", true);
  RatedPlayer p2(2, "f2", "l2", false);

  p1.Name();
  if (p1.HasTable())
    cout << ": has a table.\n";
  else 
    cout << ": has't a table.\n";
  cout << " Rating " << p1.Rating() << endl;

  p2.Name();
  if (p2.HasTable())
    cout << ": has a table.\n";
  else 
    cout << ": has't a table.\n";
  cout << " Rating " << p2.Rating() << endl;

  return 0;
}
