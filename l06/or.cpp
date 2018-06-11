#include<iostream>

int main() {
  using namespace std;
  char ch;

  cout << "Do you with to countiune?  <y/n> ";
  cin.get(ch);

  cout << endl;
  if (ch == 'y' || ch == 'Y')
    cout << "Continue...";
  else if (ch == 'n' || ch == 'N')
    cout << "Don't contiunue..";
  else
    cout << "It wasn't a y or n";
  return 0;
}

