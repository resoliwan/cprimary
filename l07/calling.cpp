#include<iostream>
using namespace std;

void simple();

int main() {
  cout << "main() will call the simple() function\n";
  simple();
  cout << "main() is finished with simple() function.\n";

  return 0;
}

void simple() {
  cout << "I am a simple function\n";
}
