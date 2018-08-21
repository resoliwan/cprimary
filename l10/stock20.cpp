#include <iostream>
#include "stock20.h"

Stock::Stock()
{
  company = "no name";
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr) 
{
  company = co;
  shares = n;
  share_val = pr;
  set_tot();
}

Stock::~Stock(){
  using std::cout;
  cout << "company: " << company << " bye~\n";
}

const Stock & Stock::topval(const Stock & s) const
{
  if (total_val > s.total_val)
    return *this;
  else
    return s;
}

void Stock::buy(long num, double price)
{
  if (num < 0)
  {
    std::cout << "Number of shares purchased cant't be nagative."
      << "Transaction is aborted.\n";
  }
  else
  {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(long num, double price)
{
  if (num < 0)
  {
    std::cout << "Number of shares sold can't be negative." 
      << "Transaction is aborted.\n";
  }
  else if (num > shares)
  {
    std::cout << "you can't sell more then you have"
      << "Transaction is aborted.\n";
  }
  else
  {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price)
{
  share_val = price;
  set_tot();
}

void Stock::show() const
{
  using std::cout;
  using std::ios_base;

  // set formatto #.###
  ios_base::fmtflags preFlags = cout.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prePrec = cout.precision(3);

  cout << "Company: " << company
    << " shares: " << shares << "\n"
    << " Share price: $" << share_val 
    << " Total worth: $" << total_val << "\n";

  cout.setf(preFlags, ios_base::floatfield);
  cout.precision(prePrec);
}
