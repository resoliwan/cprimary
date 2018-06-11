#include<iostream>

using namespace std;

void showmenu();
void report();
void confirm();

int main() {
  cout << "Q1) please enter 1, 2, 3, 4, 5\n";
  showmenu();
  char choice;
  cin >> choice;
  while(choice != 5) {
    switch(choice) {
      case '1': 
        cout << "Alarm called\n";
        break;
      case '2': 
        report();
        break;
      case '3': 
        cout << "Alibi called\n";
        break;
      case '4': 
        confirm();
        break;
      default:
        cout << "Chosse 1~4\n";
    }
    cin >> choice;
  }

  return 0;
}

void showmenu() {
  cout << "1) alarm\t 2) report\n";
  cout << "3) alibi\t 4) comport\n";
  cout << "5) quit\n";
}

void report() {
  cout << "Report called\n";
}

void confirm() {
  cout << "Confirm called\n";
}
