#include<iostream>
const int MAX = 5;

int main() {
  using namespace std;
  int golf[MAX] = {0};
  int i;
  cout << "Enter your golf score up to " << MAX << "\n";

  for (i = 0; i < MAX; i++) {
    cout << "Score #"<< i + 1<<": ";
    while (!(cin >> golf[i])) {
      cin.clear();
      while (cin.get() != '\n') 
        continue;
      cout << "Please enter a number: ";
    }
  }

  int total = 0;
  for (int j = 0; j < i; j++)
    total += golf[j];

  if (i == 0)
    cout << "No score.\n";
  else 
    cout << total / i << " << average score of golf.\n";

  return 0;
}

