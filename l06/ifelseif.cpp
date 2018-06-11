#include<iostream>
const int Fave = 27;

int main() {
  using namespace std;
  int num;

  cout << "Enter a number in range 0-100 to find my favorite number: ";
  do {
    cin >> num;

    if (num > Fave) {
      cout << "Too high -- guess again: ";
    } else if (num < Fave) {
      cout << "Too low -- guess again: ";
    } else {
      cout << num << " is right!";
    }
  } while (num != Fave);


  return 0;
}

