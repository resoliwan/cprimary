#include "workermi.h"
#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 2;

int main()
{
  Worker * wks[SIZE];

  int i;
  for (i = 0; i < SIZE; ++i) {
    char choice;
    cout << "Enter the employee's category:\n"
      << "w: watier, s: singer, t: singingWaiter, q: quit\n";
    cin >> choice;

    while (strchr("wstq", choice) == NULL) {
      cout << "Enter w or s or t or q ";
      cin >> choice;
    }

    if (choice == 'q')
      break;
    switch (choice) {
      case 'w':
        wks[i] = new Waiter;
        break;
      case 's':
        wks[i] = new Singer;
        break;
      case 't':
        wks[i] = new SingingWaiter;
        break;
    }
    cin.get();
    wks[i]->Set();
  }

  for (i = 0; i < SIZE; ++i) {
    wks[i]->Show();
  }
  
  return 0;
}

