#include<iostream>

int main() {
  using namespace std;
  cout << "Enter the numbers in range 1-10 to find ";
  int n;
  cout << "My favorite number\n";
  do {
    cin >> n;
  } while(n != 7);
  cout << "Yes, 7 is My favorite.\n";
  return 0;
}

