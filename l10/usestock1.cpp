#include <iostream>
#include "stock10.h"

int main() 
{
  {
    using std::cout;
    cout << "Using constructors to create new objects\n";
    Stock stock1("c:1", 1, 1);
    stock1.show();

    Stock stock2("c:2", 2, 2);
    stock2.show();

    cout << "Assing stock1 to stock2\n";
    stock2 = stock1;

    cout << "Listing stock1 to stock2\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("c:3", 3, 3);
    stock1.show();
    
    cout << "done\n";
  }

  return 0;
}
