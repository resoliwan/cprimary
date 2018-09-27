#include <iostream>
#include "brass.h"
#include <cmath>

using std::cout;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

format setFormat() 
{
  return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}


void restore(format f, precis p)
{
  cout.setf(f, std::ios_base::floatfield);
  cout.precision(p);
}


BrassAccount::BrassAccount(const string & s, long an, double bal)
{
  fullName = s;
  acctNum = an;
  balance = bal;
}

void BrassAccount::Deposit(double amt)
{
  if (amt < 0) 
    cout << "Negaive deposit not allowed" << std::endl;
  else
    balance += amt;
}

void BrassAccount::Withdraw(double amt)
{
  if (amt < 0)
    cout << "Withdraw amount must be positive.\n";
  else if (amt > balance)
    cout << "Insufficient balance: " << (amt - balance) << "\n";
  else
    balance -= amt;
}

void BrassAccount::ViewAcct() const
{
  format initailState = setFormat();
  precis prec = cout.precision(3);
  
  cout << "fullName: " << fullName << ", acctNum: " 
    << acctNum << " , balance: " << balance << std::endl;

  restore(initailState, prec);
}


BrassPlusAccount::BrassPlusAccount(const string & s, long an, double ml, double r)
  : BrassAccount(s, an, ml)
{
  maxLoan = ml;
  owesBank = 0.0;
  rate = r;
}

BrassPlusAccount::BrassPlusAccount(const BrassAccount & ba, double ml, double r)
  : BrassAccount(ba)
{
  maxLoan = ml;
  owesBank = 0.0;
  rate = r;
}

void BrassPlusAccount::Withdraw(double amt)
{
  double bal = Balance();
  if (amt <= bal) {
    BrassAccount::Withdraw(amt);
  }
  else if (amt <= bal + maxLoan - owesBank)
  {
    double advanced = amt - bal;
    BrassAccount::Withdraw(bal);
    owesBank += advanced;
  } else
      cout << "Credit limit exceeded.\n";

}

void BrassPlusAccount::ViewAcct() const
{
  format initailState = setFormat();
  precis prec = cout.precision(3);
  
  BrassAccount::ViewAcct();
  cout << "maxLoan: " << maxLoan << ", rate: " 
    << rate << " , owesBank: " << owesBank << std::endl;

  restore(initailState, prec);
}
