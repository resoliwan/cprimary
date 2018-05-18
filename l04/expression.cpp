#include<iostream>

int main() {
  using namespace std;
  int x;

  cout << "The assigment expression has value" << endl;
  cout << (x = 100) << endl;

  cout << "The relational expression has value" << endl;
  cout << (1 < 2) << endl;
  cout << (1 > 2) << endl;

  cout.setf(ios_base::boolalpha);
  cout << "Change to cout bool value to boolen" << endl;
  cout << (1 < 2) << endl;
  cout << (1 > 2) << endl;

  return 0;
}
