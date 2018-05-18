#include<iostream>

int main() {
  using namespace std;
  int i = 5;
  for (i = 5; i; i--) 
    cout << i << endl;

  cout << "Done now that i = " << i << endl;

  return 0;
}
