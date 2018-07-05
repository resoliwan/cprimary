#include <iostream>
using namespace std;

int main() {
  int rats = 101;
  int & rodents = rats;

  cout << "rats add: " << &rats << " value: " << rats << endl;
  cout << "rodents add: " << &rodents << " value: " << rodents << endl;

  return 0;
}

