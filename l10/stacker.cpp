#include <iostream>
// #include <cctype>
#include "stack.h"

int main()
{
  using namespace std;
  Stack s = Stack();
  char order;
  unsigned long orderno;

  cout << "Please enter A to add a purchase order\n"
    << "P to process a PO, or Q to quit.\n";

  while (cin >> order && toupper(order) != 'Q')
  {
    switch (toupper(order)) {
      case 'A':
        cout << "Enter a PO number to add: ";
        cin >> orderno;
        if (!s.push(orderno))
          cout << "Stack is already full\n";
        break;
      case 'P':
        if (s.pop(orderno)) 
          cout << "PO #" << orderno << " poped\n";
        else 
          cout << "Stack is emtpy\n";
        break;
    }
    cout << "Please enter A to add a purchase order\n"
      << "P to process a PO, or Q to quit.\n";
  }

  cout << "Bye!!! bro\n";
}
