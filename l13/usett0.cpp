#include <iostream>
#include "tabtenn0.h"

int main( void )
{
  using namespace std;
  TableTennisPlayer p1("f1", "l1", true);
  TableTennisPlayer p2("f2", "l2", false);

  p1.Name();
  if (p1.HasTable())
    cout << ": has a table.\n";
  else 
    cout << ": has't a table.\n";

  p2.Name();
  if (p2.HasTable())
    cout << ": has a table.\n";
  else 
    cout << ": has't a table.\n";

  return 0;
}
