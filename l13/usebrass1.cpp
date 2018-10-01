#include <iostream>
#include "brass.h"

using std::cout;


int main()
{
  BrassAccount pigg = BrassPlusAccount("pigg", 99, 4000);

  pigg.ViewAcct();
  cout << "Withdraw $4200 from the pigg\n";
  pigg.Withdraw(4200);


  BrassPlusAccount hogg = BrassAccount("hogg", 88, 3000);
  cout << "Depositing $1000 into the hogg\n";
  hogg.Deposit(1000);

  hogg.ViewAcct();
  cout << "Withdrawn 4200 from the hogg\n";
  hogg.Withdraw(4200);
  hogg.ViewAcct();

  return 0;
}
