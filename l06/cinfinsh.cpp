#include<iostream>
const int MAX = 5;

int main() {
  using namespace std;
  double fish[MAX] = {0};

  cout << "Enter the weights of your fish.\n";
  cout << "You may enter up to " << MAX << "<q to terminate>\n";

  int i = 0;
  cout << "fish #1 ";
  while (i < MAX && cin >> fish[i]) {
    if (++i < MAX) {
      cout << "fish #" << (i+1) << ": ";
    }
  }

  double total = 0.0;
  for (int j; j < i; j++)
    total += fish[j];

  if (i == 0)
    cout << "No fish\n";
  else 
    cout << total / i << " = average weight of " << i << " fish\n";

  return 0;
}

