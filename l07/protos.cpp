#include<iostream>
using namespace std;

void cheers(int n);
double cube(double n);

int main() {
  double n;
  cheers(5);
  cout << "Give me a number: ";
  cin >> n;
  cout << "A " << n << "-foot cube has a volume of " << cube(n) << " cubic feet\n";
  cheers(cube(2));
  return 0;
}

void cheers(int n) {
  for (int i = 0; i < n; i++)
    cout << "Cheers!  ";
  cout << endl;
}

double cube(double n) {
  return n * n * n;
}
