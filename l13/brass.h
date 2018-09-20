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
  bool Deposit(double amt);
  //1.  ? return type ?
  // 2. What happend if not defined as virtual in base class
  // and call it drived object method using base type pointer ?
  //  not virual
  // BasePlus a()
  // Base * b = a
  // b.viewAcc(); //BasePlus.ViewAcc()? Base.ViewAcc()?
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
  // ? return type ?
  virtual void Withdraw(double amt);
  void ResetMax(double m) { maxLoan = m; };
  void ResetRate(double r) { rate = r; };
  void ResetOwes() { owesBank = 0; };
};
#endif
