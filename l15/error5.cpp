#include <iostream>
#include <cmath>
#include "exe_mean.h"
using namespace std;

class demo 
{
private:
  string word;
public:
  demo(const string & str)
  {
    word = str;
    std::cout << "demo " << word << " created\n"; 
  }
  ~demo()
  {
    std::cout << "demo " << word << " destoyed\n"; 
  }

  void show() const 
  {
    std::cout << "demo " << word << " lives!\n"; 
  }
};

double hmean(double, double);
double gmean(double, double);
double means(double, double);

int main(void)
{
  double x, y, z;
  {
    demo d1("found in block in main()");
    cout << "Enter two number: ";
    while (cin >> x >> y) 
    {
      try 
      {
        z = means(x, y);
        cout << "The mean " << x << " and " << y << " is " << z << endl;
      }
      catch (bad_hmean  & bh)
      {
        bh.mesg();
        cout << "bh: Enter next set of numbers: <q to quit>";
        continue;
      }
      catch (bad_gmean  & gh)
      {
        gh.mesg();
        cout << "gh: Enter next set of numbers: <q to quit>";
        continue;
      }
      break;
    }
    d1.show();
  }

  cout << "Bye\n";
  
  return 0;
}

double hmean(double a, double b)
{
  if (a == -b)
    throw bad_hmean(a, b);
  return 2 * a * b / (a + b);
}

double gmean(double a, double b)
{
  if (a < 0 || b < 0)
    throw bad_gmean(a, b);
  return std::sqrt(a * b);
}

double means(double a, double b)
{
  double am, hm, gm;
  demo d2("found in means()");
  am = (a + b) / 2.0;

  try {
    hm = hmean(a, b);
    gm = gmean(a, b);
  
  }catch(bad_hmean bh) {
    bh.mesg();
    cout << "Caught in means()\n";
    throw; //rethorw
  }
  d2.show();

  return (am + hm + gm) / 3.0;
}
