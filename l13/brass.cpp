#include <iostream>
#include "brass.h"

using std::cout;

BrassAccount::BrassAccount(const string & s, long an, double bal)
{
  fullName = s;
  acctNum = an;
  balance = bal;
}

void BrassAccount::Deposit(double amt)
{
  balance += amt;
}

void BrassAccount::Withdraw(double amt)
{
  double lefted = balance - amt;
  if (lefted < 0)
    cout << "Insufficient balance: " << -1 * lefted << "\n";
  else
    balance = lefted;
}

void BrassAccount::ViewAcct() const
{
  cout << "fullName: " << fullName << ", acctNum: " 
    << acctNum << " , balance: " << balance;
}


BrassPlusAccount::BrassPlusAccount(const string & s, long an, double ml, double r)
  : BrassAccount(s, an, ml)
{
  maxLoan = ml;
  rate = r;
}

BrassPlusAccount::BrassPlusAccount(const BrassAccount & ba, double ml, double r)
  : BrassAccount(ba)
{
  maxLoan = ml;
  rate = r;
}

void BrassPlusAccount::Withdraw(double amt)
{
  double bal = Balance();
  double lefted = bal - amt;
  if (lefted > 0) {
    BrassAccount::Withdraw(amt);
  }
  else
  {
    double loan = lefted + maxLoan;
    if (loan < maxLoan)
      BrassAccount::Withdraw(amt);


  }
    balance = lefted;
}

void BrassAccount::ViewAcct() const
{
  cout << "fullName: " << fullName << ", acctNum: " 
    << acctNum << " , balance: " << balance;
}
