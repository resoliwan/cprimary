#include <iostream>
#include <string>
#include "stock20.h"

const int SIZE = 4;

int main() 
{
  using std::cout;

  Stock stocks[SIZE] = {
    Stock("c:1", 1, 1.0),
    Stock("c:2", 2, 2.0),
    Stock("c:3", 3, 3.0),
    Stock("c:4", 4, 4.0),
  };

  cout << "Stock holdings:\n";
  int i;
  for (i = 0; i < SIZE; i++)
    stocks[i].show();

  const Stock * top = &stocks[0];
  for (i = 1; i < SIZE; i++) 
    top = &top->topval(stocks[i]);
    // top = &stocks[i].topval(*top);

  cout << "Most valuable holding:\n";
  top->show();

  return 0;
}
