#include <iostream>
// #include <cctype>
#include "stack.h"

int main()
{
  using namespace std;
  Stack<std::string> s;
  char order;
  std::string po;

  cout << "Please enter A to add a purchase order\n"
    << "P to process a PO, or Q to quit.\n";

  while (cin >> order && toupper(order) != 'Q')
  {
    switch (toupper(order)) {
      case 'A':
        cout << "Enter a PO number to add: ";
        cin >> po;
        if (!s.push(po))
          cout << "Stack is already full\n";
        break;
      case 'P':
        if (s.pop(po)) 
          cout << "PO #  " << po << " poped\n";
        else 
          cout << "Stack is emtpy\n";
        break;
    }
    cout << "Please enter A to add a purchase order\n"
      << "P to process a PO, or Q to quit.\n";
  }

  cout << "Bye!!! bro\n";
}
