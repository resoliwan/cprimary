#include <iostream>
#include "stock10.h"

Stock::Stock()
{
  std::cout << "Default constructor called\n";
  company = "no name";
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
  std::cout << "Constructer using " << co << " called \n";
  company = co;
  shares = n;

  if (n < 0) {
    std::cout << "Number of shares can't be negative;";
    shares = 0;
  }
  else
    shares = n;

  share_val = pr;
  set_tot();
}

Stock::~Stock()
{
  std::cout << "Bye, " << company << "!\n";
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

void Stock::show()
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
