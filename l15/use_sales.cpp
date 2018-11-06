#include <iostream>
#include "sales.h"

int main()
{
  using namespace std;
  const double firstYear[12] = {
    1, 2, 3, 4, 5, 6,
    7, 8, 9, 10, 11, 12
  };

  const double secondYear[12] = {
    101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112
  };

  Sales s(2000, firstYear, 12);
  LabelSales ls("secondYear", 2001, secondYear, 12);

  try 
  {
    cout << "Year: " << s.Year() << endl;
    for (int i = 0; i < 12; ++i) {
      cout << s[i] << ", ";
    }

    cout << "Year: " << ls.Year() << endl;
    for (int i = 0; i <= 12; ++i) {
      cout << ls[i] << ", ";
    }

  } 
  catch (Sales::bad_index & bi) 
  {
    cout << endl;
    cout << "Bad_indexerror" << endl;;
    cout << bi.what() << endl;
  } 
  catch (logic_error & l)
  {
    cout << "logic_error" << endl;
  }

  try 
  {
   ls[13] = 40;
  } 
  catch (LabelSales::nbad_index & nbi) 
  {
    cout << endl;
    cout << "nbad_indexerror" << endl;
    cout << nbi.what() << endl;
  }
  
  return 0;
}
