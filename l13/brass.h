#ifndef BRASS_HEAD_
#define BRASS_HEAD_
#include <iostream>

using std::string;

class BrassAccount 
{
private:
  string fullName;
  long acctNum;
  double balance;
public:
  BrassAccount(const string & s = "Nullbody", long an = -1, double bal = 0.0);
  double Balance();
  void Deposit(double amt);
  virtual void Withdraw(double amt);
  virtual void ViewAcct() const;
  virtual ~BrassAccount() {};
};

class BrassPlusAccount: public BrassAccount 
{
private:
  double maxLoan;
  double rate;
  double owesBank;
public:
  BrassPlusAccount(const string & s = "Nullbody", long an = -1,
      double ml = 500, double r = 11.125);
  BrassPlusAccount(const BrassAccount & ba, 
      double ml = 500, double r = 11.125);
  virtual void ViewAcct() const;
  virtual void Withdraw(double amt);
  void ResetMax(double m) { maxLoan = m; };
  void ResetRate(double r) { rate = r; };
  void ResetOwes() { owesBank = 0; };
};
#endif
