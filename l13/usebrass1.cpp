#include <iostream>
#include "brass.h"

using std::cout;
// Client: Porcelot Pigg Account Number: 381299 Balance: $4000.00
//
// Client: Horatio Hogg Account Number: 382288 Balance: $3000.00 Maximum loan: $500.00 Owed to bank: $0.00 Loan Rate: 11.125%
//
// Depositing $1000 into the Hogg Account:
//
// New balance: $4000 Withdrawing $4200 from the Pigg Account:
//
// Withdrawal amount of $4200.00 exceeds your balance. Withdrawal canceled.
//
// Pigg account balance: $4000 Withdrawing $4200 from the Hogg Account:
//
// Bank advance: $200.00 Finance charge: $22.25 Client: Horatio Hogg Account Number: 382288 Balance: $0.00 Maximum loan: $500.00 Owed to bank: $222.25 Loan Rate: 11.125%

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
