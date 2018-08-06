#include <iostream>

using namespace std;
extern double warming;

void update(double dt) {
  extern double warming;
  warming += dt;
}

void local() {
  double warming = 10;
  cout << "Local warming is " << warming << endl;
  cout << "But global warming is " << ::warming << endl;
}
