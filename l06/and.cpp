#include<iostream>

const int ArSize = 6;

int main() {
  using namespace std;
  cout << "Eneter 6 positive numbers: " << endl;

  int ns[ArSize] = {0};
  int i = 0;

  cout << "First value: ";
  cin >> ns[i];

  while(ns[i] > 0 && i < ArSize) {
    ++i;
    if (i < ArSize) {
      cout << "Next value: ";
      cin >> ns[i];
    }
  }

  if (i == 0)
    cout << "No data--";
  else {
    cout << "Enter your number: ";
    int yourNumber = 0;
    int cnt = 0;

    cin >> yourNumber;
    for (int j = 0; j < i; j++) {
      if (yourNumber < ns[j])
        ++cnt;
    }

    cout << cnt << "of numbers greater than your number" << endl;
  }
  return 0;
}

