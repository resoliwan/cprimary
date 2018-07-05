#include <iostream>
using namespace std;

int main() {
  int rats = 101;
  int & rodents = rats;
  // int const * prats = &rats;
  
  cout << rodents << endl;
  cout << &rodents << endl;
  
  int bunnies = 10;
  rodents = bunnies;
  
  cout << rodents << endl;
  cout << &rodents << endl;

  cout << bunnies << endl;
  cout << rats << endl;


  return 0;
}

