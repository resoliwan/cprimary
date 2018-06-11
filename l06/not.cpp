#include<iostream>
#include<climits>

bool is_in_range(double);

int main() {
  using namespace std;
  cout << "Enter an integer value from 0 to 100: ";
  double num;
  cin >> num;
  while (!is_in_range(num)) {
    cout << "Out of range -- please try again: ";
    cin >> num;
  }

  int val = int (num);
  cout << "You've entered the integer: " << val << endl;
  return 0;
}

bool is_in_range(double num) {
  // return (num >= INT_MIN && num <= INT_MAX);
  return (num >= 0 && num <= 100);
}
